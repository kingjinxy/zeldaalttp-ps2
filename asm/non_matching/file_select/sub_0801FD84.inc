	THUMB_FUNC_START sub_0801FD84
sub_0801FD84: @ 0x0801FD84
	push {r4,lr}
	add r4, r0, #0
	ldr r2, [r4, #100]
	mov r1, #12
	bl sub_08009998
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801FDF6
	add r0, r4, #0
	add r0, r0, #42
	ldrb r0, [r0]
	mov r1, #3
	and r1, r1, r0
	cmp r1, #1
	beq _0801FDCA
	cmp r1, #1
	bgt _0801FDB4
	cmp r1, #0
	beq _0801FDBE
	b _0801FDF6
_0801FDB4:
	cmp r1, #2
	beq _0801FDD6
	cmp r1, #3
	beq _0801FDE2
	b _0801FDF6
_0801FDBE:
	mov r1, #54
	ldrsh r0, [r4, r1]
	ldr r1, [r4, #100]
	mov r2, #54
	ldrsh r1, [r1, r2]
	b _0801FDEC
_0801FDCA:
	ldr r0, [r4, #100]
	mov r1, #50
	ldrsh r0, [r0, r1]
	mov r2, #50
	ldrsh r1, [r4, r2]
	b _0801FDEC
_0801FDD6:
	ldr r0, [r4, #100]
	mov r1, #54
	ldrsh r0, [r0, r1]
	mov r2, #54
	ldrsh r1, [r4, r2]
	b _0801FDEC
_0801FDE2:
	mov r1, #50
	ldrsh r0, [r4, r1]
	ldr r1, [r4, #100]
	mov r2, #50
	ldrsh r1, [r1, r2]
_0801FDEC:
	sub r0, r0, r1
	cmp r0, #55
	bgt _0801FDF6
	mov r0, #1
	b _0801FDF8
_0801FDF6:
	mov r0, #0
_0801FDF8:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0801FD84

	.byte 0x00
	.byte 0x00
