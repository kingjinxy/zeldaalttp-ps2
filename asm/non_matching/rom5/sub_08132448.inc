	THUMB_FUNC_START sub_08132448
sub_08132448: @ 0x08132448
	push {r4,r5,lr}
	mov r2, #126
	ldr r5, _0813248C  @ =gRam
	ldr r4, _08132490  @ =gUnknown_02000C00
	ldr r3, _08132494  @ =gUnknown_02000800
_08132452:
	lsr r0, r2, #1
	lsl r0, r0, #1
	add r1, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r2, #0
	add r0, r0, #128
	asr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	sub r0, r2, #2
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _08132452
	ldr r0, _08132498  @ =0x0000099B
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_08132280
	pop {r4,r5}
	pop {r0}
	bx r0
_0813248C:
	.4byte gRam
_08132490:
	.4byte gUnknown_02000C00
_08132494:
	.4byte gUnknown_02000800
_08132498:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08132448

