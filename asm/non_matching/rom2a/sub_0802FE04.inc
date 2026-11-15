	THUMB_FUNC_START sub_0802FE04
sub_0802FE04: @ 0x0802FE04
	push {r4-r6,lr}
	ldr r0, _0802FE38  @ =gNewKeys
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r5, #0
	beq _0802FE48
	ldr r1, _0802FE3C  @ =gSubState
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	bl sub_08036834
	mov r0, #0
	bl sub_0800C1EC
	ldr r1, _0802FE40  @ =gUnknown_03000520
	mov r0, #1
	neg r0, r0
	str r0, [r1, #12]
	ldr r1, _0802FE44  @ =gUnknown_02016D60
	mov r0, #0
	strh r0, [r1, #6]
	b _0802FEDC
_0802FE38:
	.4byte gNewKeys
_0802FE3C:
	.4byte gSubState
_0802FE40:
	.4byte gUnknown_03000520
_0802FE44:
	.4byte gUnknown_02016D60
_0802FE48:
	bl sub_080367E4
	mov r1, #64
	and r1, r1, r0
	lsl r1, r1, #24
	lsr r3, r1, #24
	cmp r3, #0
	beq _0802FED0
	ldr r4, _0802FEB8  @ =gUnknown_02016D60
	ldr r0, [r4, #36]
	add r0, r0, #1
	str r0, [r4, #36]
	cmp r0, #120
	bls _0802FEDC
	ldrb r1, [r4, #8]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r4, #8]
	bl sub_0802FD88
	ldr r6, _0802FEBC  @ =gUnknown_03005E10
	ldrh r1, [r6]
	mov r0, #9
	and r0, r0, r1
	cmp r0, #0
	beq _0802FEB2
	ldr r1, _0802FEC0  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	strb r5, [r4]
	bl sub_080367E4
	add r1, r0, #0
	mov r0, #15
	and r0, r0, r1
	bl 0x08000A40
	ldr r1, _0802FEC4  @ =gUnknown_03006C80
	strb r0, [r1]
	bl sub_08036760
	ldr r1, _0802FEC8  @ =gUnknown_03000520
	mov r0, #1
	neg r0, r0
	str r0, [r1, #12]
	mov r0, #3
	mov r1, #8
	bl sub_0800C0B0
	ldr r0, _0802FECC  @ =0x80040000
	bl play_sound
_0802FEB2:
	strh r5, [r6]
	b _0802FEDC
	.byte 0x00
	.byte 0x00
_0802FEB8:
	.4byte gUnknown_02016D60
_0802FEBC:
	.4byte gUnknown_03005E10
_0802FEC0:
	.4byte gSubState
_0802FEC4:
	.4byte gUnknown_03006C80
_0802FEC8:
	.4byte gUnknown_03000520
_0802FECC:
	.4byte 0x80040000
_0802FED0:
	ldr r0, _0802FEE4  @ =gUnknown_02016D60
	ldrb r2, [r0, #8]
	mov r1, #127
	and r1, r1, r2
	strb r1, [r0, #8]
	str r3, [r0, #36]
_0802FEDC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802FEE4:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_0802FE04

