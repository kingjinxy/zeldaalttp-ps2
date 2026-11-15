	THUMB_FUNC_START sub_08038E44
sub_08038E44: @ 0x08038E44
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	ldr r1, _08038E60  @ =gSubState
	ldrb r0, [r1]
	cmp r0, #6
	bls _08038E54
	b _08039260
_08038E54:
	lsl r1, r0, #2
	ldr r2, _08038E64  @ =0x08038E68
	add r0, r1, r2
	ldr r1, [r0]
	mov pc, r1
	.byte 0x00
	.byte 0x00
_08038E60:
	.4byte gSubState
_08038E64:
	.4byte 0x08038E68
	.4byte _08038E84
	.4byte _08038EC8
	.4byte _08038F48
	.4byte _080390A4
	.4byte _08039108
	.4byte _08039194
	.4byte _080391D8
_08038E84:
	ldr r0, _08038EBC  @ =gUnknown_03000208
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _08038EC0  @ =gUnknown_03000E20
	ldrh r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #2]
	ldr r1, _08038EC4  @ =gSubState
	ldr r0, _08038EC4  @ =gSubState
	ldr r1, _08038EC4  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08039260
_08038EBC:
	.4byte gUnknown_03000208
_08038EC0:
	.4byte gUnknown_03000E20
_08038EC4:
	.4byte gSubState
_08038EC8:
	ldr r1, _08038F20  @ =gUnknown_03000E20
	ldr r0, _08038F20  @ =gUnknown_03000E20
	ldr r1, _08038F20  @ =gUnknown_03000E20
	ldrh r2, [r1, #2]
	sub r1, r2, #1
	ldrh r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strh r2, [r0, #2]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r1, _08038F24  @ =0x0000FFFF
	cmp r0, r1
	bne _08038F42
	ldr r0, _08038F20  @ =gUnknown_03000E20
	ldrh r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #2]
	ldr r0, _08038F28  @ =gUnknown_03006C80
	ldrb r1, [r0, #2]
	cmp r1, #0
	beq _08038F30
	ldr r0, _08038F28  @ =gUnknown_03006C80
	ldrb r1, [r0, #4]
	cmp r1, #0
	bne _08038F30
	ldr r0, _08038F2C  @ =gSubState
	mov r1, #3
	strb r1, [r0]
	b _08038F42
_08038F20:
	.4byte gUnknown_03000E20
_08038F24:
	.4byte 0x0000FFFF
_08038F28:
	.4byte gUnknown_03006C80
_08038F2C:
	.4byte gSubState
_08038F30:
	bl sub_08038D50
	ldr r1, _08038F44  @ =gSubState
	ldr r0, _08038F44  @ =gSubState
	ldr r1, _08038F44  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_08038F42:
	b _08039260
_08038F44:
	.4byte gSubState
_08038F48:
	ldr r1, _08038FC8  @ =gUnknown_03000E20
	ldr r0, _08038FC8  @ =gUnknown_03000E20
	ldr r1, _08038FC8  @ =gUnknown_03000E20
	ldrh r2, [r1, #2]
	sub r1, r2, #1
	ldrh r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strh r2, [r0, #2]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r1, _08038FCC  @ =0x0000FFFF
	cmp r0, r1
	beq _08038F76
	b _08039098
_08038F76:
	bl sub_08038DB8
	add r1, r7, #2
	strh r0, [r1]
	ldr r0, _08038FC8  @ =gUnknown_03000E20
	ldrh r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #2]
	ldr r0, _08038FD0  @ =gUnknown_03006C80
	ldr r2, _08038FD0  @ =gUnknown_03006C80
	add r1, r2, #0
	add r2, r2, #36
	ldrb r1, [r2]
	mov r2, #128
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #36
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_08038FBA:
	add r0, r7, #0
	ldr r1, _08038FD0  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08038FD4
	b _08039008
_08038FC8:
	.4byte gUnknown_03000E20
_08038FCC:
	.4byte 0x0000FFFF
_08038FD0:
	.4byte gUnknown_03006C80
_08038FD4:
	ldr r0, _08039004  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	add r1, r7, #2
	ldrh r2, [r1]
	add r1, r2, #0
	bl sub_0802C53C
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08038FBA
	.byte 0x00
	.byte 0x00
_08039004:
	.4byte gUnknown_03006A30
_08039008:
	ldr r0, _0803904C  @ =gUnknown_03006C80
	ldr r2, _0803904C  @ =gUnknown_03006C80
	add r1, r2, #0
	add r2, r2, #36
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #36
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, _0803904C  @ =gUnknown_03006C80
	ldrb r1, [r0, #2]
	cmp r1, #0
	beq _08039050
	ldr r1, _0803904C  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #79
	ldrb r0, [r1]
	cmp r0, #79
	bne _08039050
	mov r0, #81
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	b _0803908A
	.byte 0x00
	.byte 0x00
_0803904C:
	.4byte gUnknown_03006C80
_08039050:
	ldr r0, _0803906C  @ =gUnknown_03006C80
	ldrb r1, [r0, #3]
	cmp r1, #2
	bne _08039070
	ldr r0, _0803906C  @ =gUnknown_03006C80
	ldrb r1, [r0, #4]
	cmp r1, #10
	bhi _08039070
	mov r0, #81
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	b _0803908A
_0803906C:
	.4byte gUnknown_03006C80
_08039070:
	ldr r0, _0803909C  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	cmp r1, #0
	bne _0803908A
	ldr r0, _0803909C  @ =gUnknown_03006C80
	ldrb r1, [r0, #2]
	cmp r1, #0
	bne _0803908A
	mov r0, #81
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
_0803908A:
	ldr r1, _080390A0  @ =gSubState
	ldr r0, _080390A0  @ =gSubState
	ldr r1, _080390A0  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_08039098:
	b _08039260
	.byte 0x00
	.byte 0x00
_0803909C:
	.4byte gUnknown_03006C80
_080390A0:
	.4byte gSubState
_080390A4:
	ldr r1, _080390F8  @ =gUnknown_03000E20
	ldr r0, _080390F8  @ =gUnknown_03000E20
	ldr r1, _080390F8  @ =gUnknown_03000E20
	ldrh r2, [r1, #2]
	sub r1, r2, #1
	ldrh r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strh r2, [r0, #2]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r1, _080390FC  @ =0x0000FFFF
	cmp r0, r1
	bne _080390F6
	ldr r0, _08039100  @ =gUnknown_03006C80
	add r1, r0, #0
	add r0, r0, #110
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _08039104  @ =gSubState
	ldr r0, _08039104  @ =gSubState
	ldr r1, _08039104  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_080390F6:
	b _08039260
_080390F8:
	.4byte gUnknown_03000E20
_080390FC:
	.4byte 0x0000FFFF
_08039100:
	.4byte gUnknown_03006C80
_08039104:
	.4byte gSubState
_08039108:
	ldr r1, _08039130  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #110
	ldrb r0, [r1]
	cmp r0, #4
	bne _0803918E
	mov r0, #26
	bl play_sound
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_08039120:
	add r0, r7, #0
	ldr r1, _08039130  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08039134
	b _08039180
	.byte 0x00
	.byte 0x00
_08039130:
	.4byte gUnknown_03006C80
_08039134:
	ldr r0, _0803917C  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	cmp r0, #0
	beq _0803916A
	ldr r0, _0803917C  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
_0803916A:
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08039120
	.byte 0x00
	.byte 0x00
_0803917C:
	.4byte gUnknown_03006A30
_08039180:
	ldr r1, _08039190  @ =gSubState
	ldr r0, _08039190  @ =gSubState
	ldr r1, _08039190  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_0803918E:
	b _08039260
_08039190:
	.4byte gSubState
_08039194:
	ldr r0, _080391CC  @ =gUnknown_03000520
	ldrb r1, [r0]
	cmp r1, #0
	bne _080391CA
	ldr r0, _080391D0  @ =gUnknown_03006C80
	add r1, r0, #0
	add r0, r0, #110
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #1
	mov r1, #8
	bl sub_0800C0B0
	ldr r1, _080391D4  @ =gSubState
	ldr r0, _080391D4  @ =gSubState
	ldr r1, _080391D4  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_080391CA:
	b _08039260
_080391CC:
	.4byte gUnknown_03000520
_080391D0:
	.4byte gUnknown_03006C80
_080391D4:
	.4byte gSubState
_080391D8:
	ldr r0, _08039204  @ =gUnknown_03000520
	ldrb r1, [r0]
	cmp r1, #0
	bne _08039260
	ldr r0, _08039208  @ =gUnknown_03006C80
	ldr r1, _08039208  @ =gUnknown_03006C80
	ldr r2, _08039208  @ =gUnknown_03006C80
	ldr r1, [r1, #32]
	ldr r2, [r2, #28]
	add r1, r1, r2
	str r1, [r0, #32]
	ldr r1, _08039208  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #79
	ldrb r0, [r1]
	cmp r0, #128
	bne _0803920C
	mov r0, #5
	bl set_main_state
	b _08039252
	.byte 0x00
	.byte 0x00
_08039204:
	.4byte gUnknown_03000520
_08039208:
	.4byte gUnknown_03006C80
_0803920C:
	bl sub_08039D64
	cmp r0, #0
	bne _0803922C
	ldr r0, _08039224  @ =gUnknown_03005050
	mov r1, #1
	strb r1, [r0]
	ldr r0, _08039228  @ =gSubState
	mov r1, #0
	strb r1, [r0]
	b _08039252
	.byte 0x00
	.byte 0x00
_08039224:
	.4byte gUnknown_03005050
_08039228:
	.4byte gSubState
_0803922C:
	ldr r0, _08039240  @ =gUnknown_03006C80
	ldrb r1, [r0, #7]
	cmp r1, #2
	beq _08039244
	ldr r0, _08039240  @ =gUnknown_03006C80
	ldrb r1, [r0, #2]
	cmp r1, #0
	bne _08039244
	b _0803924C
	.byte 0x00
	.byte 0x00
_08039240:
	.4byte gUnknown_03006C80
_08039244:
	mov r0, #7
	bl set_main_state
	b _08039252
_0803924C:
	mov r0, #4
	bl set_main_state
_08039252:
	bl sub_0801239C
	bl sub_080123BC
	bl sub_0800BFBC
	b _08039280
_08039260:
	bl 0x08137AFC
	bl sub_08015D9C
	bl sub_08015C64
	bl sub_08008ED8
	bl sub_0802CD3C
	bl sub_0802BFC4
	bl sub_0803F284
	bl sub_08000BAC
_08039280:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08038E44

