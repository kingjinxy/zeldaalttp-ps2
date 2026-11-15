	THUMB_FUNC_START sub_081304D4
sub_081304D4: @ 0x081304D4
	push {r4-r7,lr}
	ldr r4, _08130510  @ =gUnknown_083BF858
	ldr r0, _08130514  @ =gRam
	ldr r1, _08130518  @ =0x000009DA
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #221
	bne _08130524
	mov r0, #144
	lsl r0, r0, #1
	add r4, r4, r0
	ldr r7, _0813051C  @ =gUnknown_02000F20
	ldr r6, _08130520  @ =gUnknown_02000B20
	mov r5, #15
_081304F0:
	ldrh r0, [r4]
	bl sub_08133468
	strh r0, [r6]
	ldrh r0, [r4]
	bl sub_08133468
	strh r0, [r7]
	add r4, r4, #2
	add r7, r7, #2
	add r6, r6, #2
	sub r5, r5, #1
	cmp r5, #0
	bge _081304F0
	b _081305C0
	.byte 0x00
	.byte 0x00
_08130510:
	.4byte gUnknown_083BF858
_08130514:
	.4byte gRam
_08130518:
	.4byte 0x000009DA
_0813051C:
	.4byte gUnknown_02000F20
_08130520:
	.4byte gUnknown_02000B20
_08130524:
	cmp r0, #121
	bne _0813055C
	mov r0, #160
	lsl r0, r0, #1
	add r4, r4, r0
	ldr r7, _08130554  @ =gUnknown_02000F20
	ldr r6, _08130558  @ =gUnknown_02000B20
	mov r5, #15
_08130534:
	ldrh r0, [r4]
	bl sub_08133468
	strh r0, [r6]
	ldrh r0, [r4]
	bl sub_08133468
	strh r0, [r7]
	add r4, r4, #2
	add r7, r7, #2
	add r6, r6, #2
	sub r5, r5, #1
	cmp r5, #0
	bge _08130534
	b _081305C0
	.byte 0x00
	.byte 0x00
_08130554:
	.4byte gUnknown_02000F20
_08130558:
	.4byte gUnknown_02000B20
_0813055C:
	cmp r0, #189
	bne _08130594
	mov r0, #176
	lsl r0, r0, #1
	add r4, r4, r0
	ldr r7, _0813058C  @ =gUnknown_02000F20
	ldr r6, _08130590  @ =gUnknown_02000B20
	mov r5, #15
_0813056C:
	ldrh r0, [r4]
	bl sub_08133468
	strh r0, [r6]
	ldrh r0, [r4]
	bl sub_08133468
	strh r0, [r7]
	add r4, r4, #2
	add r7, r7, #2
	add r6, r6, #2
	sub r5, r5, #1
	cmp r5, #0
	bge _0813056C
	b _081305C0
	.byte 0x00
	.byte 0x00
_0813058C:
	.4byte gUnknown_02000F20
_08130590:
	.4byte gUnknown_02000B20
_08130594:
	cmp r0, #252
	bne _081305CA
	mov r0, #192
	lsl r0, r0, #1
	add r4, r4, r0
	ldr r7, _081305D0  @ =gUnknown_02000F20
	ldr r6, _081305D4  @ =gUnknown_02000B20
	mov r5, #15
_081305A4:
	ldrh r0, [r4]
	bl sub_08133468
	strh r0, [r6]
	ldrh r0, [r4]
	bl sub_08133468
	strh r0, [r7]
	add r4, r4, #2
	add r7, r7, #2
	add r6, r6, #2
	sub r5, r5, #1
	cmp r5, #0
	bge _081305A4
_081305C0:
	ldr r0, _081305D8  @ =gRam
	ldr r1, _081305DC  @ =0x0000099B
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
_081305CA:
	pop {r4-r7}
	pop {r0}
	bx r0
_081305D0:
	.4byte gUnknown_02000F20
_081305D4:
	.4byte gUnknown_02000B20
_081305D8:
	.4byte gRam
_081305DC:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_081304D4

