	THUMB_FUNC_START sub_08020364
sub_08020364: @ 0x08020364
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #126
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802038C
	add r0, r4, #0
	bl sub_0804C9C8
	add r0, r4, #0
	bl sub_08020478
	add r0, r4, #0
	bl DeleteThisEntity
	b _080203AC
_0802038C:
	add r0, r4, #0
	bl 0x08009664
	add r0, r4, #0
	bl 0x08003828
	mov r1, #192
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _080203AC
	add r0, r4, #0
	bl sub_0802043C
_080203AC:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08020364

	.byte 0x00
	.byte 0x00
