	THUMB_FUNC_START sub_08085258
sub_08085258: @ 0x08085258
	push {r4-r7,lr}
	ldr r2, _08085298  @ =gRam
	ldr r1, _0808529C  @ =0x00000B08
	add r0, r2, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r3, _080852A0  @ =0x000018B0
	add r1, r2, r3
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #254
	and r1, r1, r0
	ldr r4, _080852A4  @ =0x00000C04
	add r0, r2, r4
	ldrh r0, [r0]
	add r6, r2, #0
	cmp r0, #0
	beq _080852AC
	cmp r0, #4
	beq _080852AC
	cmp r1, #65
	ble _08085286
	add r0, r0, #4
_08085286:
	cmp r1, #24
	beq _0808528E
	cmp r1, #68
	bne _08085290
_0808528E:
	add r0, r0, #2
_08085290:
	ldr r1, _080852A8  @ =gUnknown_0816796C
	sub r0, r0, #2
	asr r0, r0, #1
	b _080852E6
_08085298:
	.4byte gRam
_0808529C:
	.4byte 0x00000B08
_080852A0:
	.4byte 0x000018B0
_080852A4:
	.4byte 0x00000C04
_080852A8:
	.4byte gUnknown_0816796C
_080852AC:
	ldr r1, _080853B0  @ =0x00000B08
	add r0, r6, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r2, _080853B4  @ =0x000018B0
	add r1, r6, r2
	add r0, r0, r1
	ldrh r0, [r0]
	mov r3, #254
	and r3, r3, r0
	ldr r4, _080853B8  @ =0x00000BFE
	add r2, r6, r4
	ldr r1, _080853BC  @ =gUnknown_081676B2
	ldr r4, _080853C0  @ =0x00000968
	add r0, r6, r4
	mov r4, #0
	ldrsh r0, [r0, r4]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _080852E2
	ldr r0, _080853C4  @ =gUnknown_081677FC
	add r0, r3, r0
	ldrh r3, [r0]
_080852E2:
	ldr r1, _080853C8  @ =gUnknown_08167B1C
	lsr r0, r3, #1
_080852E6:
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r1, _080853B0  @ =0x00000B08
	add r0, r6, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r2, _080853CC  @ =0x000018D0
	add r1, r6, r2
	add r0, r0, r1
	ldrh r5, [r0]
	ldr r3, _080853D0  @ =0x0000097C
	add r1, r6, r3
	mov r0, #3
	strh r0, [r1]
	ldr r7, _080853D4  @ =gUnknown_02018000
	add r6, r1, #0
_08085308:
	add r0, r5, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r2, r0, #1
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #3
	bne _08085328
	ldr r3, _080853D8  @ =gUnknown_0201C000
	add r1, r2, r3
	ldrh r0, [r4]
	strh r0, [r1]
_08085328:
	add r4, r4, #2
	add r0, r5, #0
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r2, r0, #1
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #3
	bne _0808534C
	ldr r3, _080853D8  @ =gUnknown_0201C000
	add r1, r2, r3
	ldrh r0, [r4]
	strh r0, [r1]
_0808534C:
	add r4, r4, #2
	mov r1, #128
	lsl r1, r1, #1
	add r0, r5, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r2, r0, #1
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r6, r3]
	cmp r0, #3
	bne _08085372
	ldr r0, _080853D8  @ =gUnknown_0201C000
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
_08085372:
	add r4, r4, #2
	mov r1, #192
	lsl r1, r1, #1
	add r0, r5, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r2, r0, #1
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r6, r3]
	cmp r0, #3
	bne _08085398
	ldr r0, _080853D8  @ =gUnknown_0201C000
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
_08085398:
	add r4, r4, #2
	add r5, r5, #2
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08085308
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080853B0:
	.4byte 0x00000B08
_080853B4:
	.4byte 0x000018B0
_080853B8:
	.4byte 0x00000BFE
_080853BC:
	.4byte gUnknown_081676B2
_080853C0:
	.4byte 0x00000968
_080853C4:
	.4byte gUnknown_081677FC
_080853C8:
	.4byte gUnknown_08167B1C
_080853CC:
	.4byte 0x000018D0
_080853D0:
	.4byte 0x0000097C
_080853D4:
	.4byte gUnknown_02018000
_080853D8:
	.4byte gUnknown_0201C000
	THUMB_FUNC_END sub_08085258

