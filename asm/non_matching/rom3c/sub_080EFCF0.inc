	THUMB_FUNC_START sub_080EFCF0
sub_080EFCF0: @ 0x080EFCF0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r4, _080EFD2C  @ =gRam
	ldr r1, _080EFD30  @ =0x00000FC2
	add r0, r4, r1
	add r3, r2, r0
	ldr r1, _080EFD34  @ =0x000010D2
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r3]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	bne _080EFD26
	mov r0, #127
	strb r0, [r3]
	ldr r0, _080EFD38  @ =0x00000F52
	add r1, r4, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r2, #0
	mov r1, #45
	bl sub_080CF0AC
_080EFD26:
	pop {r4}
	pop {r0}
	bx r0
_080EFD2C:
	.4byte gRam
_080EFD30:
	.4byte 0x00000FC2
_080EFD34:
	.4byte 0x000010D2
_080EFD38:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EFCF0

