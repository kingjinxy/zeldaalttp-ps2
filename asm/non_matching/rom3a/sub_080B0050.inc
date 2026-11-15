	THUMB_FUNC_START sub_080B0050
sub_080B0050: @ 0x080B0050
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r0, _080B0074  @ =gRam
	ldr r1, _080B0078  @ =0x00001733
	add r2, r0, r1
	mov r1, #2
	strb r1, [r2]
	ldr r1, _080B007C  @ =0x000009AD
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080B0080
	add r0, r3, #0
	bl sub_080AEB5C
	b _080B0086
	.byte 0x00
	.byte 0x00
_080B0074:
	.4byte gRam
_080B0078:
	.4byte 0x00001733
_080B007C:
	.4byte 0x000009AD
_080B0080:
	add r0, r3, #0
	bl sub_080AED04
_080B0086:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080B0050

	.byte 0x00
	.byte 0x00
