	THUMB_FUNC_START sub_080EF0F4
sub_080EF0F4: @ 0x080EF0F4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080EECEC
	ldr r1, _080EF118  @ =gRam
	ldr r2, _080EF11C  @ =0x00000FC2
	add r0, r1, r2
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _080EF120
	add r1, r0, #0
	add r0, r4, #0
	bl sub_080EF138
	b _080EF12C
_080EF118:
	.4byte gRam
_080EF11C:
	.4byte 0x00000FC2
_080EF120:
	ldr r0, _080EF134  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080EF12C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EF134:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EF0F4

