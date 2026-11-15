	THUMB_FUNC_START sub_080F0224
sub_080F0224: @ 0x080F0224
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F02F4
	ldr r3, _080F0304  @ =gRam
	ldr r1, _080F0308  @ =0x00001610
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080F02F4
	ldr r1, _080F030C  @ =0x00000FF2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r1, #0
	cmp r0, #23
	bne _080F0264
	mov r1, #2
_080F0264:
	ldr r4, _080F0310  @ =0x0000096D
	add r2, r3, r4
	strb r1, [r2]
	ldr r1, _080F0314  @ =0x00000F92
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	sub r4, r4, #1
	add r1, r3, r4
	strb r0, [r1]
	mov r5, #1
	mov r8, r3
	mov r10, r2
	ldr r0, _080F0318  @ =0x00000969
	add r0, r0, r8
	mov r9, r0
_080F0286:
	ldr r0, _080F031C  @ =0x0000096C
	add r0, r0, r8
	ldrb r0, [r0]
	add r0, r0, r5
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r0, _080F0320  @ =gUnknown_08178CB4
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #132
	bne _080F02A4
	mov r1, r10
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, #132
_080F02A4:
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r0, _080F0324  @ =gUnknown_03003E74
	sub r5, r5, #1
	ldrh r0, [r0]
	sub r0, r0, r5
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	ldrh r1, [r1]
	ldr r3, _080F0328  @ =0x00000964
	add r3, r3, r8
	ldr r2, _080F032C  @ =gUnknown_08178CA8
	add r2, r7, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r4, r9
	ldrb r3, [r4]
	mov r4, #254
	and r4, r4, r3
	ldr r3, _080F0330  @ =gUnknown_08178CC0
	add r3, r7, r3
	ldrb r3, [r3]
	orr r4, r4, r3
	lsl r4, r4, #8
	orr r6, r6, r4
	mov r3, #2
	str r3, [sp]
	add r3, r6, #0
	bl sub_080C6368
	cmp r5, #0
	bge _080F0286
_080F02F4:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080F0304:
	.4byte gRam
_080F0308:
	.4byte 0x00001610
_080F030C:
	.4byte 0x00000FF2
_080F0310:
	.4byte 0x0000096D
_080F0314:
	.4byte 0x00000F92
_080F0318:
	.4byte 0x00000969
_080F031C:
	.4byte 0x0000096C
_080F0320:
	.4byte gUnknown_08178CB4
_080F0324:
	.4byte gUnknown_03003E74
_080F0328:
	.4byte 0x00000964
_080F032C:
	.4byte gUnknown_08178CA8
_080F0330:
	.4byte gUnknown_08178CC0
	THUMB_FUNC_END sub_080F0224

