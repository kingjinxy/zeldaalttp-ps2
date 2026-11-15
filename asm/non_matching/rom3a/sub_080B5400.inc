	THUMB_FUNC_START sub_080B5400
sub_080B5400: @ 0x080B5400
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #20
	mov r5, #3
	ldr r6, _080B5504  @ =gRam
	ldr r0, _080B5508  @ =0x0000097D
	add r0, r0, r6
	mov r9, r0
	ldr r1, _080B550C  @ =0x00000EC8
	add r1, r1, r6
	mov r10, r1
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r6
	mov r8, r2
_080B5424:
	ldr r1, _080B5510  @ =gUnknown_0816F00A
	ldr r3, _080B5514  @ =0x0000097C
	add r0, r6, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #1
	add r0, r0, r1
	ldrb r2, [r0]
	mov r7, r10
	ldrb r7, [r7]
	add r2, r2, r7
	mov r0, r9
	strb r2, [r0]
	ldr r0, _080B5518  @ =gUnknown_0816F0A6
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	neg r0, r0
	lsr r0, r0, #31
	mov r12, r0
	mov r0, #64
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	neg r0, r0
	lsr r0, r0, #31
	str r0, [sp, #16]
	ldr r1, _080B551C  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r4, r0, #2
	mov r0, #1
	and r4, r4, r0
	add r2, r2, #1
	mov r3, r9
	strb r2, [r3]
	ldr r7, _080B5520  @ =gUnknown_03002C96
	ldrh r3, [r7]
	add r1, r3, #1
	mov r7, #16
	neg r7, r7
	add r0, r7, #0
	and r1, r1, r0
	lsl r1, r1, #24
	lsl r2, r2, #24
	cmp r1, r2
	bne _080B5498
	mov r1, #255
	lsl r1, r1, #8
	add r0, r1, #0
	and r0, r0, r3
	cmp r0, #0
	bne _080B5498
	add r4, r4, #2
_080B5498:
	mov r2, r8
	mov r0, #0
	ldrsb r0, [r2, r0]
	ldr r3, _080B5524  @ =0x00000A64
	add r1, r6, r3
	ldrh r2, [r1]
	mov r1, #240
	and r1, r1, r2
	ldr r2, _080B5528  @ =gUnknown_0816F09E
	add r2, r5, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	add r1, r1, r2
	mov r7, r9
	mov r2, #0
	ldrsb r2, [r7, r2]
	ldr r3, _080B552C  @ =gUnknown_0816F0A2
	add r3, r5, r3
	ldrb r3, [r3]
	lsl r3, r3, #24
	asr r3, r3, #24
	add r2, r2, r3
	sub r2, r2, #48
	ldr r3, _080B5530  @ =gUnknown_0816F0AA
	add r3, r4, r3
	ldrb r3, [r3]
	str r3, [sp]
	ldr r3, [sp, #16]
	str r3, [sp, #4]
	mov r7, r12
	str r7, [sp, #8]
	mov r3, #1
	str r3, [sp, #12]
	mov r3, #128
	lsl r3, r3, #2
	bl sub_080B35E0
	mov r1, r8
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	sub r5, r5, #1
	cmp r5, #0
	bge _080B5424
	add sp, sp, #20
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B5504:
	.4byte gRam
_080B5508:
	.4byte 0x0000097D
_080B550C:
	.4byte 0x00000EC8
_080B5510:
	.4byte gUnknown_0816F00A
_080B5514:
	.4byte 0x0000097C
_080B5518:
	.4byte gUnknown_0816F0A6
_080B551C:
	.4byte 0x00000996
_080B5520:
	.4byte gUnknown_03002C96
_080B5524:
	.4byte 0x00000A64
_080B5528:
	.4byte gUnknown_0816F09E
_080B552C:
	.4byte gUnknown_0816F0A2
_080B5530:
	.4byte gUnknown_0816F0AA
	THUMB_FUNC_END sub_080B5400

