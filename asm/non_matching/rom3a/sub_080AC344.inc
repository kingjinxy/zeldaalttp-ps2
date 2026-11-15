	THUMB_FUNC_START sub_080AC344
sub_080AC344: @ 0x080AC344
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r4, _080AC41C  @ =gRam
	ldr r5, _080AC420  @ =0x00001732
	add r3, r4, r5
	strb r2, [r3]
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080AC414
	mov r2, #4
	ldr r6, _080AC424  @ =gUnknown_0816E140
	ldr r7, _080AC428  @ =gUnknown_0816E148
	ldr r0, _080AC42C  @ =0x00000E15
	add r5, r4, r0
	mov r3, #0
_080AC370:
	add r1, r2, r5
	ldrb r0, [r1]
	cmp r0, #49
	bne _080AC37A
	strb r3, [r1]
_080AC37A:
	sub r2, r2, #1
	cmp r2, #0
	bge _080AC370
	mov r1, sp
	ldr r2, _080AC430  @ =0x00000E29
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	mov r1, sp
	ldr r3, _080AC434  @ =0x00000E1F
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r5, _080AC420  @ =0x00001732
	add r1, r4, r5
	ldrb r1, [r1]
	strb r1, [r0]
	mov r1, sp
	add r2, r2, #10
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #4
	strb r1, [r0]
	mov r1, sp
	ldr r3, _080AC438  @ =0x00001844
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #3
	strb r1, [r0]
	sub r5, r5, #114
	add r0, r4, r5
	ldrb r2, [r0]
	ldr r1, _080AC43C  @ =0x000016C1
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	mov r5, #150
	lsl r5, r5, #4
	add r3, r4, r5
	strh r2, [r3]
	add r1, r1, #20
	add r0, r4, r1
	ldrb r1, [r0]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r0, r1, r6
	ldrh r0, [r0]
	add r2, r2, r0
	strh r2, [r3]
	ldr r2, _080AC440  @ =0x000016C4
	add r0, r4, r2
	ldrb r2, [r0]
	ldr r3, _080AC444  @ =0x000016C5
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	add r5, r5, #4
	add r3, r4, r5
	strh r2, [r3]
	add r1, r1, r7
	ldrh r0, [r1]
	add r2, r2, r0
	strh r2, [r3]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080AC414:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080AC41C:
	.4byte gRam
_080AC420:
	.4byte 0x00001732
_080AC424:
	.4byte gUnknown_0816E140
_080AC428:
	.4byte gUnknown_0816E148
_080AC42C:
	.4byte 0x00000E15
_080AC430:
	.4byte 0x00000E29
_080AC434:
	.4byte 0x00000E1F
_080AC438:
	.4byte 0x00001844
_080AC43C:
	.4byte 0x000016C1
_080AC440:
	.4byte 0x000016C4
_080AC444:
	.4byte 0x000016C5
	THUMB_FUNC_END sub_080AC344

