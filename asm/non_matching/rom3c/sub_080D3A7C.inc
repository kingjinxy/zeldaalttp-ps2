	THUMB_FUNC_START sub_080D3A7C
sub_080D3A7C: @ 0x080D3A7C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r3, _080D3AA4  @ =gRam
	ldr r1, _080D3AA8  @ =0x00001AE2
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D3AB4
	ldr r1, _080D3AAC  @ =0x00000F52
	add r0, r3, r1
	add r0, r2, r0
	mov r2, #0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080D3AB0  @ =0x00001770
	add r0, r3, r1
	strb r2, [r0]
	b _080D3AE0
_080D3AA4:
	.4byte gRam
_080D3AA8:
	.4byte 0x00001AE2
_080D3AAC:
	.4byte 0x00000F52
_080D3AB0:
	.4byte 0x00001770
_080D3AB4:
	ldr r1, _080D3AE8  @ =0x00000FC2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D3ACC
	ldr r0, _080D3AEC  @ =0x00000F52
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D3ACC:
	ldr r1, _080D3AF0  @ =0x00000F92
	add r2, r3, r1
	add r2, r4, r2
	ldr r1, _080D3AF4  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r0, r0, #4
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
_080D3AE0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D3AE8:
	.4byte 0x00000FC2
_080D3AEC:
	.4byte 0x00000F52
_080D3AF0:
	.4byte 0x00000F92
_080D3AF4:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080D3A7C

