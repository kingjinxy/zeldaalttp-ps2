	THUMB_FUNC_START sub_08013824
sub_08013824: @ 0x08013824
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #16
	lsl r1, r1, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	lsl r3, r3, #24
	ldr r0, _08013868  @ =gUnknown_0201EFF8
	lsr r3, r3, #22
	add r5, r3, r0
	lsr r4, r4, #16
	ldrh r5, [r5]
	add r4, r4, r5
	lsl r4, r4, #16
	add r0, r0, #2
	add r3, r3, r0
	lsr r1, r1, #16
	ldrh r3, [r3]
	add r1, r1, r3
	lsl r1, r1, #16
	mov r0, #155
	lsl r0, r0, #1
	lsr r4, r4, #20
	lsr r1, r1, #20
	lsl r1, r1, #6
	orr r4, r4, r1
	lsl r4, r4, #16
	lsr r4, r4, #16
	add r1, r4, #0
	bl sub_080144F0
	pop {r4,r5}
	pop {r0}
	bx r0
_08013868:
	.4byte gUnknown_0201EFF8
	THUMB_FUNC_END sub_08013824

