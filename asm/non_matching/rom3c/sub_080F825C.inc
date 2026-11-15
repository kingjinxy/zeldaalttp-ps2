	THUMB_FUNC_START sub_080F825C
sub_080F825C: @ 0x080F825C
	push {lr}
	ldr r2, _080F8270  @ =gRam
	ldr r1, _080F8274  @ =0x00001710
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F8278
_080F826A:
	mov r0, #1
	b _080F828E
	.byte 0x00
	.byte 0x00
_080F8270:
	.4byte gRam
_080F8274:
	.4byte 0x00001710
_080F8278:
	mov r1, #4
	ldr r0, _080F8294  @ =0x00000E15
	add r2, r2, r0
_080F827E:
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #49
	beq _080F826A
	sub r1, r1, #1
	cmp r1, #0
	bge _080F827E
	mov r0, #0
_080F828E:
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080F8294:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_080F825C

