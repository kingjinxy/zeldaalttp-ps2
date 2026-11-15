	THUMB_FUNC_START sub_08111C8C
sub_08111C8C: @ 0x08111C8C
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CBBEC
	add r1, r0, #0
	ldr r0, _08111CBC  @ =gRam
	ldr r2, _08111CC0  @ =0x00000FA2
	add r0, r0, r2
	add r4, r4, r0
	mov r0, #0
	strb r0, [r4]
	cmp r1, #0
	blt _08111CB4
	lsl r0, r1, #24
	lsr r0, r0, #24
	bl sub_080CAE50
_08111CB4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08111CBC:
	.4byte gRam
_08111CC0:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_08111C8C

