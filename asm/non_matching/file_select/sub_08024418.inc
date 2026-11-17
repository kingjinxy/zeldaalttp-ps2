	THUMB_FUNC_START sub_08024418
sub_08024418: @ 0x08024418
	push {r4-r6,lr}
	add r4, r0, #0
	add r0, r0, #110
	ldrh r1, [r0]
	mov r6, #128
	add r0, r6, #0
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r5, #0
	beq _08024442
	mov r0, #11
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_08024BDC
	ldr r0, [r4, #88]
	add r1, r4, #0
	bl sub_0803D3D0
	b _0802446C
_08024442:
	add r0, r4, #0
	bl GetNextFrame
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08024460
	strb r5, [r2]
	add r0, r4, #0
	bl sub_08024EFC
	b _0802446C
_08024460:
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0802446C
	mov r0, #8
	strb r0, [r4, #20]
_0802446C:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024418

	.byte 0x00
	.byte 0x00
