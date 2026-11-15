	THUMB_FUNC_START sub_080DAC80
sub_080DAC80: @ 0x080DAC80
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080DACB0  @ =gRam
	ldr r0, _080DACB4  @ =0x00001642
	add r1, r3, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080DACB8  @ =0x00000FC2
	add r0, r3, r1
	add r4, r2, r0
	ldrb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DACC4
	ldr r4, _080DACBC  @ =0x00000F92
	add r1, r3, r4
	add r1, r2, r1
	ldr r2, _080DACC0  @ =gUnknown_08175BE5
	lsr r0, r0, #27
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080DACD4
_080DACB0:
	.4byte gRam
_080DACB4:
	.4byte 0x00001642
_080DACB8:
	.4byte 0x00000FC2
_080DACBC:
	.4byte 0x00000F92
_080DACC0:
	.4byte gUnknown_08175BE5
_080DACC4:
	ldr r1, _080DACDC  @ =0x00000F52
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #255
	strb r0, [r4]
_080DACD4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DACDC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DAC80

