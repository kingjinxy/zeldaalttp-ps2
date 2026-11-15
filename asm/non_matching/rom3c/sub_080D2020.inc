	THUMB_FUNC_START sub_080D2020
sub_080D2020: @ 0x080D2020
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r2, r1, #0
	ldr r0, _080D2048  @ =gFlute
	ldrb r0, [r0]
	cmp r0, #1
	bls _080D203C
	ldr r0, _080D204C  @ =gRam
	ldr r3, _080D2050  @ =0x00000FA2
	add r0, r0, r3
	add r0, r1, r0
	mov r1, #0
	strb r1, [r0]
_080D203C:
	add r0, r2, #0
	bl sub_080C3758
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D2048:
	.4byte gFlute
_080D204C:
	.4byte gRam
_080D2050:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080D2020

