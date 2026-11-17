	THUMB_FUNC_START sub_08031C00
sub_08031C00: @ 0x08031C00
	push {r4,r5,lr}
	ldr r0, _08031C18  @ =gSubState
	ldrb r1, [r0]
	add r3, r0, #0
	cmp r1, #7
	bls _08031C0E
	b _08031EF8
_08031C0E:
	lsl r0, r1, #2
	ldr r1, _08031C1C  @ =0x08031C20
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_08031C18:
	.4byte gSubState
_08031C1C:
	.4byte _08031C1C+0x4
	.4byte _08031C40
	.4byte _08031C70
	.4byte _08031CD4
	.4byte _08031CEC
	.4byte _08031CD4
	.4byte _08031DC4
	.4byte _08031E38
	.4byte _08031E68
_08031C40:
	ldr r0, _08031C64  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	ldrb r0, [r0, #20]
	cmp r0, #2
	beq _08031C4C
	b _08031EF8
_08031C4C:
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldr r1, _08031C68  @ =gUnknown_02016D60
	mov r0, #90
	strh r0, [r1, #4]
	ldr r2, _08031C6C  @ =gUnknown_0201F000
	ldr r0, [r2]
	mov r1, #16
	orr r0, r0, r1
	str r0, [r2]
	b _08031EF8
_08031C64:
	.4byte gUnknown_03006A30
_08031C68:
	.4byte gUnknown_02016D60
_08031C6C:
	.4byte gUnknown_0201F000
_08031C70:
	ldr r0, _08031CC0  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #32
	and r0, r0, r1
	cmp r0, #0
	bne _08031C7E
	b _08031EF8
_08031C7E:
	ldr r1, _08031CC4  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _08031C8E
	b _08031EF8
_08031C8E:
	ldr r1, _08031CC8  @ =gUnknown_08427A08
	ldr r4, _08031CCC  @ =gUnknown_03006C80
	ldrb r0, [r4, #1]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	bl sub_0800D67C
	ldr r3, _08031CD0  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
	ldr r0, [r4, #8]
	str r0, [r3, #8]
	b _08031E1A
_08031CC0:
	.4byte gUnknown_0201F000
_08031CC4:
	.4byte gUnknown_02016D60
_08031CC8:
	.4byte gUnknown_08427A08
_08031CCC:
	.4byte gUnknown_03006C80
_08031CD0:
	.4byte gUnknown_02000010
_08031CD4:
	ldr r0, _08031CE8  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	beq _08031CE2
	b _08031EF8
_08031CE2:
	bl sub_0800D644
	b _08031E1A
_08031CE8:
	.4byte gUnknown_02000010
_08031CEC:
	bl sub_08031B4C
	lsl r0, r0, #24
	cmp r0, #0
	beq _08031CF8
	b _08031EF8
_08031CF8:
	bl sub_08031B90
	lsl r0, r0, #24
	cmp r0, #0
	bne _08031D10
	ldr r0, _08031D0C  @ =0x00000805
	bl sub_08031BCC
	b _08031EF8
	.byte 0x00
	.byte 0x00
_08031D0C:
	.4byte 0x00000805
_08031D10:
	ldr r4, _08031D24  @ =gUnknown_03006C80
	ldrb r0, [r4, #6]
	cmp r0, #2
	beq _08031D5C
	cmp r0, #2
	ble _08031D28
	cmp r0, #3
	beq _08031D6A
	b _08031D80
	.byte 0x00
	.byte 0x00
_08031D24:
	.4byte gUnknown_03006C80
_08031D28:
	cmp r0, #0
	blt _08031D80
	bl sub_080397F0
	cmp r0, #0
	ble _08031D80
	mov r1, #0
	ldrb r0, [r4]
	cmp r1, r0
	bcs _08031D80
	add r4, r4, #40
	mov r3, #8
	add r2, r0, #0
_08031D42:
	lsl r0, r1, #3
	add r0, r0, r4
	ldr r0, [r0]
	and r0, r0, r3
	cmp r0, #0
	bne _08031D50
	b _08031EB8
_08031D50:
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, r2
	bcc _08031D42
	b _08031D80
_08031D5C:
	bl sub_08031B90
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _08031D80
	b _08031D76
_08031D6A:
	bl sub_08031B90
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bhi _08031D80
_08031D76:
	mov r0, #129
	lsl r0, r0, #4
	bl sub_08031BCC
	b _08031EF8
_08031D80:
	ldr r0, _08031DB8  @ =gUnknown_03006C80
	ldrb r0, [r0, #6]
	bl sub_080398F8
	bl sub_080399CC
	ldr r1, _08031DBC  @ =0x00000805
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	bl sub_0800D67C
	ldr r3, _08031DC0  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
	b _08031E1A
	.byte 0x00
	.byte 0x00
_08031DB8:
	.4byte gUnknown_03006C80
_08031DBC:
	.4byte 0x00000805
_08031DC0:
	.4byte gUnknown_02000010
_08031DC4:
	bl sub_08031B4C
	lsl r0, r0, #24
	cmp r0, #0
	beq _08031DD0
	b _08031EF8
_08031DD0:
	ldr r2, _08031E24  @ =gUnknown_0201F000
	ldr r0, [r2]
	mov r1, #64
	orr r0, r0, r1
	str r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08031DE4
	b _08031EF8
_08031DE4:
	ldr r0, _08031E28  @ =0x00000216
	bl play_sound
	mov r0, #15
	bl play_sound
	mov r1, #0
	ldr r2, _08031E2C  @ =gUnknown_03006C80
	ldrb r0, [r2]
	cmp r1, r0
	bcs _08031E1A
	ldr r5, _08031E30  @ =gUnknown_03006A30
	mov r4, #4
	mov r3, #120
_08031E00:
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r5
	strb r4, [r0, #12]
	add r0, r0, #56
	strb r3, [r0]
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldrb r0, [r2]
	cmp r1, r0
	bcc _08031E00
_08031E1A:
	ldr r1, _08031E34  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _08031EF8
_08031E24:
	.4byte gUnknown_0201F000
_08031E28:
	.4byte 0x00000216
_08031E2C:
	.4byte gUnknown_03006C80
_08031E30:
	.4byte gUnknown_03006A30
_08031E34:
	.4byte gSubState
_08031E38:
	ldr r0, _08031E5C  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	ldrb r0, [r0, #20]
	cmp r0, #2
	bne _08031EF8
	ldr r2, _08031E60  @ =gUnknown_0201F000
	ldr r0, [r2]
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	str r0, [r2]
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldr r1, _08031E64  @ =gUnknown_02016D60
	mov r0, #60
	strh r0, [r1, #4]
	b _08031EF8
_08031E5C:
	.4byte gUnknown_03006A30
_08031E60:
	.4byte gUnknown_0201F000
_08031E64:
	.4byte gUnknown_02016D60
_08031E68:
	ldr r1, _08031E88  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08031EF8
	ldr r0, _08031E8C  @ =gUnknown_03006C80
	ldrb r0, [r0, #6]
	cmp r0, #2
	beq _08031EA8
	cmp r0, #2
	bgt _08031E90
	cmp r0, #1
	beq _08031E96
	b _08031ED2
_08031E88:
	.4byte gUnknown_02016D60
_08031E8C:
	.4byte gUnknown_03006C80
_08031E90:
	cmp r0, #3
	beq _08031EC4
	b _08031ED2
_08031E96:
	bl sub_080397F0
	ldr r1, _08031EA4  @ =0x0000080A
	cmp r0, #0
	bgt _08031ED0
	b _08031ECE
	.byte 0x00
	.byte 0x00
_08031EA4:
	.4byte 0x0000080A
_08031EA8:
	bl sub_080397F0
	ldr r1, _08031EB4  @ =0x0000080D
	cmp r0, #1
	bgt _08031ED0
	b _08031ECE
_08031EB4:
	.4byte 0x0000080D
_08031EB8:
	ldr r0, _08031EC0  @ =0x0000080B
	bl sub_08031BCC
	b _08031EF8
_08031EC0:
	.4byte 0x0000080B
_08031EC4:
	bl sub_080397F0
	ldr r1, _08031F00  @ =0x0000080F
	cmp r0, #2
	bgt _08031ED0
_08031ECE:
	sub r1, r1, #1
_08031ED0:
	add r2, r1, #0
_08031ED2:
	add r0, r2, #0
	bl sub_0800D67C
	ldr r3, _08031F04  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
	bl sub_08031F08
_08031EF8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08031F00:
	.4byte 0x0000080F
_08031F04:
	.4byte gUnknown_02000010
	THUMB_FUNC_END sub_08031C00

