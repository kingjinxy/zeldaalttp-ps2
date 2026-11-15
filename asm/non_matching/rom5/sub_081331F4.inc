	THUMB_FUNC_START sub_081331F4
sub_081331F4: @ 0x081331F4
	push {r4,lr}
	ldr r2, _08133230  @ =gUnknown_0822BB64
	ldr r1, _08133234  @ =gRam
	ldr r3, _08133238  @ =0x00000CA9
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	mov r3, #7
	lsl r0, r0, #1
	ldr r4, _0813323C  @ =gUnknown_02030210
	add r2, r0, r4
	mov r0, #202
	lsl r0, r0, #4
	add r1, r1, r0
	ldrh r0, [r1]
	lsl r0, r0, #1
	ldr r4, _08133240  @ =gUnknown_02000AD0
	add r1, r0, r4
_0813321C:
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _0813321C
	pop {r4}
	pop {r0}
	bx r0
_08133230:
	.4byte gUnknown_0822BB64
_08133234:
	.4byte gRam
_08133238:
	.4byte 0x00000CA9
_0813323C:
	.4byte gUnknown_02030210
_08133240:
	.4byte gUnknown_02000AD0
	THUMB_FUNC_END sub_081331F4

