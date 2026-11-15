	THUMB_FUNC_START sub_0809834C
sub_0809834C: @ 0x0809834C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #24
	ldr r1, _08098474  @ =gRam
	ldr r2, _08098478  @ =0x000016CD
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _0809847C  @ =0x000016CE
	add r0, r1, r3
	strb r2, [r0]
	mov r2, sp
	mov r4, #151
	lsl r4, r4, #4
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r7, _08098480  @ =0x00000974
	add r0, r1, r7
	ldrh r0, [r0]
	strh r0, [r2, #2]
	add r6, sp, #4
	ldr r2, _08098484  @ =0x000017B2
	add r0, r1, r2
	ldrh r0, [r0]
	strh r0, [r6]
	add r3, r3, #230
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r6, #2]
	add r5, sp, #8
	ldr r4, _08098488  @ =0x000017B8
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r5]
	ldr r7, _0809848C  @ =0x000017BA
	add r0, r1, r7
	ldrh r0, [r0]
	strh r0, [r5, #2]
	add r4, sp, #12
	add r2, r2, #24
	add r0, r1, r2
	ldrh r0, [r0]
	strh r0, [r4]
	add r3, r3, #24
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r4, #2]
	add r3, sp, #16
	add r7, r7, #8
	add r0, r1, r7
	ldrh r0, [r0]
	strh r0, [r3]
	sub r2, r2, #6
	add r0, r1, r2
	ldrh r0, [r0]
	strh r0, [r3, #2]
	add r2, sp, #20
	add r7, r7, #4
	add r0, r1, r7
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #2
	add r0, r1, r7
	ldrh r0, [r0]
	strh r0, [r2, #2]
	mov r0, #1
	mov r8, r0
	add r7, r1, #0
	mov r9, r5
	mov r10, r2
	mov r5, #0
	ldr r1, _08098490  @ =0x00001727
	add r6, r7, r1
	add r2, sp, #16
	mov r12, r2
_080983EA:
	mov r3, r8
	lsl r1, r3, #1
	mov r4, sp
	add r0, r4, r1
	strh r5, [r0]
	mov r2, sp
	add r2, r2, r1
	add r2, r2, #4
	ldrh r0, [r2]
	sub r0, r0, #1
	strh r0, [r2]
	lsl r0, r0, #16
	add r3, r1, #0
	cmp r0, #0
	bge _08098412
	mov r0, r9
	add r1, r0, r3
	mov r0, #1
	strh r0, [r1]
	strh r5, [r2]
_08098412:
	mov r1, r9
	add r4, r1, r3
	ldrb r0, [r4]
	lsl r0, r0, #25
	lsr r1, r0, #24
	ldr r0, _08098494  @ =0x000017DA
	add r2, r7, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _08098432
	lsl r0, r0, #3
	ldr r2, _08098498  @ =gUnknown_03002B90
	strh r0, [r2]
	add r0, r1, r0
	lsl r0, r0, #24
	lsr r1, r0, #24
_08098432:
	lsr r1, r1, #1
	lsl r1, r1, #1
	ldr r0, _0809849C  @ =gUnknown_08167E26
	add r1, r1, r0
	mov r0, sp
	add r0, r0, r3
	add r0, r0, #12
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r0, #0
	bgt _080984B4
	ldr r0, _080984A0  @ =gUnknown_08167E3E
	add r0, r3, r0
	ldrb r0, [r0]
	ldrb r1, [r6]
	and r1, r1, r0
	strb r1, [r6]
	ldr r2, _080984A4  @ =0x000016CC
	add r0, r7, r2
	strb r1, [r0]
	ldrh r0, [r4]
	cmp r0, #2
	bne _080984A8
	strh r5, [r4]
	mov r4, r12
	add r1, r4, r3
	mov r0, #240
	strh r0, [r1]
	mov r2, #2
	b _080984D8
_08098474:
	.4byte gRam
_08098478:
	.4byte 0x000016CD
_0809847C:
	.4byte 0x000016CE
_08098480:
	.4byte 0x00000974
_08098484:
	.4byte 0x000017B2
_08098488:
	.4byte 0x000017B8
_0809848C:
	.4byte 0x000017BA
_08098490:
	.4byte 0x00001727
_08098494:
	.4byte 0x000017DA
_08098498:
	.4byte gUnknown_03002B90
_0809849C:
	.4byte gUnknown_08167E26
_080984A0:
	.4byte gUnknown_08167E3E
_080984A4:
	.4byte 0x000016CC
_080984A8:
	mov r1, r12
	add r0, r1, r3
	strh r5, [r0]
	strh r5, [r4]
	mov r2, #0
	b _080984D8
_080984B4:
	mov r4, r10
	add r0, r4, r3
	ldrb r0, [r0]
	add r0, r0, r3
	lsl r0, r0, #24
	ldr r1, _080985A0  @ =gUnknown_08167E42
	lsr r0, r0, #23
	add r0, r0, r1
	ldrb r0, [r0]
	ldrb r1, [r6]
	orr r0, r0, r1
	strb r0, [r6]
	mov r1, r12
	add r0, r1, r3
	ldrh r4, [r0]
	cmp r2, r4
	bcc _080984D8
	ldrh r2, [r0]
_080984D8:
	add r1, r3, #0
	mov r0, sp
	add r0, r0, r1
	add r0, r0, #12
	strh r2, [r0]
	add r1, sp, r1
	strh r2, [r1]
	ldr r4, _080985A4  @ =0x0000172A
	add r0, r7, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _080984FA
	lsr r0, r2, #2
	ldr r4, _080985A8  @ =gUnknown_03002B90
	strh r0, [r4]
	sub r0, r2, r0
	strh r0, [r1]
_080984FA:
	mov r2, r10
	add r0, r2, r3
	ldrh r0, [r0]
	cmp r0, #0
	bne _0809850A
	ldrh r0, [r1]
	neg r0, r0
	strh r0, [r1]
_0809850A:
	mov r0, r8
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r8, r3
	cmp r0, #0
	blt _0809851A
	b _080983EA
_0809851A:
	mov r0, sp
	ldrh r1, [r0]
	mov r4, #151
	lsl r4, r4, #4
	add r0, r7, r4
	strh r1, [r0]
	mov r0, sp
	ldrh r1, [r0, #2]
	ldr r2, _080985AC  @ =0x00000974
	add r0, r7, r2
	strh r1, [r0]
	mov r3, sp
	ldrh r1, [r3, #4]
	ldr r4, _080985B0  @ =0x000017B2
	add r0, r7, r4
	strh r1, [r0]
	ldrh r1, [r3, #6]
	ldr r2, _080985B4  @ =0x000017B4
	add r0, r7, r2
	strh r1, [r0]
	mov r3, r9
	ldrh r1, [r3]
	add r4, r4, #6
	add r0, r7, r4
	strh r1, [r0]
	ldrh r1, [r3, #2]
	add r2, r2, #6
	add r0, r7, r2
	strh r1, [r0]
	mov r3, sp
	ldrh r1, [r3, #12]
	add r4, r4, #18
	add r0, r7, r4
	strh r1, [r0]
	ldrh r1, [r3, #14]
	add r2, r2, #18
	add r0, r7, r2
	strh r1, [r0]
	ldrh r1, [r3, #16]
	ldr r3, _080985B8  @ =0x000017C2
	add r0, r7, r3
	strh r1, [r0]
	mov r4, sp
	ldrh r1, [r4, #18]
	sub r2, r2, #8
	add r0, r7, r2
	strh r1, [r0]
	mov r3, r10
	ldrh r1, [r3]
	ldr r4, _080985BC  @ =0x000017C6
	add r0, r7, r4
	strh r1, [r0]
	ldrh r1, [r3, #2]
	add r2, r2, #4
	add r0, r7, r2
	strh r1, [r0]
	bl sub_080985C0
	add sp, sp, #24
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080985A0:
	.4byte gUnknown_08167E42
_080985A4:
	.4byte 0x0000172A
_080985A8:
	.4byte gUnknown_03002B90
_080985AC:
	.4byte 0x00000974
_080985B0:
	.4byte 0x000017B2
_080985B4:
	.4byte 0x000017B4
_080985B8:
	.4byte 0x000017C2
_080985BC:
	.4byte 0x000017C6
	THUMB_FUNC_END sub_0809834C

