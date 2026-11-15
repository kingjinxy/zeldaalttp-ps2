	THUMB_FUNC_START sub_0801FE00
sub_0801FE00: @ 0x0801FE00
	push {r4-r6,lr}
	add r4, r0, #0
	add r0, r0, #40
	ldrb r1, [r0]
	mov r6, #3
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0801FE46
	mov r0, #15
	mov r1, #17
	mov r2, #0
	bl sub_0804C8A8
	add r5, r0, #0
	cmp r5, #0
	beq _0801FE46
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r6, #0
	and r0, r0, r1
	lsl r0, r0, #1
	ldr r1, _0801FE4C  @ =gUnknown_0813B264
	add r0, r0, r1
	mov r2, #0
	ldrsb r2, [r0, r2]
	lsl r2, r2, #16
	mov r3, #1
	ldrsb r3, [r0, r3]
	lsl r3, r3, #16
	add r0, r4, #0
	add r1, r5, #0
	bl sub_0803D4A4
_0801FE46:
	pop {r4-r6}
	pop {r0}
	bx r0
_0801FE4C:
	.4byte gUnknown_0813B264
	THUMB_FUNC_END sub_0801FE00

