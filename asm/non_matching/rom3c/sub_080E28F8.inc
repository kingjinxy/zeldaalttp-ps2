	THUMB_FUNC_START sub_080E28F8
sub_080E28F8: @ 0x080E28F8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080E2BC8
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E2A02
	add r0, r5, #0
	bl sub_080E2A2C
	add r0, r5, #0
	bl sub_080C3964
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E2A02
	add r0, r5, #0
	bl sub_080E3D00
	add r0, r5, #0
	bl sub_080C79F8
	add r0, r5, #0
	bl sub_080C4F98
	ldr r4, _080E2994  @ =gRam
	ldr r1, _080E2998  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080E29D2
	add r0, r5, #0
	bl sub_080C2FA8
	ldr r2, _080E299C  @ =0x00001082
	add r1, r4, r2
	add r1, r5, r1
	strb r0, [r1]
	sub r2, r2, #208
	add r1, r4, r2
	add r1, r5, r1
	strb r0, [r1]
	ldr r1, _080E29A0  @ =gUnknown_08176E14
	mov r6, #3
	add r0, r5, #0
	and r0, r0, r6
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r5, #0
	bl sub_080C35FC
	ldr r1, _080E29A4  @ =0x00001042
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #0
	beq _080E29D2
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080E29A8
	add r0, r5, #0
	bl sub_080C36D8
	b _080E29B0
	.byte 0x00
	.byte 0x00
_080E2994:
	.4byte gRam
_080E2998:
	.4byte 0x00000996
_080E299C:
	.4byte 0x00001082
_080E29A0:
	.4byte gUnknown_08176E14
_080E29A4:
	.4byte 0x00001042
_080E29A8:
	add r0, r5, #0
	bl sub_080C3028
	add r0, r0, #2
_080E29B0:
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080E2A08  @ =gRam
	ldr r0, _080E2A0C  @ =0x00000F22
	add r1, r2, r0
	add r1, r5, r1
	ldr r0, _080E2A10  @ =gUnknown_08176900
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E2A14  @ =0x00000F12
	add r2, r2, r1
	add r2, r5, r2
	ldr r0, _080E2A18  @ =gUnknown_08176904
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r2]
_080E29D2:
	ldr r2, _080E2A08  @ =gRam
	ldr r1, _080E2A1C  @ =0x00001052
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r0, _080E2A20  @ =0x00000F92
	add r3, r2, r0
	add r3, r5, r3
	ldr r4, _080E2A24  @ =gUnknown_08176E78
	lsl r1, r1, #24
	lsr r1, r1, #25
	mov r0, #7
	and r1, r1, r0
	ldr r0, _080E2A28  @ =0x00000FB2
	add r2, r2, r0
	add r2, r5, r2
	ldrb r0, [r2]
	lsl r0, r0, #3
	orr r1, r1, r0
	add r1, r1, r4
	ldrb r0, [r1]
	strb r0, [r3]
_080E2A02:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E2A08:
	.4byte gRam
_080E2A0C:
	.4byte 0x00000F22
_080E2A10:
	.4byte gUnknown_08176900
_080E2A14:
	.4byte 0x00000F12
_080E2A18:
	.4byte gUnknown_08176904
_080E2A1C:
	.4byte 0x00001052
_080E2A20:
	.4byte 0x00000F92
_080E2A24:
	.4byte gUnknown_08176E78
_080E2A28:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080E28F8

