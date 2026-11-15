	THUMB_FUNC_START sub_0808812C
sub_0808812C: @ 0x0808812C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	str r0, [sp]
	ldr r0, _0808830C  @ =gRam
	mov r10, r0
	ldr r6, _08088310  @ =gUnknown_02018000
	ldr r1, _08088314  @ =gUnknown_08164520
	mov r9, r1
	ldr r2, _08088318  @ =0x00000B12
	add r2, r2, r10
	mov r8, r2
_0808814A:
	ldr r0, _0808831C  @ =0x000009EA
	add r0, r0, r10
	mov r1, #0
	strh r1, [r0]
	ldr r0, _08088320  @ =0x000009EE
	add r0, r0, r10
	strh r1, [r0]
	ldr r7, _08088324  @ =gUnknown_03002C24
	ldrh r4, [r7]
	ldr r0, [sp]
	add r3, r0, r4
	ldrb r2, [r3]
	add r0, r2, #0
	cmp r0, #255
	bne _08088170
	ldrb r0, [r3, #1]
	cmp r0, #255
	bne _08088170
	b _08088558
_08088170:
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r10
	mov r7, #0
	strb r2, [r0]
	ldrb r1, [r3, #1]
	ldr r0, _08088328  @ =0x00000961
	add r0, r0, r10
	strb r1, [r0]
	ldrb r1, [r3, #1]
	mov r0, #252
	and r0, r0, r2
	lsr r2, r0, #1
	mov r5, #151
	lsl r5, r5, #4
	add r5, r5, r10
	strb r2, [r5]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _080881A4
	mov r7, #128
	neg r7, r7
	add r0, r7, #0
	orr r2, r2, r0
	strb r2, [r5]
_080881A4:
	lsr r1, r1, #3
	ldr r0, _0808832C  @ =0x00000971
	add r0, r0, r10
	strb r1, [r0]
	ldrb r1, [r3, #2]
	ldr r0, _08088330  @ =0x00000968
	add r0, r0, r10
	strh r1, [r0]
	add r0, r4, #3
	ldr r2, _08088324  @ =gUnknown_03002C24
	strh r0, [r2]
	cmp r1, #164
	beq _080881C0
	b _08088340
_080881C0:
	mov r7, #0
	ldrsh r0, [r5, r7]
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	ldr r0, _08088334  @ =gUnknown_08164ACA
	ldrh r4, [r0]
	strh r4, [r1]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #130
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	mov r2, #0
	ldrsh r0, [r5, r2]
	add r0, r0, #132
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	mov r7, #0
	ldrsh r0, [r5, r7]
	add r0, r0, #134
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r2, #128
	lsl r2, r2, #1
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	mov r7, #0
	ldrsh r0, [r5, r7]
	mov r1, #129
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	mov r2, #0
	ldrsh r0, [r5, r2]
	mov r7, #130
	lsl r7, r7, #1
	add r0, r0, r7
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r2, #131
	lsl r2, r2, #1
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	mov r7, #0
	ldrsh r0, [r5, r7]
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	ldr r0, _08088338  @ =gUnknown_08164B5C
	ldrh r4, [r0, #2]
	strh r4, [r1]
	mov r1, #0
	ldrsh r0, [r5, r1]
	add r0, r0, #2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	mov r2, #0
	ldrsh r0, [r5, r2]
	add r0, r0, #4
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	mov r7, #0
	ldrsh r0, [r5, r7]
	add r0, r0, #6
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r2, #192
	lsl r2, r2, #1
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	ldr r0, _0808833C  @ =gUnknown_08164B62
	ldrh r4, [r0, #2]
	strh r4, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	mov r1, #193
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	mov r2, #0
	ldrsh r0, [r5, r2]
	mov r7, #194
	lsl r7, r7, #1
	add r0, r0, r7
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r2, #195
	lsl r2, r2, #1
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	strh r4, [r0]
	b _0808814A
_0808830C:
	.4byte gRam
_08088310:
	.4byte gUnknown_02018000
_08088314:
	.4byte gUnknown_08164520
_08088318:
	.4byte 0x00000B12
_0808831C:
	.4byte 0x000009EA
_08088320:
	.4byte 0x000009EE
_08088324:
	.4byte gUnknown_03002C24
_08088328:
	.4byte 0x00000961
_0808832C:
	.4byte 0x00000971
_08088330:
	.4byte 0x00000968
_08088334:
	.4byte gUnknown_08164ACA
_08088338:
	.4byte gUnknown_08164B5C
_0808833C:
	.4byte gUnknown_08164B62
_08088340:
	mov r7, #0
	ldrsh r0, [r5, r7]
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	add r0, r0, #4
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	mov r1, #130
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	add r0, r0, #2
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	add r0, r0, #6
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	mov r1, #129
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	mov r1, #131
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	add r0, r0, #4
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	add r0, r0, #132
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	add r0, r0, #4
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	mov r1, #192
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	add r0, r0, #4
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	mov r1, #194
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	add r0, r0, #4
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	add r0, r0, #130
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	add r0, r0, #5
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	add r0, r0, #134
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	add r0, r0, #5
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	mov r1, #193
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	add r0, r0, #5
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r5, r7]
	mov r1, #195
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r6
	mov r2, r8
	ldrh r0, [r2]
	lsr r0, r0, #1
	add r0, r0, #5
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r1]
	b _0808814A
_08088558:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0808812C

