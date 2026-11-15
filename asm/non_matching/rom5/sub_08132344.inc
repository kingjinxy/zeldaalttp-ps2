	THUMB_FUNC_START sub_08132344
sub_08132344: @ 0x08132344
	push {r4,lr}
	mov r2, #0
	ldr r4, _08132434  @ =gUnknown_02000C00
	ldr r3, _08132438  @ =gUnknown_02000800
_0813234C:
	add r0, r2, #0
	add r0, r0, #64
	asr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r2, #0
	add r0, r0, #80
	asr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r2, #0
	add r0, r0, #96
	asr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r2, #0
	add r0, r0, #112
	asr r0, r0, #1
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
	add r0, r2, #0
	add r0, r0, #144
	asr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r2, #0
	add r0, r0, #160
	asr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r2, #0
	add r0, r0, #176
	asr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r2, #0
	add r0, r0, #192
	asr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r2, #0
	add r0, r0, #208
	asr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r2, #0
	add r0, r0, #224
	asr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r2, #0
	add r0, r0, #240
	asr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r4
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r2, #2
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #16
	bne _0813234C
	ldr r1, _08132434  @ =gUnknown_02000C00
	ldr r0, _0813243C  @ =gUnknown_02000C80
	ldrh r0, [r0]
	strh r0, [r1]
	bl sub_08132280
	ldr r0, _08132440  @ =gRam
	ldr r1, _08132444  @ =0x0000099B
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08132434:
	.4byte gUnknown_02000C00
_08132438:
	.4byte gUnknown_02000800
_0813243C:
	.4byte gUnknown_02000C80
_08132440:
	.4byte gRam
_08132444:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08132344

