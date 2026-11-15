	THUMB_FUNC_START sub_080F3C08
sub_080F3C08: @ 0x080F3C08
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl Sprite3_Move
	ldr r2, _080F3C2C  @ =gRam
	ldr r1, _080F3C30  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	beq _080F3C38
	ldr r3, _080F3C34  @ =0x00000FD2
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #2
	b _080F3C4C
_080F3C2C:
	.4byte gRam
_080F3C30:
	.4byte 0x00000FC2
_080F3C34:
	.4byte 0x00000FD2
_080F3C38:
	ldr r3, _080F3C54  @ =0x00001770
	add r0, r2, r3
	strb r1, [r0]
	ldr r3, _080F3C58  @ =0x00000F22
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
	add r3, r3, #96
	add r0, r2, r3
	add r0, r4, r0
_080F3C4C:
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080F3C54:
	.4byte 0x00001770
_080F3C58:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080F3C08

