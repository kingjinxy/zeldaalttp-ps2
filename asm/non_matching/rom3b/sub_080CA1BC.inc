	THUMB_FUNC_START sub_080CA1BC
sub_080CA1BC: @ 0x080CA1BC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080CA270  @ =gRam
	ldr r1, _080CA274  @ =0x00000E15
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	mov r0, #27
	add r1, r5, #0
	mov r2, #15
	bl sub_080C9AAC
	add r2, r0, #0
	cmp r2, #0
	blt _080CA26A
	ldr r3, _080CA278  @ =0x00000EE2
	add r1, r4, r3
	add r1, r2, r1
	ldr r3, _080CA27C  @ =0x00000DCF
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CA280  @ =0x00000F02
	add r1, r4, r0
	add r1, r2, r1
	add r3, r3, #20
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CA284  @ =0x00000ED2
	add r1, r4, r0
	add r1, r2, r1
	sub r3, r3, #30
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CA288  @ =0x00000EF2
	add r1, r4, r0
	add r1, r2, r1
	add r3, r3, #20
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080CA28C  @ =0x00000FA2
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #6
	strb r1, [r0]
	ldr r3, _080CA290  @ =0x00000FC2
	add r0, r4, r3
	add r0, r2, r0
	mov r1, #31
	strb r1, [r0]
	ldr r0, _080CA294  @ =0x00000F22
	add r1, r4, r0
	add r1, r2, r1
	ldr r3, _080CA298  @ =0x00000DF7
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CA29C  @ =0x00000F12
	add r1, r4, r0
	add r1, r2, r1
	sub r3, r3, #10
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080CA2A0  @ =0x000010F2
	add r0, r4, r1
	add r0, r2, r0
	mov r3, #161
	lsl r3, r3, #4
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	lsl r0, r2, #24
	lsr r0, r0, #24
	bl sub_080C4F3C
_080CA26A:
	pop {r4,r5}
	pop {r0}
	bx r0
_080CA270:
	.4byte gRam
_080CA274:
	.4byte 0x00000E15
_080CA278:
	.4byte 0x00000EE2
_080CA27C:
	.4byte 0x00000DCF
_080CA280:
	.4byte 0x00000F02
_080CA284:
	.4byte 0x00000ED2
_080CA288:
	.4byte 0x00000EF2
_080CA28C:
	.4byte 0x00000FA2
_080CA290:
	.4byte 0x00000FC2
_080CA294:
	.4byte 0x00000F22
_080CA298:
	.4byte 0x00000DF7
_080CA29C:
	.4byte 0x00000F12
_080CA2A0:
	.4byte 0x000010F2
	THUMB_FUNC_END sub_080CA1BC

