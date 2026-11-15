	THUMB_FUNC_START sub_0809E3F4
sub_0809E3F4: @ 0x0809E3F4
	push {lr}
	ldr r2, _0809E410  @ =gRam
	ldr r1, _0809E414  @ =0x0000175F
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809E40C
	ldr r1, _0809E418  @ =0x00001702
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809E41C
_0809E40C:
	mov r0, #1
	b _0809E432
_0809E410:
	.4byte gRam
_0809E414:
	.4byte 0x0000175F
_0809E418:
	.4byte 0x00001702
_0809E41C:
	mov r1, #4
	ldr r0, _0809E438  @ =0x00000E15
	add r2, r2, r0
_0809E422:
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #39
	beq _0809E40C
	sub r1, r1, #1
	cmp r1, #0
	bge _0809E422
	mov r0, #0
_0809E432:
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0809E438:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_0809E3F4

