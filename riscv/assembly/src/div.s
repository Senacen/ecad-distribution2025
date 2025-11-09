.macro DEBUG_PRINT reg
csrw 0x800, \reg
.endm
	
.text
.global div              # Export the symbol 'div' so we can call it from other files
.type div, @function
div:
    addi sp, sp, -32     # Allocate stack space

    # store any callee-saved register you might overwrite
    sw   ra, 28(sp)      # Function calls would overwrite
    sw   s0, 24(sp)      # If t0-t6 is not enough, can use s0-s11 if I save and restore them
    # ...

    # do your work

    # Q := 0                 -- initialize quotient and remainder to zero
    # R := 0 
    li t0, 0 # Q
    li t1, 0 # R

    # for i = n-1...0 do     -- where n is number of bits in N
    li t2, 31 # i
    msb_scan:
        srl  t6, a0, t2         # t6 = N >> t2
        andi t6, t6, 1          # t6 = bit t2 of N
        bnez t6, msb_found      # if bit set, t2 is MSB
        addi t2, t2, -1
        bgez t2, msb_scan       # keep scanning while t2 >= 0
    msb_found:

    li t3, 0 # 

    # Get a 1 to shift for the mask
    li t5, 1

    for:
        blt t2, t3, end # if i < 0, break

        # R := R << 1          -- left-shift R by 1 bit
        slli t1, t1, 1

        # R(0) := N(i)         -- set the least-significant bit of R equal to bit i of the numerator
        srl t4, a0, t2 # Shift N to the right by i
        andi t4, t4, 1 # mask it to get ith bit in the LSB
        or t1, t1, t4 # Bitwise Or the ith bit in the LSB with R

        if:
            # if R >= D then
            blt t1, a1, endif # If R < D, jump to endif
            # R := R - D
            sub t1, t1, a1

            # Q(i) := 1
            sll t6, t5, t2 # Make a mask in t6 that is a 1 (t5) left shifted by i (t2)
            or t0, t0, t6 # Or the mask with Q to set the ith bit
        endif: 
        addi t2, t2, -1
        j for
    end:

    # if denominator != 0, jump to denom_fine
    bne a1, t3, denom_fine 

    denom_0:
        li a0, 0 # set result to 0
        li a1, 0 # set result to 0
        j end_denom # Jump to end_denom
    denom_fine:
        addi a0, t0, 0 # set result to Q
        addi a1, t1, 0 # set mod to R
    end_denom:

    

    # example of printing inputs a0 and a1
    DEBUG_PRINT a0
    DEBUG_PRINT a1

    # load every register you stored above
    lw   ra, 28(sp)
    lw   s0, 24(sp)
    # ...
    addi sp, sp, 32      # Free up stack space
    ret

