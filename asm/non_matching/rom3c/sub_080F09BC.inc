	THUMB_FUNC_START sub_080F09BC
sub_080F09BC: @ 0x080F09BC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080F09E8  @ =gRam
	ldr r2, _080F09EC  @ =0x000016F8
	add r1, r0, r2
	ldrb r0, [r1]
	cmp r0, #0
	bne _080F09E0
	mov r0, #4
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #16
	bl sub_080C4378
	add r0, r4, #0
	bl Sprite_Invert_XY_Speeds
_080F09E0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F09E8:
	.4byte gRam
_080F09EC:
	.4byte 0x000016F8
	THUMB_FUNC_END sub_080F09BC

