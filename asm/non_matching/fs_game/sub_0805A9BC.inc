	THUMB_FUNC_START sub_0805A9BC
sub_0805A9BC: @ 0x0805A9BC
	push {r4,r5,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r1, _0805AA0C  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #110
	ldrb r0, [r1]
	cmp r0, #1
	bhi _0805AA66
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #108]
	sub r1, r2, #1
	str r1, [r0, #108]
	ldr r0, [r7]
	ldr r1, [r0, #108]
	cmp r1, #0
	bne _0805AA66
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, [r7]
	ldr r2, [r1, #104]
	add r1, r2, #0
	ldr r2, _0805AA10  @ =0x00000A8C
	sub r1, r2, r1
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #12
	ldrh r1, [r0]
	ldr r0, _0805AA14  @ =0x00000707
	cmp r1, r0
	bhi _0805AA18
	add r0, r7, #0
	add r0, r0, #10
	mov r1, #1
	strh r1, [r0]
	b _0805AA3C
_0805AA0C:
	.4byte gUnknown_03006C80
_0805AA10:
	.4byte 0x00000A8C
_0805AA14:
	.4byte 0x00000707
_0805AA18:
	add r0, r7, #0
	add r0, r0, #12
	ldrh r1, [r0]
	ldr r0, _0805AA30  @ =0x0000095F
	cmp r1, r0
	bhi _0805AA34
	add r0, r7, #0
	add r0, r0, #10
	mov r1, #5
	strh r1, [r0]
	b _0805AA3C
	.byte 0x00
	.byte 0x00
_0805AA30:
	.4byte 0x0000095F
_0805AA34:
	add r0, r7, #0
	add r0, r0, #10
	mov r1, #20
	strh r1, [r0]
_0805AA3C:
	ldr r0, [r7]
	ldrb r4, [r0, #11]
	add r0, r7, #0
	add r0, r0, #10
	ldrh r5, [r0]
	bl sub_0800099C
	add r1, r0, #0
	mov r2, #31
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r2, r0, #24
	add r0, r4, #0
	add r1, r5, #0
	bl sub_0803D520
	ldr r0, [r7]
	mov r1, #90
	str r1, [r0, #108]
_0805AA66:
	ldr r0, [r7]
	bl sub_0805AD74
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0805AA8C
	ldr r0, _0805AAB0  @ =gLCDRegisterBuffer
	ldr r1, [r7]
	ldrb r0, [r0]
	ldrb r1, [r1, #11]
	cmp r0, r1
	beq _0805AA8C
	ldr r0, [r7, #4]
	mov r1, #0
	str r1, [r0, #48]
	ldr r0, [r7, #4]
	mov r1, #0
	str r1, [r0, #52]
_0805AA8C:
	ldr r0, _0805AAB0  @ =gLCDRegisterBuffer
	ldr r1, [r7]
	ldrb r0, [r0]
	ldrb r1, [r1, #11]
	cmp r0, r1
	bne _0805AAB4
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	b _0805AAC0
	.byte 0x00
	.byte 0x00
_0805AAB0:
	.4byte gLCDRegisterBuffer
_0805AAB4:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
_0805AAC0:
	ldr r0, [r7]
	ldr r1, _0805AB60  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #11]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	add r2, r1, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	bl sub_0803CC20
	add r4, r7, #0
	add r4, r4, #8
	ldr r0, _0805AB60  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #11]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl 0x08003F4C
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r1, [r2]
	sub r0, r0, r1
	add r1, r0, #0
	mov r2, #31
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	strb r1, [r4]
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	cmp r1, #15
	bls _0805AB64
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _0805AB8A
	.byte 0x00
	.byte 0x00
_0805AB60:
	.4byte gUnknown_03006A30
_0805AB64:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r3, [r2]
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0805AB8A:
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r1, [r2]
	mov r2, #31
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, _0805AC00  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #11]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #35
	ldrb r0, [r1]
	cmp r0, #170
	beq _0805AC8A
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805AC8A
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #127
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805AC04
	cmp r0, #4
	beq _0805AC04
	b _0805AC88
	.byte 0x00
	.byte 0x00
_0805AC00:
	.4byte gUnknown_03006A30
_0805AC04:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #76]
	ldrb r2, [r0, #11]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #10]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #11]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #100
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #120
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	mov r0, #95
	bl play_sound
	ldr r1, _0805AC84  @ =0x00000103
	add r0, r1, #0
	bl sub_0800D6A4
	b _0805AC8A
	.byte 0x00
	.byte 0x00
_0805AC84:
	.4byte 0x00000103
_0805AC88:
	b _0805AC8A
_0805AC8A:
	add sp, sp, #16
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805A9BC

	.byte 0x00
	.byte 0x00
