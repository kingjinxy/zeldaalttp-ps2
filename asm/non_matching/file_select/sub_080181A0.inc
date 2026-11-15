	THUMB_FUNC_START sub_080181A0
sub_080181A0: @ 0x080181A0
	push {r4,r5,lr}
	ldr r4, [r0, #84]
	ldrh r1, [r4, #50]
	strh r1, [r0, #50]
	ldrh r1, [r4, #54]
	add r1, r1, #1
	strh r1, [r0, #54]
	ldrh r1, [r4, #58]
	sub r1, r1, #1
	strh r1, [r0, #58]
	ldrb r3, [r4, #31]
	lsr r3, r3, #6
	lsl r3, r3, #6
	ldrb r5, [r0, #31]
	mov r2, #63
	add r1, r2, #0
	and r1, r1, r5
	orr r1, r1, r3
	strb r1, [r0, #31]
	ldrb r1, [r4, #29]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r3, [r0, #29]
	and r2, r2, r3
	orr r2, r2, r1
	strb r2, [r0, #29]
	ldr r2, _080181E8  @ =gUnknown_08139790
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r4,r5}
	pop {r1}
	bx r1
_080181E8:
	.4byte gUnknown_08139790
	THUMB_FUNC_END sub_080181A0

