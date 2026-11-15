	THUMB_FUNC_START sub_08011BB8
sub_08011BB8: @ 0x08011BB8
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r6, _08011BDC  @ =gUnknown_02016D60
	mov r5, #1
	strb r5, [r6, #27]
	bl sub_08011BE0
	add r0, r4, #0
	bl sub_0803D8AC
	cmp r0, #0
	beq _08011BD4
	strb r5, [r4, #20]
	strb r5, [r6, #29]
_08011BD4:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08011BDC:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08011BB8

