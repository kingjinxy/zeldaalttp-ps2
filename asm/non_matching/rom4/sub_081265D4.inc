	THUMB_FUNC_START sub_081265D4
sub_081265D4: @ 0x081265D4
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_08127008
	ldr r0, _0812662C  @ =gUnknown_03000050
	mov r12, r0
	mov r2, r12
	add r2, r2, #32
	add r2, r4, r2
	ldr r3, _08126630  @ =gUnknown_081808D8
	mov r1, r12
	ldrh r0, [r1, #8]
	lsr r0, r0, #2
	mov r1, #7
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	mov r0, r12
	ldrh r1, [r0, #8]
	lsr r1, r1, #5
	mov r0, #3
	and r1, r1, r0
	mov r2, r12
	add r2, r2, #48
	add r2, r4, r2
	ldr r0, _08126634  @ =gUnknown_081808D0
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	mov r0, r12
	add r0, r0, #72
	add r4, r4, r0
	ldr r0, _08126638  @ =gUnknown_081808D4
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #24
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_0812662C:
	.4byte gUnknown_03000050
_08126630:
	.4byte gUnknown_081808D8
_08126634:
	.4byte gUnknown_081808D0
_08126638:
	.4byte gUnknown_081808D4
	THUMB_FUNC_END sub_081265D4

