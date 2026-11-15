	THUMB_FUNC_START sub_080DFD54
sub_080DFD54: @ 0x080DFD54
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080DFDB4  @ =gRam
	ldr r0, _080DFDB8  @ =0x00001770
	add r1, r6, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080DFDBC  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DFDAA
	bl sub_0809E3CC
	add r4, r0, #0
	cmp r4, #0
	bne _080DFDAA
	ldr r1, _080DFDC0  @ =0x0000014D
	add r0, r5, #0
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DFDAA
	ldr r0, _080DFDC4  @ =0x00000F52
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_08092E50
	ldr r1, _080DFDC8  @ =0x000016D5
	add r0, r6, r1
	strb r4, [r0]
	ldr r1, _080DFDCC  @ =0x00001082
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
_080DFDAA:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DFDB4:
	.4byte gRam
_080DFDB8:
	.4byte 0x00001770
_080DFDBC:
	.4byte 0x00000FC2
_080DFDC0:
	.4byte 0x0000014D
_080DFDC4:
	.4byte 0x00000F52
_080DFDC8:
	.4byte 0x000016D5
_080DFDCC:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080DFD54

