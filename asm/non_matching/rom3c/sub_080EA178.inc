	THUMB_FUNC_START sub_080EA178
sub_080EA178: @ 0x080EA178
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080EA1AC  @ =gRam
	ldr r1, _080EA1B0  @ =0x00001172
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080EA1B4  @ =0x00000FC2
	add r0, r2, r1
	add r3, r4, r0
	ldrb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EA1B8
	sub r1, r1, #112
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #8
	strb r0, [r3]
	b _080EA1D8
	.byte 0x00
	.byte 0x00
_080EA1AC:
	.4byte gRam
_080EA1B0:
	.4byte 0x00001172
_080EA1B4:
	.4byte 0x00000FC2
_080EA1B8:
	ldr r1, _080EA1E0  @ =0x00000F92
	add r2, r2, r1
	add r2, r4, r2
	ldr r3, _080EA1E4  @ =gUnknown_08177CCC
	lsr r0, r0, #26
	mov r1, #1
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl Sprite3_Move
_080EA1D8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EA1E0:
	.4byte 0x00000F92
_080EA1E4:
	.4byte gUnknown_08177CCC
	THUMB_FUNC_END sub_080EA178

