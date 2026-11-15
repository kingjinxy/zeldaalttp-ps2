	THUMB_FUNC_START sub_080E6DA8
sub_080E6DA8: @ 0x080E6DA8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080E6E0C  @ =gRam
	ldr r2, _080E6E10  @ =0x00000FC2
	add r0, r1, r2
	add r3, r4, r0
	ldrb r2, [r3]
	mov r0, #0
	ldrsb r0, [r3, r0]
	cmp r0, #0
	blt _080E6DEA
	mov r5, #15
	add r0, r5, #0
	and r0, r0, r2
	cmp r0, #0
	bne _080E6DDA
	ldr r0, _080E6E14  @ =0x00000FB2
	add r1, r1, r0
	add r1, r4, r1
	ldr r2, _080E6E18  @ =gUnknown_0817779A
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080E6DDA:
	ldrb r1, [r3]
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #8
	bne _080E6DEA
	add r0, r4, #0
	bl sub_080E5A60
_080E6DEA:
	ldr r0, _080E6E0C  @ =gRam
	ldr r2, _080E6E1C  @ =0x00000F82
	add r1, r0, r2
	add r1, r4, r1
	ldr r2, _080E6E20  @ =gUnknown_08177790
	ldr r3, _080E6E10  @ =0x00000FC2
	add r0, r0, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #4
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E6E0C:
	.4byte gRam
_080E6E10:
	.4byte 0x00000FC2
_080E6E14:
	.4byte 0x00000FB2
_080E6E18:
	.4byte gUnknown_0817779A
_080E6E1C:
	.4byte 0x00000F82
_080E6E20:
	.4byte gUnknown_08177790
	THUMB_FUNC_END sub_080E6DA8

