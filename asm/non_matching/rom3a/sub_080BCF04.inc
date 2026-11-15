	THUMB_FUNC_START sub_080BCF04
sub_080BCF04: @ 0x080BCF04
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	bl sub_080BDB54
	ldr r1, _080BCF7C  @ =gRam
	ldr r0, _080BCF80  @ =0x00000FF2
	add r2, r1, r0
	mov r0, #203
	strb r0, [r2]
	ldr r0, _080BCF84  @ =0x00000FF3
	add r2, r1, r0
	mov r0, #204
	strb r0, [r2]
	ldr r2, _080BCF88  @ =0x00000FF4
	add r1, r1, r2
	mov r0, #205
	strb r0, [r1]
	mov r4, #2
_080BCF2A:
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CEB84
	sub r4, r4, #1
	cmp r4, #0
	bge _080BCF2A
	add r0, r5, #0
	bl sub_080B9584
	ldr r4, _080BCF7C  @ =gRam
	ldr r1, _080BCF8C  @ =0x00000FA2
	add r0, r4, r1
	mov r1, #9
	strb r1, [r0]
	ldr r2, _080BCF90  @ =0x00000FA3
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	mov r0, #0
	bl sub_081089DC
	mov r0, #1
	bl sub_08107134
	mov r0, #2
	bl sub_081074E0
	ldr r1, _080BCF94  @ =0x00000FC3
	add r0, r4, r1
	mov r1, #2
	strb r1, [r0]
	ldr r2, _080BCF98  @ =0x00000FC4
	add r4, r4, r2
	strb r1, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BCF7C:
	.4byte gRam
_080BCF80:
	.4byte 0x00000FF2
_080BCF84:
	.4byte 0x00000FF3
_080BCF88:
	.4byte 0x00000FF4
_080BCF8C:
	.4byte 0x00000FA2
_080BCF90:
	.4byte 0x00000FA3
_080BCF94:
	.4byte 0x00000FC3
_080BCF98:
	.4byte 0x00000FC4
	THUMB_FUNC_END sub_080BCF04

