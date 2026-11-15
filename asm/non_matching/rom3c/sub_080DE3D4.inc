	THUMB_FUNC_START sub_080DE3D4
sub_080DE3D4: @ 0x080DE3D4
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080DE40C  @ =gRam
	ldr r0, _080DE410  @ =0x00001172
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080DE414  @ =0x000009DA
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #10
	bne _080DE408
	ldr r0, _080DE418  @ =0x00001052
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080DE41C  @ =0x00001122
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #11
	strb r1, [r0]
_080DE408:
	pop {r0}
	bx r0
_080DE40C:
	.4byte gRam
_080DE410:
	.4byte 0x00001172
_080DE414:
	.4byte 0x000009DA
_080DE418:
	.4byte 0x00001052
_080DE41C:
	.4byte 0x00001122
	THUMB_FUNC_END sub_080DE3D4

