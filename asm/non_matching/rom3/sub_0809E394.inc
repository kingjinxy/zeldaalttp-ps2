	THUMB_FUNC_START sub_0809E394
sub_0809E394: @ 0x0809E394
	push {lr}
	ldr r1, _0809E3B8  @ =gRam
	ldr r2, _0809E3BC  @ =0x000009B2
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0809E3C8
	ldr r2, _0809E3C0  @ =0x0000172C
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809E3C4
	bl sub_0809B0DC
	b _0809E3C8
	.byte 0x00
	.byte 0x00
_0809E3B8:
	.4byte gRam
_0809E3BC:
	.4byte 0x000009B2
_0809E3C0:
	.4byte 0x0000172C
_0809E3C4:
	bl sub_0809B2AC
_0809E3C8:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809E394

