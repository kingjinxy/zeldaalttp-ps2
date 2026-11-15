	THUMB_FUNC_START sub_080FD81C
sub_080FD81C: @ 0x080FD81C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080FD874  @ =gRam
	ldr r1, _080FD878  @ =0x00001062
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r6, #1
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080FD86E
	bl sub_08133620
	ldr r1, _080FD87C  @ =0x00000CF8
	add r0, r4, r1
	ldrh r2, [r0]
	cmp r2, #0
	bne _080FD86E
	ldr r0, _080FD880  @ =0x00000F52
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080FD884  @ =0x00001770
	add r0, r4, r1
	strb r6, [r0]
	sub r1, r1, #19
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #2
	add r0, r4, r1
	strb r2, [r0]
	sub r1, r1, #139
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
_080FD86E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080FD874:
	.4byte gRam
_080FD878:
	.4byte 0x00001062
_080FD87C:
	.4byte 0x00000CF8
_080FD880:
	.4byte 0x00000F52
_080FD884:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080FD81C

