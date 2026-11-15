	THUMB_FUNC_START sub_080EF15C
sub_080EF15C: @ 0x080EF15C
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080EECEC
	ldr r2, _080EF190  @ =gRam
	ldr r0, _080EF194  @ =0x00001052
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldrb r0, [r1]
	ldr r1, _080EF198  @ =0x00000F92
	add r2, r2, r1
	add r4, r4, r2
	mov r1, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #26
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_080EF190:
	.4byte gRam
_080EF194:
	.4byte 0x00001052
_080EF198:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080EF15C

