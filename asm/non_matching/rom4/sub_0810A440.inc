	THUMB_FUNC_START sub_0810A440
sub_0810A440: @ 0x0810A440
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080ED830
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810A476
	add r0, r4, #0
	bl sub_0810A70C
	ldr r2, _0810A47C  @ =gRam
	ldr r1, _0810A480  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #128
	strb r1, [r0]
	ldr r1, _0810A484  @ =0x00000E65
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r0, _0810A488  @ =0x00000A3C
	add r2, r2, r0
	mov r0, #28
	strh r0, [r2]
_0810A476:
	pop {r4}
	pop {r0}
	bx r0
_0810A47C:
	.4byte gRam
_0810A480:
	.4byte 0x00000FC2
_0810A484:
	.4byte 0x00000E65
_0810A488:
	.4byte 0x00000A3C
	THUMB_FUNC_END sub_0810A440

