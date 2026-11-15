	THUMB_FUNC_START sub_080E37B4
sub_080E37B4: @ 0x080E37B4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E2614
	add r0, r4, #0
	bl sub_080E2094
	ldr r5, _080E3800  @ =gRam
	ldr r1, _080E3804  @ =0x00000FC2
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _080E3810
	cmp r0, #0
	blt _080E381C
	ldr r6, _080E3808  @ =0x00001082
	add r2, r5, r6
	add r2, r4, r2
	ldr r3, _080E380C  @ =gUnknown_08176938
	lsr r1, r0, #27
	mov r0, #7
	and r1, r1, r0
	sub r6, r6, #208
	add r0, r5, r6
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #3
	orr r1, r1, r0
	add r1, r1, r3
	ldrb r0, [r1]
	strb r0, [r2]
	b _080E381C
	.byte 0x00
	.byte 0x00
_080E3800:
	.4byte gRam
_080E3804:
	.4byte 0x00000FC2
_080E3808:
	.4byte 0x00001082
_080E380C:
	.4byte gUnknown_08176938
_080E3810:
	mov r0, #32
	strb r0, [r1]
	ldr r1, _080E3824  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
_080E381C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E3824:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E37B4

