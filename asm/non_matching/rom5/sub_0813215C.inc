	THUMB_FUNC_START sub_0813215C
sub_0813215C: @ 0x0813215C
	push {r4-r6,lr}
	mov r5, #0
	ldr r6, _08132254  @ =gUnknown_02000C00
_08132162:
	add r4, r5, #0
	add r4, r4, #64
	asr r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r6
	ldrh r0, [r4]
	bl sub_081320E4
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #80
	asr r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r6
	ldrh r0, [r4]
	bl sub_081320E4
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #96
	asr r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r6
	ldrh r0, [r4]
	bl sub_081320E4
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #112
	asr r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r6
	ldrh r0, [r4]
	bl sub_081320E4
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #128
	asr r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r6
	ldrh r0, [r4]
	bl sub_081320E4
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #144
	asr r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r6
	ldrh r0, [r4]
	bl sub_081320E4
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #160
	asr r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r6
	ldrh r0, [r4]
	bl sub_081320E4
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #176
	asr r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r6
	ldrh r0, [r4]
	bl sub_081320E4
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #192
	asr r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r6
	ldrh r0, [r4]
	bl sub_081320E4
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #208
	asr r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r6
	ldrh r0, [r4]
	bl sub_081320E4
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #224
	asr r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r6
	ldrh r0, [r4]
	bl sub_081320E4
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #240
	asr r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r6
	ldrh r0, [r4]
	bl sub_081320E4
	strh r0, [r4]
	add r0, r5, #2
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #16
	bne _08132162
	ldr r0, _08132258  @ =gUnknown_02000800
	ldrh r1, [r0]
	cmp r1, #0
	beq _08132260
	ldr r0, _08132254  @ =gUnknown_02000C00
	ldr r1, _0813225C  @ =gUnknown_02000C80
	ldrh r1, [r1]
	b _08132262
_08132254:
	.4byte gUnknown_02000C00
_08132258:
	.4byte gUnknown_02000800
_0813225C:
	.4byte gUnknown_02000C80
_08132260:
	ldr r0, _08132274  @ =gUnknown_02000C00
_08132262:
	strh r1, [r0]
	ldr r0, _08132278  @ =gRam
	ldr r1, _0813227C  @ =0x0000099B
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_08132274:
	.4byte gUnknown_02000C00
_08132278:
	.4byte gRam
_0813227C:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_0813215C

