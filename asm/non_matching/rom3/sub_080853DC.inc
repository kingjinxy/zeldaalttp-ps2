	THUMB_FUNC_START sub_080853DC
sub_080853DC: @ 0x080853DC
	push {r4-r7,lr}
	ldr r6, _080854DC  @ =gRam
	ldr r1, _080854E0  @ =0x00000B08
	add r0, r6, r1
	ldrh r0, [r0]
	lsl r5, r0, #1
	ldr r4, _080854E4  @ =0x000018B0
	add r0, r6, r4
	add r0, r5, r0
	ldrh r0, [r0]
	mov r3, #254
	and r3, r3, r0
	ldr r0, _080854E8  @ =0x00000BFE
	add r2, r6, r0
	ldr r1, _080854EC  @ =gUnknown_081676B2
	ldr r4, _080854F0  @ =0x00000968
	add r0, r6, r4
	mov r4, #0
	ldrsh r0, [r0, r4]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08085416
	ldr r0, _080854F4  @ =gUnknown_081677FC
	add r0, r3, r0
	ldrh r3, [r0]
_08085416:
	ldr r1, _080854F8  @ =gUnknown_08167BDC
	lsr r0, r3, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r1, _080854FC  @ =0x000018D0
	add r0, r6, r1
	add r0, r5, r0
	ldrh r5, [r0]
	add r5, r5, #2
	ldr r0, _08085500  @ =0x0000097C
	add r1, r6, r0
	mov r0, #3
	strh r0, [r1]
	ldr r7, _08085504  @ =gUnknown_02018000
	add r6, r1, #0
_08085436:
	add r0, r5, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r2, r0, #1
	add r1, r2, r7
	ldrh r0, [r4]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #1
	bne _08085456
	ldr r0, _08085508  @ =gUnknown_0201C000
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
_08085456:
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
	cmp r0, #1
	bne _0808547A
	ldr r0, _08085508  @ =gUnknown_0201C000
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
_0808547A:
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
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #1
	bne _080854A0
	ldr r0, _08085508  @ =gUnknown_0201C000
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
_080854A0:
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
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, #1
	bne _080854C6
	ldr r0, _08085508  @ =gUnknown_0201C000
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
_080854C6:
	add r4, r4, #2
	add r5, r5, #2
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08085436
	pop {r4-r7}
	pop {r0}
	bx r0
_080854DC:
	.4byte gRam
_080854E0:
	.4byte 0x00000B08
_080854E4:
	.4byte 0x000018B0
_080854E8:
	.4byte 0x00000BFE
_080854EC:
	.4byte gUnknown_081676B2
_080854F0:
	.4byte 0x00000968
_080854F4:
	.4byte gUnknown_081677FC
_080854F8:
	.4byte gUnknown_08167BDC
_080854FC:
	.4byte 0x000018D0
_08085500:
	.4byte 0x0000097C
_08085504:
	.4byte gUnknown_02018000
_08085508:
	.4byte gUnknown_0201C000
	THUMB_FUNC_END sub_080853DC

