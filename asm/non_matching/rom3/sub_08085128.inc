	THUMB_FUNC_START sub_08085128
sub_08085128: @ 0x08085128
	push {r4-r7,lr}
	ldr r6, _08085228  @ =gRam
	ldr r1, _0808522C  @ =0x00000B08
	add r0, r6, r1
	ldrh r0, [r0]
	lsl r5, r0, #1
	ldr r4, _08085230  @ =0x000018B0
	add r0, r6, r4
	add r0, r5, r0
	ldrh r0, [r0]
	mov r3, #254
	and r3, r3, r0
	ldr r0, _08085234  @ =0x00000BFE
	add r2, r6, r0
	ldr r1, _08085238  @ =gUnknown_081676B2
	ldr r4, _0808523C  @ =0x00000968
	add r0, r6, r4
	mov r4, #0
	ldrsh r0, [r0, r4]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08085162
	ldr r0, _08085240  @ =gUnknown_081677FC
	add r0, r3, r0
	ldrh r3, [r0]
_08085162:
	ldr r1, _08085244  @ =gUnknown_08167B1C
	lsr r0, r3, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r1, _08085248  @ =0x000018D0
	add r0, r6, r1
	add r0, r5, r0
	ldrh r5, [r0]
	ldr r0, _0808524C  @ =0x0000097C
	add r1, r6, r0
	mov r0, #3
	strh r0, [r1]
	ldr r7, _08085250  @ =gUnknown_02018000
	add r6, r1, #0
_08085180:
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
	bne _080851A0
	ldr r0, _08085254  @ =gUnknown_0201C000
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
_080851A0:
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
	bne _080851C4
	ldr r0, _08085254  @ =gUnknown_0201C000
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
_080851C4:
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
	cmp r0, #3
	bne _080851EA
	ldr r0, _08085254  @ =gUnknown_0201C000
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
_080851EA:
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
	cmp r0, #3
	bne _08085210
	ldr r0, _08085254  @ =gUnknown_0201C000
	add r1, r2, r0
	ldrh r0, [r4]
	strh r0, [r1]
_08085210:
	add r4, r4, #2
	add r5, r5, #2
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08085180
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08085228:
	.4byte gRam
_0808522C:
	.4byte 0x00000B08
_08085230:
	.4byte 0x000018B0
_08085234:
	.4byte 0x00000BFE
_08085238:
	.4byte gUnknown_081676B2
_0808523C:
	.4byte 0x00000968
_08085240:
	.4byte gUnknown_081677FC
_08085244:
	.4byte gUnknown_08167B1C
_08085248:
	.4byte 0x000018D0
_0808524C:
	.4byte 0x0000097C
_08085250:
	.4byte gUnknown_02018000
_08085254:
	.4byte gUnknown_0201C000
	THUMB_FUNC_END sub_08085128

