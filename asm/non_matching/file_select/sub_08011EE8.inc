	THUMB_FUNC_START sub_08011EE8
sub_08011EE8: @ 0x08011EE8
	push {r4,lr}
	add r4, r0, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r0, _08011F24  @ =gUnknown_02016D60
	ldr r3, [r0, #8]
	cmp r3, #0
	beq _08011F1E
	lsl r0, r1, #16
	asr r0, r0, #16
	ldrh r1, [r4, #50]
	add r0, r0, r1
	strh r0, [r3, #50]
	lsl r0, r2, #16
	asr r0, r0, #16
	ldrh r4, [r4, #54]
	add r0, r0, r4
	strh r0, [r3, #54]
	ldrb r1, [r3, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r3, #28]
_08011F1E:
	pop {r4}
	pop {r0}
	bx r0
_08011F24:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08011EE8

