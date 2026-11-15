	THUMB_FUNC_START sub_080B00F8
sub_080B00F8: @ 0x080B00F8
	push {r4,lr}
	mov r1, #4
	ldr r2, _080B012C  @ =gRam
	ldr r3, _080B0130  @ =0x000009C6
	add r0, r2, r3
	ldrh r0, [r0]
	cmp r0, #15
	bne _080B0126
	ldr r0, _080B0134  @ =0x00000E15
	add r4, r2, r0
	mov r3, #0
_080B010E:
	lsl r0, r1, #24
	asr r2, r0, #24
	add r1, r2, r4
	ldrb r0, [r1]
	cmp r0, #65
	bne _080B011C
	strb r3, [r1]
_080B011C:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080B010E
_080B0126:
	pop {r4}
	pop {r0}
	bx r0
_080B012C:
	.4byte gRam
_080B0130:
	.4byte 0x000009C6
_080B0134:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_080B00F8

