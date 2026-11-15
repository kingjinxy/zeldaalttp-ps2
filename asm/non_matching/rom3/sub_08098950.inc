	THUMB_FUNC_START sub_08098950
sub_08098950: @ 0x08098950
	push {r4,r5,lr}
	bl sub_0809E600
	ldr r4, _08098990  @ =gRam
	ldr r1, _08098994  @ =0x00001811
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08098998  @ =0x0000174F
	add r0, r4, r2
	strb r1, [r0]
	ldr r5, _0809899C  @ =0x000017D4
	add r0, r4, r5
	ldrb r1, [r0]
	cmp r1, #0
	bne _08098988
	sub r2, r2, #77
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080989A4
	ldr r0, _080989A0  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	beq _08098988
	sub r5, r5, #104
	add r0, r4, r5
	strb r1, [r0]
_08098988:
	bl sub_080988C0
	b _08098B04
	.byte 0x00
	.byte 0x00
_08098990:
	.4byte gRam
_08098994:
	.4byte 0x00001811
_08098998:
	.4byte 0x0000174F
_0809899C:
	.4byte 0x000017D4
_080989A0:
	.4byte gMoonPearl
_080989A4:
	ldr r1, _080989B8  @ =0x000016F8
	add r0, r4, r1
	ldrb r2, [r0]
	cmp r2, #0
	beq _080989BC
	mov r0, #0
	bl sub_08099D98
	b _08098B04
	.byte 0x00
	.byte 0x00
_080989B8:
	.4byte 0x000016F8
_080989BC:
	ldr r5, _080989FC  @ =0x000016C8
	add r1, r4, r5
	mov r0, #255
	strb r0, [r1]
	ldr r0, _08098A00  @ =0x000016C9
	add r1, r4, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	add r5, r5, #7
	add r1, r4, r5
	strb r0, [r1]
	ldr r1, _08098A04  @ =0x0000174B
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _08098A08  @ =0x000017DA
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08098A0C
	add r5, r5, #243
	add r0, r4, r5
	mov r1, #192
	lsl r1, r1, #1
	strh r1, [r0]
	sub r2, r2, #22
	add r0, r4, r2
	strh r1, [r0]
	bl sub_080981D0
	b _08098B04
	.byte 0x00
	.byte 0x00
_080989FC:
	.4byte 0x000016C8
_08098A00:
	.4byte 0x000016C9
_08098A04:
	.4byte 0x0000174B
_08098A08:
	.4byte 0x000017DA
_08098A0C:
	bl sub_08092B0C
	bl sub_080A3BEC
	ldr r5, _08098A70  @ =0x000016FC
	add r0, r4, r5
	ldrb r0, [r0]
	mov r1, #15
	add r2, r1, #0
	and r2, r2, r0
	cmp r2, #0
	bne _08098A88
	ldr r2, _08098A74  @ =0x00000545
	add r0, r4, r2
	ldrb r0, [r0]
	add r2, r1, #0
	and r2, r2, r0
	cmp r2, #0
	bne _08098A88
	sub r5, r5, #38
	add r0, r4, r5
	strb r2, [r0]
	ldr r1, _08098A78  @ =0x000016D7
	add r0, r4, r1
	strb r2, [r0]
	add r5, r5, #81
	add r0, r4, r5
	strb r2, [r0]
	sub r1, r1, #11
	add r0, r4, r1
	strb r2, [r0]
	sub r5, r5, #83
	add r0, r4, r5
	strb r2, [r0]
	ldr r0, _08098A7C  @ =0x000016FA
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #246
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _08098A80  @ =0x00001803
	add r1, r4, r2
	mov r0, #32
	strb r0, [r1]
	ldr r5, _08098A84  @ =0x00001807
	add r1, r4, r5
	mov r0, #19
	strb r0, [r1]
	b _08098AC6
	.byte 0x00
	.byte 0x00
_08098A70:
	.4byte 0x000016FC
_08098A74:
	.4byte 0x00000545
_08098A78:
	.4byte 0x000016D7
_08098A7C:
	.4byte 0x000016FA
_08098A80:
	.4byte 0x00001803
_08098A84:
	.4byte 0x00001807
_08098A88:
	ldr r3, _08098B0C  @ =gRam
	ldr r1, _08098B10  @ =0x00001727
	add r0, r3, r1
	mov r1, #0
	strb r2, [r0]
	ldr r5, _08098B14  @ =0x000016CC
	add r4, r3, r5
	ldrb r0, [r4]
	cmp r2, r0
	beq _08098AC4
	add r5, r5, #4
	add r0, r3, r5
	strb r1, [r0]
	add r5, r5, #1
	add r0, r3, r5
	strb r1, [r0]
	add r5, r5, #90
	add r0, r3, r5
	strb r1, [r0]
	sub r5, r5, #49
	add r0, r3, r5
	strb r1, [r0]
	ldr r0, _08098B18  @ =0x00001803
	add r1, r3, r0
	mov r0, #32
	strb r0, [r1]
	ldr r5, _08098B1C  @ =0x00001807
	add r1, r3, r5
	mov r0, #19
	strb r0, [r1]
_08098AC4:
	strb r2, [r4]
_08098AC6:
	bl sub_080943CC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _08098ADA
	bl sub_0809380C
	bl sub_08094460
_08098ADA:
	ldr r4, _08098B0C  @ =gRam
	ldr r0, _08098B10  @ =0x00001727
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	mov r5, #0
	strb r0, [r2]
	bl sub_0809380C
	bl sub_080975B4
	bl sub_0809407C
	bl sub_08096F30
	ldr r1, _08098B20  @ =0x0000178B
	add r4, r4, r1
	strb r5, [r4]
	bl sub_0809E394
_08098B04:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08098B0C:
	.4byte gRam
_08098B10:
	.4byte 0x00001727
_08098B14:
	.4byte 0x000016CC
_08098B18:
	.4byte 0x00001803
_08098B1C:
	.4byte 0x00001807
_08098B20:
	.4byte 0x0000178B
	THUMB_FUNC_END sub_08098950

