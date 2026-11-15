	THUMB_FUNC_START sub_080B008C
sub_080B008C: @ 0x080B008C
	push {lr}
	mov r1, #9
	ldr r2, _080B00A8  @ =gRam
_080B0092:
	ldr r3, _080B00AC  @ =0x00000E15
	add r0, r2, r3
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080B00B0
	lsl r0, r1, #24
	lsr r0, r0, #24
	bl sub_080AEF4C
	b _080B00B6
_080B00A8:
	.4byte gRam
_080B00AC:
	.4byte 0x00000E15
_080B00B0:
	sub r1, r1, #1
	cmp r1, #0
	bge _080B0092
_080B00B6:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080B008C

	.byte 0x00
	.byte 0x00
