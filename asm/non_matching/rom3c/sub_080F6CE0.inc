	THUMB_FUNC_START sub_080F6CE0
sub_080F6CE0: @ 0x080F6CE0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r6, r2, #0
	ldr r5, _080F6D10  @ =gRam
	ldr r1, _080F6D14  @ =0x00000FC2
	add r0, r5, r1
	add r4, r2, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080F6D18
	sub r1, r1, #112
	add r0, r5, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #80
	strb r0, [r4]
	add r0, r2, #0
	bl Sprite_LoadPalette
	b _080F6D2E
	.byte 0x00
	.byte 0x00
_080F6D10:
	.4byte gRam
_080F6D14:
	.4byte 0x00000FC2
_080F6D18:
	cmp r0, #15
	bne _080F6D22
	add r0, r2, #0
	bl sub_080F6D94
_080F6D22:
	ldr r0, _080F6D34  @ =0x000010C2
	add r1, r5, r0
	add r1, r6, r1
	ldrb r0, [r4]
	add r0, r0, #20
	strb r0, [r1]
_080F6D2E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080F6D34:
	.4byte 0x000010C2
	THUMB_FUNC_END sub_080F6CE0

