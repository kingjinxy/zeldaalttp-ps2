	THUMB_FUNC_START sub_080E3EFC
sub_080E3EFC: @ 0x080E3EFC
	push {r4,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #236
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080E3F44
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080E3F4C  @ =gRam
	ldr r1, _080E3F50  @ =0x00000FA2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #6
	strb r1, [r0]
	ldr r1, _080E3F54  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r0, _080E3F58  @ =0x00001012
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #3
	strb r0, [r1]
	ldr r1, _080E3F5C  @ =0x00000F82
	add r2, r2, r1
	add r2, r4, r2
	mov r0, #2
	strb r0, [r2]
_080E3F44:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E3F4C:
	.4byte gRam
_080E3F50:
	.4byte 0x00000FA2
_080E3F54:
	.4byte 0x00000FC2
_080E3F58:
	.4byte 0x00001012
_080E3F5C:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080E3EFC

