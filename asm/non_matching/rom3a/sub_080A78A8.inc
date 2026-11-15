	THUMB_FUNC_START sub_080A78A8
sub_080A78A8: @ 0x080A78A8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #16
	lsr r4, r0, #16
	mov r0, sp
	mov r1, #0
	strb r1, [r0]
	strb r1, [r0, #1]
	mov r6, #0
	mov r1, #2
	ldr r0, _080A7968  @ =gRam
	mov r8, r0
	ldr r0, _080A796C  @ =gUnknown_0816B870
	mov r9, r0
_080A78CA:
	lsl r3, r1, #24
	asr r0, r3, #25
	lsl r0, r0, #1
	add r0, r0, r9
	add r7, r3, #0
	lsl r1, r6, #24
	ldrh r0, [r0]
	cmp r4, r0
	bcc _080A7900
	ldr r0, _080A796C  @ =gUnknown_0816B870
	mov r12, r0
	asr r0, r1, #24
	mov r1, sp
	add r5, r1, r0
	ldrb r2, [r5]
_080A78E8:
	asr r0, r3, #25
	lsl r0, r0, #1
	add r0, r0, r12
	ldrh r1, [r0]
	sub r0, r4, r1
	lsl r0, r0, #16
	lsr r4, r0, #16
	add r0, r2, #1
	add r2, r0, #0
	cmp r4, r1
	bcs _080A78E8
	strb r0, [r5]
_080A7900:
	lsl r0, r6, #24
	mov r1, #128
	lsl r1, r1, #17
	add r0, r0, r1
	lsr r6, r0, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r7, r1
	lsr r1, r0, #24
	cmp r0, #0
	bge _080A78CA
	mov r0, sp
	strb r4, [r0, #2]
	mov r6, #2
	mov r3, #144
_080A791E:
	lsl r0, r6, #24
	asr r2, r0, #24
	mov r0, sp
	add r1, r0, r2
	ldrb r0, [r1]
	cmp r0, #127
	beq _080A7930
	orr r0, r0, r3
	strb r0, [r1]
_080A7930:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r0, #0
	bge _080A791E
	mov r0, sp
	ldrb r1, [r0]
	ldr r0, _080A7970  @ =0x00000965
	add r0, r0, r8
	strb r1, [r0]
	mov r0, sp
	ldrb r1, [r0, #1]
	ldr r0, _080A7974  @ =0x00000968
	add r0, r0, r8
	strb r1, [r0]
	mov r0, sp
	ldrb r1, [r0, #2]
	ldr r0, _080A7978  @ =0x00000969
	add r0, r0, r8
	strb r1, [r0]
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A7968:
	.4byte gRam
_080A796C:
	.4byte gUnknown_0816B870
_080A7970:
	.4byte 0x00000965
_080A7974:
	.4byte 0x00000968
_080A7978:
	.4byte 0x00000969
	THUMB_FUNC_END sub_080A78A8

