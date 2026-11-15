	THUMB_FUNC_START sub_0810A33C
sub_0810A33C: @ 0x0810A33C
	push {r4,r5,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #201
	mov r2, #8
	bl sub_080C9AAC
	add r5, r0, #0
	cmp r5, #0
	blt _0810A3A8
	lsl r4, r5, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CAE50
	ldr r2, _0810A3B0  @ =gRam
	ldr r1, _0810A3B4  @ =0x00001092
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #4
	strb r1, [r0]
	ldr r3, _0810A3B8  @ =0x00001122
	add r0, r2, r3
	add r0, r5, r0
	mov r1, #3
	strb r1, [r0]
	ldr r1, _0810A3BC  @ =0x00001032
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #64
	strb r1, [r0]
	ldr r3, _0810A3C0  @ =0x00001012
	add r0, r2, r3
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _0810A3C4  @ =0x00000E75
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #128
	strb r1, [r0]
	ldr r3, _0810A3C8  @ =0x00000EF2
	add r0, r2, r3
	add r0, r5, r0
	strb r1, [r0]
	ldr r0, _0810A3CC  @ =0x00000FC2
	add r2, r2, r0
	add r2, r5, r2
	mov r0, #48
	strb r0, [r2]
	add r0, r4, #0
	bl sub_0810A820
_0810A3A8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810A3B0:
	.4byte gRam
_0810A3B4:
	.4byte 0x00001092
_0810A3B8:
	.4byte 0x00001122
_0810A3BC:
	.4byte 0x00001032
_0810A3C0:
	.4byte 0x00001012
_0810A3C4:
	.4byte 0x00000E75
_0810A3C8:
	.4byte 0x00000EF2
_0810A3CC:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_0810A33C

