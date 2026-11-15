	THUMB_FUNC_START sub_080C99F8
sub_080C99F8: @ 0x080C99F8
	push {lr}
	ldr r0, _080C9A08  @ =gBottle1
	ldrb r0, [r0]
	cmp r0, #2
	bne _080C9A0C
	mov r0, #0
	b _080C9A42
	.byte 0x00
	.byte 0x00
_080C9A08:
	.4byte gBottle1
_080C9A0C:
	ldr r0, _080C9A18  @ =gBottle2
	ldrb r0, [r0]
	cmp r0, #2
	bne _080C9A1C
	mov r0, #1
	b _080C9A42
_080C9A18:
	.4byte gBottle2
_080C9A1C:
	ldr r0, _080C9A28  @ =gBottle3
	ldrb r0, [r0]
	cmp r0, #2
	bne _080C9A2C
	mov r0, #2
	b _080C9A42
_080C9A28:
	.4byte gBottle3
_080C9A2C:
	ldr r0, _080C9A3C  @ =gBottle4
	ldrb r0, [r0]
	cmp r0, #2
	beq _080C9A40
	mov r0, #1
	neg r0, r0
	b _080C9A42
	.byte 0x00
	.byte 0x00
_080C9A3C:
	.4byte gBottle4
_080C9A40:
	mov r0, #3
_080C9A42:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C99F8

	.byte 0x00
	.byte 0x00
