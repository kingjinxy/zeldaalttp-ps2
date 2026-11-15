	THUMB_FUNC_START sub_080124EC
sub_080124EC: @ 0x080124EC
	push {r4-r7,lr}
	add r5, r0, #0
	lsl r1, r1, #24
	lsr r7, r1, #24
	lsl r2, r2, #24
	lsr r6, r2, #24
	bl sub_080123E8
	add r4, r0, #0
	cmp r4, #0
	beq _08012534
	ldrb r0, [r5, #8]
	strb r0, [r4, #8]
	ldrb r0, [r5, #9]
	strb r0, [r4, #9]
	strb r7, [r4, #10]
	strb r6, [r4, #11]
	add r0, r5, #0
	add r0, r0, #80
	ldrh r1, [r0]
	add r0, r4, #0
	add r0, r0, #80
	strh r1, [r0]
	add r0, r5, #0
	add r0, r0, #82
	ldrb r0, [r0]
	add r1, r4, #0
	add r1, r1, #82
	strb r0, [r1]
	ldr r1, _0801253C  @ =gUnknown_081380F8
	ldrb r0, [r4, #8]
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r4, #0
	bl sub_08012728
_08012534:
	add r0, r4, #0
	pop {r4-r7}
	pop {r1}
	bx r1
_0801253C:
	.4byte gUnknown_081380F8
	THUMB_FUNC_END sub_080124EC

