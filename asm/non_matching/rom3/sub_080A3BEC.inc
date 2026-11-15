	THUMB_FUNC_START sub_080A3BEC
sub_080A3BEC: @ 0x080A3BEC
	push {r4,lr}
	mov r0, #1
	bl sub_080A18F0
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _080A3BFE
	b _080A3D0A
_080A3BFE:
	ldr r1, _080A3C54  @ =gRam
	ldr r2, _080A3C58  @ =0x000016EA
	add r0, r1, r2
	ldrb r0, [r0]
	add r2, r1, #0
	cmp r0, #0
	beq _080A3C10
	cmp r0, #8
	bls _080A3D0A
_080A3C10:
	ldr r3, _080A3C5C  @ =0x0000176C
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A3C34
	ldr r1, _080A3C60  @ =0x0000178C
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #11
	beq _080A3C34
	cmp r0, #21
	beq _080A3C34
	cmp r0, #22
	beq _080A3C34
	cmp r0, #23
	beq _080A3C34
	cmp r0, #20
	bne _080A3D0A
_080A3C34:
	ldr r3, _080A3C64  @ =0x00001894
	add r0, r2, r3
	ldrb r1, [r0]
	cmp r1, #0
	beq _080A3C6E
	ldr r3, _080A3C5C  @ =0x0000176C
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A3C6E
	cmp r1, #2
	bne _080A3C68
	bl sub_080A1D1C
	b _080A3D0A
	.byte 0x00
	.byte 0x00
_080A3C54:
	.4byte gRam
_080A3C58:
	.4byte 0x000016EA
_080A3C5C:
	.4byte 0x0000176C
_080A3C60:
	.4byte 0x0000178C
_080A3C64:
	.4byte 0x00001894
_080A3C68:
	bl sub_080A2788
	b _080A3D0A
_080A3C6E:
	ldr r1, _080A3D10  @ =0x0000178D
	add r0, r2, r1
	ldrb r4, [r0]
	ldr r3, _080A3D14  @ =0x0000178C
	add r0, r2, r3
	add r1, r4, #0
	ldrb r0, [r0]
	cmp r1, r0
	beq _080A3CB6
	cmp r1, #24
	bne _080A3C9C
	ldr r0, _080A3D18  @ =gFlute
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080A3C9C
	ldr r0, _080A3D1C  @ =0x000016E8
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
_080A3C9C:
	ldr r1, _080A3D20  @ =gRam
	ldr r2, _080A3D10  @ =0x0000178D
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #19
	bne _080A3CB6
	ldr r3, _080A3D24  @ =0x00001710
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A3CB6
	bl sub_0809E350
_080A3CB6:
	ldr r3, _080A3D20  @ =gRam
	ldr r1, _080A3D28  @ =0x0000178A
	add r0, r3, r1
	ldr r2, _080A3D2C  @ =0x0000180C
	add r1, r3, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080A3CD6
	ldr r1, _080A3D14  @ =0x0000178C
	add r0, r3, r1
	ldrb r4, [r0]
	ldr r2, _080A3D10  @ =0x0000178D
	add r0, r3, r2
	strb r4, [r0]
_080A3CD6:
	ldr r1, _080A3D10  @ =0x0000178D
	add r0, r3, r1
	ldrb r0, [r0]
	add r2, r0, #0
	cmp r2, #0
	beq _080A3D0A
	cmp r2, #5
	beq _080A3CEA
	cmp r2, #6
	bne _080A3CF4
_080A3CEA:
	add r1, r0, #0
	add r1, r1, #252
	ldr r2, _080A3D30  @ =0x00001790
	add r0, r3, r2
	strb r1, [r0]
_080A3CF4:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	blt _080A3D0A
	ldr r0, _080A3D34  @ =gUnknown_08169120
	lsl r1, r4, #2
	add r1, r1, r0
	ldr r0, [r1]
	bl _call_via_r0
_080A3D0A:
	pop {r4}
	pop {r0}
	bx r0
_080A3D10:
	.4byte 0x0000178D
_080A3D14:
	.4byte 0x0000178C
_080A3D18:
	.4byte gFlute
_080A3D1C:
	.4byte 0x000016E8
_080A3D20:
	.4byte gRam
_080A3D24:
	.4byte 0x00001710
_080A3D28:
	.4byte 0x0000178A
_080A3D2C:
	.4byte 0x0000180C
_080A3D30:
	.4byte 0x00001790
_080A3D34:
	.4byte gUnknown_08169120
	THUMB_FUNC_END sub_080A3BEC

