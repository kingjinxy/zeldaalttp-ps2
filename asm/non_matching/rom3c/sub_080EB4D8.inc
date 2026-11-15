	THUMB_FUNC_START sub_080EB4D8
sub_080EB4D8: @ 0x080EB4D8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r5, _080EB584  @ =gRam
	ldr r0, _080EB588  @ =0x00000F72
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C6F48
	ldr r1, _080EB58C  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EB514
	ldr r3, _080EB590  @ =0x00000FB2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #3
	eor r1, r1, r2
	strb r1, [r0]
_080EB514:
	ldr r1, _080EB590  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r3, _080EB594  @ =0x00000F82
	add r0, r5, r3
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _080EB52E
	add r0, r2, #4
	lsl r0, r0, #24
	lsr r2, r0, #24
_080EB52E:
	ldr r0, _080EB598  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080EB59C  @ =gUnknown_08177F5C
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _080EB5A0  @ =0x00000F12
	add r1, r5, r3
	add r1, r4, r1
	ldr r0, _080EB5A4  @ =gUnknown_08177F64
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r1, _080EB5A8  @ =0x00001152
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	sub r0, r0, #4
	strb r0, [r3]
	sub r1, r1, #16
	add r0, r5, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080EB5BE
	mov r0, #0
	strb r0, [r2]
	ldr r1, _080EB5AC  @ =0x00000FC2
	add r0, r5, r1
	add r1, r4, r0
	ldrb r2, [r1]
	cmp r2, #0
	beq _080EB5B0
	mov r0, #20
	strb r0, [r3]
	b _080EB5BE
	.byte 0x00
	.byte 0x00
_080EB584:
	.4byte gRam
_080EB588:
	.4byte 0x00000F72
_080EB58C:
	.4byte 0x00001042
_080EB590:
	.4byte 0x00000FB2
_080EB594:
	.4byte 0x00000F82
_080EB598:
	.4byte 0x00000F22
_080EB59C:
	.4byte gUnknown_08177F5C
_080EB5A0:
	.4byte 0x00000F12
_080EB5A4:
	.4byte gUnknown_08177F64
_080EB5A8:
	.4byte 0x00001152
_080EB5AC:
	.4byte 0x00000FC2
_080EB5B0:
	ldr r3, _080EB5C4  @ =0x00000F52
	add r0, r5, r3
	add r0, r7, r0
	strb r2, [r0]
	strb r2, [r6]
	mov r0, #63
	strb r0, [r1]
_080EB5BE:
	pop {r4-r7}
	pop {r0}
	bx r0
_080EB5C4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EB4D8

