	THUMB_FUNC_START sub_08016084
sub_08016084: @ 0x08016084
	push {r4-r6,lr}
	ldr r5, _080160DC  @ =gUnknown_0201F024
	mov r0, #192
	lsl r0, r0, #6
	add r1, r5, r0
	ldr r6, _080160E0  @ =0x04000800
	add r0, r5, #0
	add r2, r6, #0
	bl CpuSet
	ldr r4, _080160E4  @ =gUnknown_0200B324
	mov r2, #192
	lsl r2, r2, #6
	add r1, r4, r2
	add r0, r4, #0
	add r2, r6, #0
	bl CpuSet
	ldr r0, _080160E8  @ =gUnknown_02016D90
	sub r5, r5, #4
	add r1, r5, #0
	bl sub_080159F4
	ldr r0, _080160EC  @ =gUnknown_020031D0
	sub r4, r4, #4
	add r1, r4, #0
	bl sub_080159F4
	ldr r0, _080160F0  @ =gUnknown_02016470
	mov r2, #128
	lsl r2, r2, #2
	add r1, r0, r2
	mov r2, #8
	bl CpuFastSet
	ldr r2, _080160F4  @ =gUnknown_0200B310
	ldr r0, [r2]
	mov r1, #128
	lsl r1, r1, #14
	orr r0, r0, r1
	str r0, [r2]
	pop {r4-r6}
	pop {r0}
	bx r0
_080160DC:
	.4byte gUnknown_0201F024
_080160E0:
	.4byte 0x04000800
_080160E4:
	.4byte gUnknown_0200B324
_080160E8:
	.4byte gUnknown_02016D90
_080160EC:
	.4byte gUnknown_020031D0
_080160F0:
	.4byte gUnknown_02016470
_080160F4:
	.4byte gUnknown_0200B310
	THUMB_FUNC_END sub_08016084

