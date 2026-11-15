	THUMB_FUNC_START sub_080D1B44
sub_080D1B44: @ 0x080D1B44
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C99DC
	ldr r5, _080D1BC8  @ =gRam
	ldr r1, _080D1BCC  @ =0x00001152
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #3
	mov r3, #0
	strb r0, [r1]
	ldr r2, _080D1BD0  @ =0x00001142
	add r0, r5, r2
	add r2, r4, r0
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bge _080D1B84
	mov r0, #24
	strb r0, [r1]
	strb r3, [r2]
	ldr r1, _080D1BD4  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	strb r3, [r0]
	ldr r2, _080D1BD8  @ =0x00000F62
	add r0, r5, r2
	add r0, r4, r0
	strb r3, [r0]
_080D1B84:
	ldr r3, _080D1BD4  @ =0x00001052
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #3
	and r1, r1, r0
	cmp r1, #0
	bne _080D1BA8
	ldr r1, _080D1BD8  @ =0x00000F62
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #2
	beq _080D1BA8
	add r0, r0, #1
	strb r0, [r1]
_080D1BA8:
	ldr r0, _080D1BC8  @ =gRam
	ldr r2, _080D1BDC  @ =0x00000F92
	add r1, r0, r2
	add r1, r4, r1
	ldr r2, _080D1BE0  @ =gUnknown_08174B64
	ldr r3, _080D1BD8  @ =0x00000F62
	add r0, r0, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D1BC8:
	.4byte gRam
_080D1BCC:
	.4byte 0x00001152
_080D1BD0:
	.4byte 0x00001142
_080D1BD4:
	.4byte 0x00001052
_080D1BD8:
	.4byte 0x00000F62
_080D1BDC:
	.4byte 0x00000F92
_080D1BE0:
	.4byte gUnknown_08174B64
	THUMB_FUNC_END sub_080D1B44

