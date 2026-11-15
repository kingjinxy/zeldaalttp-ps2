	THUMB_FUNC_START sub_08011B7C
sub_08011B7C: @ 0x08011B7C
	push {r4,r5,lr}
	add r4, r0, #0
	bl sub_08011BE0
	ldr r5, _08011BB4  @ =gUnknown_02016D60
	ldrb r0, [r4, #24]
	ldrb r1, [r5, #26]
	cmp r0, r1
	beq _08011BAE
	ldrh r0, [r4, #50]
	add r1, r4, #0
	add r1, r1, #96
	strh r0, [r1]
	add r2, r4, #0
	add r2, r2, #98
	mov r0, #192
	strh r0, [r2]
	add r0, r4, #0
	mov r2, #20
	bl sub_0803D7E8
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #1
	strb r0, [r5, #27]
_08011BAE:
	pop {r4,r5}
	pop {r0}
	bx r0
_08011BB4:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08011B7C

