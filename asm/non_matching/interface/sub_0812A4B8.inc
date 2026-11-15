	THUMB_FUNC_START sub_0812A4B8
sub_0812A4B8: @ 0x0812A4B8
	push {r4,lr}
	add r2, r0, #0
	mov r1, #0
	ldr r4, _0812A4DC  @ =gUnknown_03000108
	mov r3, #1
	neg r3, r3
_0812A4C4:
	lsl r0, r1, #24
	asr r1, r0, #24
	lsl r0, r1, #3
	add r0, r0, r4
	ldr r0, [r0]
	cmp r0, r3
	beq _0812A4D6
	cmp r0, r2
	bne _0812A4E0
_0812A4D6:
	add r0, r1, #0
	b _0812A4F0
	.byte 0x00
	.byte 0x00
_0812A4DC:
	.4byte gUnknown_03000108
_0812A4E0:
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	asr r0, r0, #24
	cmp r0, #1
	ble _0812A4C4
	mov r0, #1
	neg r0, r0
_0812A4F0:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812A4B8

	.byte 0x00
	.byte 0x00
