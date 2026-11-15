	THUMB_FUNC_START sub_080EFD88
sub_080EFD88: @ 0x080EFD88
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080EFDD8  @ =gRam
	ldr r1, _080EFDDC  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080EFDD0
	ldr r2, _080EFDE0  @ =0x00000F52
	add r0, r6, r2
	add r0, r5, r0
	strb r1, [r0]
	bl GetRandomInt
	ldr r1, _080EFDE4  @ =0x00000EE2
	add r2, r6, r1
	add r2, r5, r2
	ldr r3, _080EFDE8  @ =gUnknown_08178BD0
	mov r4, #7
	add r1, r4, #0
	and r1, r1, r0
	add r1, r1, r3
	ldrb r0, [r1]
	strb r0, [r2]
	bl GetRandomInt
	ldr r2, _080EFDEC  @ =0x00000ED2
	add r1, r6, r2
	add r1, r5, r1
	ldr r2, _080EFDF0  @ =gUnknown_08178BD8
	and r4, r4, r0
	add r4, r4, r2
	ldrb r0, [r4]
	strb r0, [r1]
_080EFDD0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EFDD8:
	.4byte gRam
_080EFDDC:
	.4byte 0x00000FC2
_080EFDE0:
	.4byte 0x00000F52
_080EFDE4:
	.4byte 0x00000EE2
_080EFDE8:
	.4byte gUnknown_08178BD0
_080EFDEC:
	.4byte 0x00000ED2
_080EFDF0:
	.4byte gUnknown_08178BD8
	THUMB_FUNC_END sub_080EFD88

