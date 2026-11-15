	THUMB_FUNC_START play_sound
play_sound: @ 0x0800D24C
	push {r4-r6,lr}
	add r5, r0, #0
	ldr r0, _0800D28C  @ =gUnknown_03000830
	ldrb r2, [r0]
	cmp r2, #0
	beq _0800D25A
	b _0800D4D8
_0800D25A:
	cmp r5, #0
	blt _0800D260
	b _0800D480
_0800D260:
	ldr r1, _0800D290  @ =0xFFFF0000
	and r1, r1, r5
	ldr r0, _0800D294  @ =0x80070000
	cmp r1, r0
	bne _0800D26C
	b _0800D3D8
_0800D26C:
	cmp r1, r0
	bhi _0800D2CC
	ldr r0, _0800D298  @ =0x80030000
	cmp r1, r0
	bne _0800D278
	b _0800D4D8
_0800D278:
	cmp r1, r0
	bhi _0800D2A4
	ldr r0, _0800D29C  @ =0x80010000
	cmp r1, r0
	beq _0800D328
	ldr r0, _0800D2A0  @ =0x80020000
	cmp r1, r0
	bne _0800D28A
	b _0800D3E2
_0800D28A:
	b _0800D4D8
_0800D28C:
	.4byte gUnknown_03000830
_0800D290:
	.4byte 0xFFFF0000
_0800D294:
	.4byte 0x80070000
_0800D298:
	.4byte 0x80030000
_0800D29C:
	.4byte 0x80010000
_0800D2A0:
	.4byte 0x80020000
_0800D2A4:
	ldr r0, _0800D2B8  @ =0x80050000
	cmp r1, r0
	beq _0800D370
	cmp r1, r0
	bhi _0800D2C0
	ldr r0, _0800D2BC  @ =0x80040000
	cmp r1, r0
	beq _0800D338
	b _0800D4D8
	.byte 0x00
	.byte 0x00
_0800D2B8:
	.4byte 0x80050000
_0800D2BC:
	.4byte 0x80040000
_0800D2C0:
	ldr r0, _0800D2C8  @ =0x80060000
	cmp r1, r0
	beq _0800D3A8
	b _0800D4D8
_0800D2C8:
	.4byte 0x80060000
_0800D2CC:
	ldr r0, _0800D2EC  @ =0x800A0000
	cmp r1, r0
	bne _0800D2D4
	b _0800D3F4
_0800D2D4:
	cmp r1, r0
	bhi _0800D2F8
	ldr r0, _0800D2F0  @ =0x80080000
	cmp r1, r0
	bne _0800D2E0
	b _0800D3E2
_0800D2E0:
	ldr r0, _0800D2F4  @ =0x80090000
	cmp r1, r0
	bne _0800D2E8
	b _0800D3F0
_0800D2E8:
	b _0800D4D8
	.byte 0x00
	.byte 0x00
_0800D2EC:
	.4byte 0x800A0000
_0800D2F0:
	.4byte 0x80080000
_0800D2F4:
	.4byte 0x80090000
_0800D2F8:
	ldr r0, _0800D310  @ =0x800C0000
	cmp r1, r0
	bne _0800D300
	b _0800D418
_0800D300:
	cmp r1, r0
	bhi _0800D318
	ldr r0, _0800D314  @ =0x800B0000
	cmp r1, r0
	bne _0800D30C
	b _0800D408
_0800D30C:
	b _0800D4D8
	.byte 0x00
	.byte 0x00
_0800D310:
	.4byte 0x800C0000
_0800D314:
	.4byte 0x800B0000
_0800D318:
	ldr r0, _0800D324  @ =0x800D0000
	cmp r1, r0
	bne _0800D320
	b _0800D490
_0800D320:
	b _0800D4D8
	.byte 0x00
	.byte 0x00
_0800D324:
	.4byte 0x800D0000
_0800D328:
	ldr r0, _0800D334  @ =gUnknown_0201EDA8
	strh r2, [r0, #2]
	bl sub_0813483C
	b _0800D4D8
	.byte 0x00
	.byte 0x00
_0800D334:
	.4byte gUnknown_0201EDA8
_0800D338:
	lsl r0, r5, #16
	lsr r3, r0, #16
	cmp r3, #0
	bne _0800D342
	mov r3, #4
_0800D342:
	ldr r2, _0800D364  @ =gUnknown_083C3A3C
	ldr r1, _0800D368  @ =gSongTable
	ldr r0, _0800D36C  @ =gUnknown_0201EDA8
	ldrh r0, [r0, #2]
	lsl r0, r0, #3
	add r0, r0, r1
	ldrh r1, [r0, #4]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	add r1, r3, #0
	bl sub_081348B0
	b _0800D4D8
	.byte 0x00
	.byte 0x00
_0800D364:
	.4byte gUnknown_083C3A3C
_0800D368:
	.4byte gSongTable
_0800D36C:
	.4byte gUnknown_0201EDA8
_0800D370:
	lsl r0, r5, #16
	lsr r3, r0, #16
	cmp r3, #0
	bne _0800D37A
	mov r3, #4
_0800D37A:
	ldr r2, _0800D39C  @ =gUnknown_083C3A3C
	ldr r1, _0800D3A0  @ =gSongTable
	ldr r0, _0800D3A4  @ =gUnknown_0201EDA8
	ldrh r0, [r0, #2]
	lsl r0, r0, #3
	add r0, r0, r1
	ldrh r1, [r0, #4]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	add r1, r3, #0
	bl sub_081348D0
	b _0800D4D8
	.byte 0x00
	.byte 0x00
_0800D39C:
	.4byte gUnknown_083C3A3C
_0800D3A0:
	.4byte gSongTable
_0800D3A4:
	.4byte gUnknown_0201EDA8
_0800D3A8:
	ldr r2, _0800D3CC  @ =gUnknown_083C3A3C
	ldr r1, _0800D3D0  @ =gSongTable
	ldr r0, _0800D3D4  @ =gUnknown_0201EDA8
	ldrh r0, [r0, #2]
	lsl r0, r0, #3
	add r0, r0, r1
	ldrh r1, [r0, #4]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	lsl r1, r5, #16
	lsr r1, r1, #16
	bl sub_08135688
	b _0800D4D8
	.byte 0x00
	.byte 0x00
_0800D3CC:
	.4byte gUnknown_083C3A3C
_0800D3D0:
	.4byte gSongTable
_0800D3D4:
	.4byte gUnknown_0201EDA8
_0800D3D8:
	bl sub_0813483C
	bl sub_08134D0C
	b _0800D4D8
_0800D3E2:
	ldr r0, _0800D3EC  @ =gUnknown_0201EDA8
	ldrh r0, [r0, #2]
	bl sub_081347D4
	b _0800D4D8
_0800D3EC:
	.4byte gUnknown_0201EDA8
_0800D3F0:
	bl sub_08134D88
_0800D3F4:
	ldr r1, _0800D404  @ =gUnknown_0201EDA8
	ldrh r0, [r1, #2]
	cmp r0, #0
	beq _0800D4D8
	bl sub_08134780
	b _0800D4D8
	.byte 0x00
	.byte 0x00
_0800D404:
	.4byte gUnknown_0201EDA8
_0800D408:
	ldr r4, _0800D414  @ =gUnknown_0201EDA8
	strh r5, [r4, #2]
	ldrh r0, [r4, #2]
	bl sub_08134708
	b _0800D422
_0800D414:
	.4byte gUnknown_0201EDA8
_0800D418:
	ldr r4, _0800D470  @ =gUnknown_0201EDA8
	strh r5, [r4, #2]
	ldrh r0, [r4, #2]
	bl sub_08134780
_0800D422:
	ldr r6, _0800D474  @ =gUnknown_083C3A3C
	ldr r5, _0800D478  @ =gSongTable
	ldrh r0, [r4, #2]
	lsl r0, r0, #3
	add r0, r0, r5
	ldrh r1, [r0, #4]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r6
	ldr r0, [r0]
	bl sub_081348F8
	ldrh r0, [r4, #2]
	lsl r0, r0, #3
	add r0, r0, r5
	ldrh r1, [r0, #4]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r6
	ldr r0, [r0]
	ldr r1, _0800D47C  @ =0x0000FFFF
	mov r2, #0
	bl sub_081356B0
	ldrh r0, [r4, #2]
	lsl r0, r0, #3
	add r0, r0, r5
	ldrh r1, [r0, #4]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r6
	ldr r0, [r0]
	mov r1, #4
	bl sub_081348D0
	b _0800D4D8
_0800D470:
	.4byte gUnknown_0201EDA8
_0800D474:
	.4byte gUnknown_083C3A3C
_0800D478:
	.4byte gSongTable
_0800D47C:
	.4byte 0x0000FFFF
_0800D480:
	cmp r5, #0
	beq _0800D4D8
	ldr r1, _0800D49C  @ =0xFFFFFE70
	add r0, r5, r1
	cmp r0, #99
	bhi _0800D4A4
	ldr r0, _0800D4A0  @ =gUnknown_0201EDA8
	strh r5, [r0, #2]
_0800D490:
	lsl r0, r5, #16
	lsr r0, r0, #16
	bl sub_08134708
	b _0800D4D8
	.byte 0x00
	.byte 0x00
_0800D49C:
	.4byte 0xFFFFFE70
_0800D4A0:
	.4byte gUnknown_0201EDA8
_0800D4A4:
	lsl r0, r5, #16
	lsr r0, r0, #16
	bl sub_08134708
	ldr r6, _0800D4E0  @ =gUnknown_0201EDA8
	ldrb r0, [r6, #4]
	cmp r0, #0
	beq _0800D4D8
	ldr r2, _0800D4E4  @ =gUnknown_083C3A3C
	ldr r1, _0800D4E8  @ =gSongTable
	lsl r0, r5, #3
	add r0, r0, r1
	ldrh r1, [r0, #4]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r4, [r0]
	add r0, r4, #0
	bl sub_081348F8
	ldr r1, _0800D4EC  @ =0x0000FFFF
	ldrh r2, [r6]
	add r0, r4, #0
	bl sub_081356B0
_0800D4D8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800D4E0:
	.4byte gUnknown_0201EDA8
_0800D4E4:
	.4byte gUnknown_083C3A3C
_0800D4E8:
	.4byte gSongTable
_0800D4EC:
	.4byte 0x0000FFFF
	THUMB_FUNC_END play_sound

    .ALIGN 2, 0
