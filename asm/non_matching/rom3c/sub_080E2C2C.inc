	THUMB_FUNC_START sub_080E2C2C
sub_080E2C2C: @ 0x080E2C2C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E26E4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E2D1E
	add r0, r4, #0
	bl sub_080E2A2C
	add r0, r4, #0
	bl sub_080C3964
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E2D1E
	add r0, r4, #0
	bl sub_080E3D00
	add r0, r4, #0
	bl sub_080C79F8
	add r0, r4, #0
	bl sub_080C4F98
	ldr r5, _080E2CCC  @ =gRam
	ldr r1, _080E2CD0  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080E2D0A
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _080E2CD4  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	strb r3, [r0]
	sub r1, r1, #208
	add r0, r5, r1
	add r0, r4, r0
	strb r3, [r0]
	mov r6, #3
	add r3, r4, #0
	and r3, r3, r6
	ldr r0, _080E2CD8  @ =gUnknown_08176E14
	add r0, r3, r0
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_080C35FC
	ldr r1, _080E2CDC  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	beq _080E2D0A
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080E2CE0
	add r0, r4, #0
	bl sub_080C36D8
	b _080E2CE8
	.byte 0x00
	.byte 0x00
_080E2CCC:
	.4byte gRam
_080E2CD0:
	.4byte 0x00000996
_080E2CD4:
	.4byte 0x00001082
_080E2CD8:
	.4byte gUnknown_08176E14
_080E2CDC:
	.4byte 0x00001042
_080E2CE0:
	add r0, r4, #0
	bl sub_080C3028
	add r0, r0, #2
_080E2CE8:
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080E2D24  @ =gRam
	ldr r0, _080E2D28  @ =0x00000F22
	add r1, r2, r0
	add r1, r4, r1
	ldr r0, _080E2D2C  @ =gUnknown_08176900
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E2D30  @ =0x00000F12
	add r2, r2, r1
	add r2, r4, r2
	ldr r0, _080E2D34  @ =gUnknown_08176904
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r2]
_080E2D0A:
	ldr r1, _080E2D24  @ =gRam
	ldr r0, _080E2D38  @ =0x00001052
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080E1E70
_080E2D1E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E2D24:
	.4byte gRam
_080E2D28:
	.4byte 0x00000F22
_080E2D2C:
	.4byte gUnknown_08176900
_080E2D30:
	.4byte 0x00000F12
_080E2D34:
	.4byte gUnknown_08176904
_080E2D38:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080E2C2C

