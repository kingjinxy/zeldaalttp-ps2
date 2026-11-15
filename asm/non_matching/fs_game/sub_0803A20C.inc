	THUMB_FUNC_START sub_0803A20C
sub_0803A20C: @ 0x0803A20C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	mov r0, #1
	neg r0, r0
	str r0, [r7]
	ldr r1, _0803A228  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #110
	ldrb r0, [r1]
	cmp r0, #1
	bls _0803A22C
	b _0803A2DA
	.byte 0x00
	.byte 0x00
_0803A228:
	.4byte gUnknown_03006C80
_0803A22C:
	ldr r0, _0803A238  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	cmp r1, #0
	beq _0803A23C
	b _0803A2DA
	.byte 0x00
	.byte 0x00
_0803A238:
	.4byte gUnknown_03006C80
_0803A23C:
	ldr r0, _0803A248  @ =gUnknown_03006C80
	ldrh r1, [r0, #38]
	ldr r0, _0803A24C  @ =0x000001A1
	cmp r1, r0
	bne _0803A250
	b _0803A2DA
_0803A248:
	.4byte gUnknown_03006C80
_0803A24C:
	.4byte 0x000001A1
_0803A250:
	ldr r0, _0803A2A4  @ =gUnknown_08427C14
	ldr r1, _0803A2A8  @ =gUnknown_03006C80
	ldrb r2, [r1, #7]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	str r1, [r7]
	ldr r1, _0803A2A8  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #36
	ldrb r0, [r1]
	cmp r0, #0
	beq _0803A270
	ldr r0, _0803A2AC  @ =0x000001A9
	str r0, [r7]
_0803A270:
	ldr r1, _0803A2A8  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #81
	ldrb r0, [r1]
	cmp r0, #0
	beq _0803A282
	mov r0, #213
	lsl r0, r0, #1
	str r0, [r7]
_0803A282:
	ldr r1, _0803A2A8  @ =gUnknown_03006C80
	ldrh r0, [r1, #38]
	ldr r1, [r7]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	beq _0803A2DA
	ldr r0, _0803A2A8  @ =gUnknown_03006C80
	ldrh r1, [r0, #38]
	ldr r0, _0803A2B0  @ =0x0000FFFF
	cmp r1, r0
	beq _0803A2B8
	ldr r1, _0803A2B4  @ =0x80080000
	add r0, r1, #0
	bl play_sound
	b _0803A2C0
_0803A2A4:
	.4byte gUnknown_08427C14
_0803A2A8:
	.4byte gUnknown_03006C80
_0803A2AC:
	.4byte 0x000001A9
_0803A2B0:
	.4byte 0x0000FFFF
_0803A2B4:
	.4byte 0x80080000
_0803A2B8:
	ldr r0, [r7]
	lsl r1, r0, #16
	lsr r0, r1, #16
	str r0, [r7]
_0803A2C0:
	ldr r0, _0803A2E4  @ =gUnknown_03006C80
	ldr r2, [r7]
	add r1, r2, #0
	ldrh r2, [r0, #38]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #38]
	ldr r0, [r7]
	bl play_sound
_0803A2DA:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803A2E4:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0803A20C

