	THUMB_FUNC_START sub_080E740C
sub_080E740C: @ 0x080E740C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E7464  @ =gRam
	ldr r1, _080E7468  @ =0x00000FC2
	add r0, r5, r1
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _080E74B4
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C6F48
	ldr r2, _080E746C  @ =0x00001042
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E7478
	ldr r3, _080E7470  @ =0x00001052
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r0, _080E7474  @ =0x00000F62
	add r3, r5, r0
	add r3, r4, r3
	sub r2, r2, #144
	add r0, r5, r2
	add r0, r4, r0
	ldrb r2, [r0]
	lsl r2, r2, #1
	lsl r1, r1, #24
	lsr r1, r1, #26
	mov r0, #1
	and r1, r1, r0
	orr r2, r2, r1
	strb r2, [r3]
	b _080E74C0
	.byte 0x00
	.byte 0x00
_080E7464:
	.4byte gRam
_080E7468:
	.4byte 0x00000FC2
_080E746C:
	.4byte 0x00001042
_080E7470:
	.4byte 0x00001052
_080E7474:
	.4byte 0x00000F62
_080E7478:
	ldr r3, _080E74A4  @ =0x00000FB2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #1
	eor r1, r1, r2
	strb r1, [r0]
	ldr r0, _080E74A8  @ =0x00000F22
	add r2, r5, r0
	add r2, r4, r2
	ldr r0, _080E74AC  @ =gUnknown_08177804
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	sub r3, r3, #160
	add r2, r5, r3
	add r2, r4, r2
	ldr r0, _080E74B0  @ =gUnknown_08177808
	add r1, r1, r0
	ldrb r0, [r1]
	b _080E74BE
	.byte 0x00
	.byte 0x00
_080E74A4:
	.4byte 0x00000FB2
_080E74A8:
	.4byte 0x00000F22
_080E74AC:
	.4byte gUnknown_08177804
_080E74B0:
	.4byte gUnknown_08177808
_080E74B4:
	ldr r3, _080E74C8  @ =0x00000F52
	add r0, r5, r3
	add r0, r4, r0
	strb r1, [r0]
	mov r0, #32
_080E74BE:
	strb r0, [r2]
_080E74C0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E74C8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E740C

