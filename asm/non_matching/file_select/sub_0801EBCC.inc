	THUMB_FUNC_START sub_0801EBCC
sub_0801EBCC: @ 0x0801EBCC
	push {r4,lr}
	add r4, r0, #0
	bl sub_08009664
	mov r1, #192
	lsl r1, r1, #5
	add r0, r4, #0
	bl sub_08003F1C
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801EBEC
	mov r0, #1
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
_0801EBEC:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801EBCC

	.byte 0x00
	.byte 0x00
