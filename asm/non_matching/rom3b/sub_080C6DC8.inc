	THUMB_FUNC_START sub_080C6DC8
sub_080C6DC8: @ 0x080C6DC8
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080C6DE8  @ =gRam
	ldr r3, _080C6DEC  @ =0x00000FF2
	add r0, r1, r3
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #84
	bgt _080C6DF0
	cmp r0, #83
	bge _080C6E0C
	cmp r0, #74
	beq _080C6E00
	b _080C6E18
	.byte 0x00
	.byte 0x00
_080C6DE8:
	.4byte gRam
_080C6DEC:
	.4byte 0x00000FF2
_080C6DF0:
	cmp r0, #146
	beq _080C6E0C
	cmp r0, #236
	bne _080C6E18
	add r0, r2, #0
	bl sub_080C6A24
	b _080C6E36
_080C6E00:
	ldr r3, _080C6E14  @ =0x00000F82
	add r0, r1, r3
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #1
	bls _080C6E18
_080C6E0C:
	add r0, r2, #0
	bl SpriteActive_Main
	b _080C6E36
_080C6E14:
	.4byte 0x00000F82
_080C6E18:
	ldr r3, _080C6E2C  @ =0x00000FC2
	add r0, r1, r3
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C6E30
	add r0, r2, #0
	bl sub_080C6DB8
	b _080C6E36
_080C6E2C:
	.4byte 0x00000FC2
_080C6E30:
	add r0, r2, #0
	bl sub_080C65E0
_080C6E36:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C6DC8

	.byte 0x00
	.byte 0x00
