	THUMB_FUNC_START sub_0804F254
sub_0804F254: @ 0x0804F254
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r0, r7, #5
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	mov r3, #31
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #6
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	lsr r1, r2, #5
	add r2, r1, #0
	mov r3, #7
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
	mov r0, #0
	str r0, [r7, #8]
_0804F28E:
	add r0, r7, #4
	add r1, r7, #6
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _0804F29C
	b _0804F2C4
_0804F29C:
	add r1, r7, #5
	ldrb r0, [r1]
	add r1, r7, #4
	ldrb r2, [r1]
	add r0, r0, r2
	mov r1, #1
	add r2, r1, #0
	lsl r2, r2, r0
	add r0, r2, #0
	ldr r1, [r7, #8]
	orr r0, r0, r1
	str r0, [r7, #8]
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0804F28E
_0804F2C4:
	ldr r0, [r7]
	ldr r1, [r7, #8]
	str r1, [r0, #96]
	add r0, r7, #6
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #1
	bne _0804F30C
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #108
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0804F308  @ =0x00000159
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	b _0804F344
	.byte 0x00
	.byte 0x00
_0804F308:
	.4byte 0x00000159
_0804F30C:
	ldr r0, [r7]
	add r1, r7, #6
	ldrb r2, [r1]
	mov r3, #2
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	cmp r1, #0
	beq _0804F32C
	ldr r2, _0804F328  @ =0x00000111
	add r1, r2, #0
	b _0804F332
_0804F328:
	.4byte 0x00000111
_0804F32C:
	mov r2, #136
	lsl r2, r2, #1
	add r1, r2, #0
_0804F332:
	add r2, r0, #0
	add r0, r0, #108
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
_0804F344:
	ldr r0, [r7]
	ldr r1, _0804F438  @ =gUnknown_084289B8
	add r2, r7, #6
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	add r2, r0, #0
	add r0, r0, #100
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, _0804F438  @ =gUnknown_084289B8
	add r2, r7, #6
	ldrb r3, [r2]
	add r2, r3, #1
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	add r2, r0, #0
	add r0, r0, #102
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, _0804F43C  @ =gUnknown_084289C8
	add r2, r7, #6
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	add r2, r0, #0
	add r0, r0, #104
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, _0804F43C  @ =gUnknown_084289C8
	add r2, r7, #6
	ldrb r3, [r2]
	add r2, r3, #1
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	add r2, r0, #0
	add r0, r0, #106
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	lsr r1, r2, #2
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	add r1, r2, #1
	ldrb r2, [r0, #22]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #22]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	mov r3, #128
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	cmp r1, #0
	beq _0804F440
	mov r1, #2
	b _0804F442
	.byte 0x00
	.byte 0x00
_0804F438:
	.4byte gUnknown_084289B8
_0804F43C:
	.4byte gUnknown_084289C8
_0804F440:
	mov r1, #1
_0804F442:
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804F254

