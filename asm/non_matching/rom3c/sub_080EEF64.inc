	THUMB_FUNC_START sub_080EEF64
sub_080EEF64: @ 0x080EEF64
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _080EEF84  @ =gRam
	ldr r3, _080EEF88  @ =0x00001142
	add r0, r2, r3
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EEF90
	ldr r3, _080EEF8C  @ =0x00000F92
	add r0, r2, r3
	add r0, r1, r0
	mov r1, #2
	strb r1, [r0]
	b _080EEF96
_080EEF84:
	.4byte gRam
_080EEF88:
	.4byte 0x00001142
_080EEF8C:
	.4byte 0x00000F92
_080EEF90:
	add r0, r1, #0
	bl sub_080EEF9C
_080EEF96:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EEF64

	.byte 0x00
	.byte 0x00
