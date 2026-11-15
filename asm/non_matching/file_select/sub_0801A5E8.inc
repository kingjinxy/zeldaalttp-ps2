	THUMB_FUNC_START sub_0801A5E8
sub_0801A5E8: @ 0x0801A5E8
	push {r4,r5,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	bl sub_0801A798
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801A604
	add r0, r4, #0
	bl sub_0801A7F0
	b _0801A63C
_0801A604:
	add r0, r4, #0
	bl 0x0800963C
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r5, #0
	bne _0801A63C
	add r0, r4, #0
	bl 0x080093A4
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	bne _0801A628
	add r0, r4, #0
	add r0, r0, #69
	strb r5, [r0]
	b _0801A63C
_0801A628:
	add r2, r4, #0
	add r2, r2, #43
	ldrb r1, [r2]
	mov r0, #16
	eor r1, r1, r0
	strb r1, [r2]
	lsr r1, r1, #3
	add r0, r4, #0
	bl 0x08003870
_0801A63C:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A5E8

	.byte 0x00
	.byte 0x00
