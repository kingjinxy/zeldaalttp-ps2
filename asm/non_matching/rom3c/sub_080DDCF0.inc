	THUMB_FUNC_START sub_080DDCF0
sub_080DDCF0: @ 0x080DDCF0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r0, r6, #0
	bl sub_080DDDA4
	ldr r5, _080DDD84  @ =gRam
	ldr r1, _080DDD88  @ =0x00000F62
	add r0, r5, r1
	add r0, r6, r0
	mov r7, #1
	strb r7, [r0]
	add r0, r6, #0
	bl sub_080C2FA8
	ldr r1, _080DDD8C  @ =0x0000097D
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #48
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #95
	bhi _080DDD7E
	sub r1, r1, #1
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #48
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #95
	bhi _080DDD7E
	bl sub_08093078
	ldr r0, _080DDD90  @ =0x00000F52
	add r1, r5, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080DDD94  @ =0x0000015D
	bl sub_080C95C0
	ldr r1, _080DDD98  @ =0x00001770
	add r0, r5, r1
	strb r7, [r0]
	mov r0, #200
	add r1, r6, #0
	bl sub_080CA538
	add r4, r0, #0
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r1, _080DDD9C  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	strb r7, [r0]
	ldr r0, _080DDDA0  @ =0x00000ED2
	add r2, r5, r0
	add r2, r4, r2
	add r1, r1, #192
	add r3, r5, r1
	add r1, r6, r3
	ldrb r0, [r2]
	ldrb r1, [r1]
	sub r0, r0, r1
	strb r0, [r2]
	add r4, r4, r3
	mov r0, #0
	strb r0, [r4]
_080DDD7E:
	pop {r4-r7}
	pop {r0}
	bx r0
_080DDD84:
	.4byte gRam
_080DDD88:
	.4byte 0x00000F62
_080DDD8C:
	.4byte 0x0000097D
_080DDD90:
	.4byte 0x00000F52
_080DDD94:
	.4byte 0x0000015D
_080DDD98:
	.4byte 0x00001770
_080DDD9C:
	.4byte 0x00001082
_080DDDA0:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_080DDCF0

