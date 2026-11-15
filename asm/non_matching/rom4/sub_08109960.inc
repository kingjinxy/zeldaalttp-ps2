	THUMB_FUNC_START sub_08109960
sub_08109960: @ 0x08109960
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r4, r5, #0
	ldr r6, _081099F4  @ =gRam
	ldr r0, _081099F8  @ =0x00001172
	add r0, r0, r6
	mov r10, r0
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _081099FC  @ =gUnknown_0200F318
	ldrb r1, [r0]
	ldr r2, _08109A00  @ =0x00000968
	add r0, r6, r2
	strb r1, [r0]
	ldr r3, _08109A04  @ =0x00000F02
	add r0, r6, r3
	add r0, r5, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r6, r2
	strb r1, [r0]
	ldr r0, _08109A08  @ =gUnknown_0200F324
	ldrb r1, [r0]
	ldr r3, _08109A0C  @ =0x0000096C
	add r0, r6, r3
	strb r1, [r0]
	ldr r1, _08109A10  @ =0x00000EF2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r2, r2, #4
	add r0, r6, r2
	strb r1, [r0]
	bl sub_0810A3D0
	lsl r0, r0, #24
	cmp r0, #0
	beq _08109A9C
	add r0, r5, #0
	mov r1, #32
	bl sub_080C2DCC
	add r0, r5, #0
	bl sub_080EEB64
	add r0, r5, #0
	bl Sprite3_Move
	ldr r3, _08109A14  @ =0x00000FC2
	add r3, r3, r6
	mov r9, r3
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _081099EA
	ldr r0, _08109A18  @ =0x00000996
	add r2, r6, r0
	ldrb r1, [r2]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08109A20
_081099EA:
	ldr r1, _08109A1C  @ =0x00000F92
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #255
	b _08109B1C
_081099F4:
	.4byte gRam
_081099F8:
	.4byte 0x00001172
_081099FC:
	.4byte gUnknown_0200F318
_08109A00:
	.4byte 0x00000968
_08109A04:
	.4byte 0x00000F02
_08109A08:
	.4byte gUnknown_0200F324
_08109A0C:
	.4byte 0x0000096C
_08109A10:
	.4byte 0x00000EF2
_08109A14:
	.4byte 0x00000FC2
_08109A18:
	.4byte 0x00000996
_08109A1C:
	.4byte 0x00000F92
_08109A20:
	ldr r3, _08109A88  @ =0x00000F92
	add r3, r3, r6
	mov r8, r3
	add r7, r5, r3
	ldr r1, _08109A8C  @ =gUnknown_0817C322
	ldr r3, _08109A90  @ =0x00000FB2
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r7]
	ldrb r1, [r2]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08109B1E
	mov r0, #214
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _08109B1E
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	mov r1, r10
	add r0, r4, r1
	mov r1, #24
	strb r1, [r0]
	mov r2, r9
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _08109A94  @ =0x00000F52
	add r0, r6, r3
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	mov r0, r8
	add r1, r4, r0
	ldrb r0, [r7]
	strb r0, [r1]
	ldr r1, _08109A98  @ =0x00001082
	add r0, r6, r1
	add r1, r4, r0
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	b _08109B1E
	.byte 0x00
	.byte 0x00
_08109A88:
	.4byte 0x00000F92
_08109A8C:
	.4byte gUnknown_0817C322
_08109A90:
	.4byte 0x00000FB2
_08109A94:
	.4byte 0x00000F52
_08109A98:
	.4byte 0x00001082
_08109A9C:
	ldr r2, _08109AC8  @ =0x00000FB2
	add r1, r6, r2
	add r1, r5, r1
	ldr r3, _08109ACC  @ =0x00001002
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsr r0, r0, #2
	strb r0, [r1]
	ldr r1, _08109AD0  @ =0x00000F52
	add r0, r6, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #5
	bne _08109AD4
	mov r0, #2
	strb r0, [r1]
	add r2, r2, #16
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #32
	b _08109B1C
_08109AC8:
	.4byte 0x00000FB2
_08109ACC:
	.4byte 0x00001002
_08109AD0:
	.4byte 0x00000F52
_08109AD4:
	ldr r3, _08109AF0  @ =0x00001022
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #160
	bls _08109AF8
	mov r0, #11
	strb r0, [r1]
	ldr r1, _08109AF4  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #40
	b _08109B1C
	.byte 0x00
	.byte 0x00
_08109AF0:
	.4byte 0x00001022
_08109AF4:
	.4byte 0x00000FC2
_08109AF8:
	cmp r0, #96
	bls _08109B10
	mov r0, #14
	strb r0, [r1]
	ldr r2, _08109B0C  @ =0x00000FC2
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #40
	b _08109B1C
	.byte 0x00
	.byte 0x00
_08109B0C:
	.4byte 0x00000FC2
_08109B10:
	mov r0, #17
	strb r0, [r1]
	ldr r3, _08109B2C  @ =0x00000FC2
	add r0, r6, r3
	add r0, r4, r0
	mov r1, #104
_08109B1C:
	strb r1, [r0]
_08109B1E:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08109B2C:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_08109960

