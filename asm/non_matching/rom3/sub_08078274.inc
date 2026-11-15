	THUMB_FUNC_START sub_08078274
sub_08078274: @ 0x08078274
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r5, _08078374  @ =gRam
	ldr r1, _08078378  @ =0x00000B54
	add r0, r5, r1
	mov r2, #0
	mov r8, r2
	mov r3, r8
	strh r3, [r0]
	bl sub_08076C48
	bl sub_08076694
	ldr r7, _0807837C  @ =0x000009DA
	add r6, r5, r7
	ldrh r1, [r6]
	ldr r0, _08078380  @ =0x00000181
	cmp r1, r0
	bne _080782BC
	ldr r1, _08078384  @ =0x00000958
	add r0, r5, r1
	ldrh r0, [r0]
	mov r2, #128
	lsl r2, r2, #1
	add r1, r2, #0
	orr r0, r0, r1
	ldr r3, _08078388  @ =0x0000095E
	add r1, r5, r3
	strh r0, [r1]
	sub r7, r7, #136
	add r0, r5, r7
	ldrh r1, [r0]
	ldr r2, _0807838C  @ =0x0000095C
	add r0, r5, r2
	strh r1, [r0]
_080782BC:
	ldrh r1, [r6]
	ldr r0, _08078390  @ =0x00001010
	cmp r1, r0
	bne _080782CA
	mov r0, #193
	lsl r0, r0, #1
	strh r0, [r6]
_080782CA:
	ldrh r1, [r6]
	ldr r0, _08078394  @ =0x0000101A
	cmp r1, r0
	bne _080782D8
	mov r0, #192
	lsl r0, r0, #1
	strh r0, [r6]
_080782D8:
	ldrh r4, [r6]
	mov r2, #255
	add r0, r4, #0
	and r0, r0, r2
	sub r0, r0, #128
	strh r0, [r6]
	ldrh r3, [r6]
	ldr r0, _08078398  @ =gUnknown_08150CC0
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r7, _0807839C  @ =0x000016D5
	add r0, r5, r7
	strb r1, [r0]
	ldr r1, _080783A0  @ =0x00000AB8
	add r0, r5, r1
	mov r7, r8
	strh r7, [r0]
	ldr r0, _080783A4  @ =gUnknown_08150CD0
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r7, _080783A8  @ =0x00000C9B
	add r0, r5, r7
	strb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	ldr r7, _080783AC  @ =0x000016A7
	add r1, r5, r7
	strb r0, [r1]
	ldr r0, _080783B0  @ =gUnknown_08150CE0
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r7, _080783B4  @ =0x00000C9A
	add r0, r5, r7
	strb r1, [r0]
	and r2, r2, r1
	ldr r1, _080783B8  @ =0x000016A6
	add r0, r5, r1
	strb r2, [r0]
	ldr r0, _080783BC  @ =gUnknown_08150D00
	add r0, r3, r0
	ldrb r0, [r0]
	ldr r1, _080783C0  @ =gUnknown_08150CF0
	add r1, r3, r1
	ldrb r1, [r1]
	bl sub_0813084C
	ldrh r1, [r6]
	mov r0, #63
	and r0, r0, r1
	ldr r1, _080783C4  @ =gUnknown_08150C80
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r2, [r1]
	ldr r3, _080783C8  @ =0x00000C88
	add r1, r5, r3
	strh r2, [r1]
	ldr r1, _080783CC  @ =gUnknown_08150CA0
	add r0, r0, r1
	ldrh r1, [r0]
	sub r7, r7, #14
	add r0, r5, r7
	strh r1, [r0]
	ldr r1, _080783D0  @ =0x00000C8A
	add r0, r5, r1
	mov r1, #254
	lsl r1, r1, #2
	strh r1, [r0]
	ldr r2, _080783D4  @ =0x00000C8E
	add r0, r5, r2
	strh r1, [r0]
	strh r4, [r6]
	bl sub_08130A24
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08078374:
	.4byte gRam
_08078378:
	.4byte 0x00000B54
_0807837C:
	.4byte 0x000009DA
_08078380:
	.4byte 0x00000181
_08078384:
	.4byte 0x00000958
_08078388:
	.4byte 0x0000095E
_0807838C:
	.4byte 0x0000095C
_08078390:
	.4byte 0x00001010
_08078394:
	.4byte 0x0000101A
_08078398:
	.4byte gUnknown_08150CC0
_0807839C:
	.4byte 0x000016D5
_080783A0:
	.4byte 0x00000AB8
_080783A4:
	.4byte gUnknown_08150CD0
_080783A8:
	.4byte 0x00000C9B
_080783AC:
	.4byte 0x000016A7
_080783B0:
	.4byte gUnknown_08150CE0
_080783B4:
	.4byte 0x00000C9A
_080783B8:
	.4byte 0x000016A6
_080783BC:
	.4byte gUnknown_08150D00
_080783C0:
	.4byte gUnknown_08150CF0
_080783C4:
	.4byte gUnknown_08150C80
_080783C8:
	.4byte 0x00000C88
_080783CC:
	.4byte gUnknown_08150CA0
_080783D0:
	.4byte 0x00000C8A
_080783D4:
	.4byte 0x00000C8E
	THUMB_FUNC_END sub_08078274

