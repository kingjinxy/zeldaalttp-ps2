	THUMB_FUNC_START sub_080EAB14
sub_080EAB14: @ 0x080EAB14
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080EAB40  @ =gRam
	ldr r1, _080EAB44  @ =0x00001052
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #4
	strb r1, [r2]
	ldr r2, _080EAB48  @ =0x00000F92
	add r3, r3, r2
	add r3, r0, r3
	lsl r1, r1, #24
	lsr r1, r1, #28
	mov r2, #1
	and r1, r1, r2
	strb r1, [r3]
	bl sub_080C3094
	pop {r0}
	bx r0
_080EAB40:
	.4byte gRam
_080EAB44:
	.4byte 0x00001052
_080EAB48:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080EAB14

