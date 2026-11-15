	THUMB_FUNC_START sub_080CBBEC
sub_080CBBEC: @ 0x080CBBEC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #74
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080CBC42
	ldr r2, _080CBC4C  @ =gRam
	ldr r1, _080CBC50  @ =0x00000FA2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #6
	strb r1, [r0]
	ldr r3, _080CBC54  @ =0x00000FD2
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #31
	strb r1, [r0]
	ldr r1, _080CBC58  @ =0x00000F82
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	add r3, r3, #64
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
	ldr r0, _080CBC5C  @ =0x00001122
	add r2, r2, r0
	add r2, r4, r2
	mov r0, #4
	strb r0, [r2]
	add r0, r5, #0
	mov r1, #21
	bl sub_080CF0AC
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
_080CBC42:
	add r0, r4, #0
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080CBC4C:
	.4byte gRam
_080CBC50:
	.4byte 0x00000FA2
_080CBC54:
	.4byte 0x00000FD2
_080CBC58:
	.4byte 0x00000F82
_080CBC5C:
	.4byte 0x00001122
	THUMB_FUNC_END sub_080CBBEC

