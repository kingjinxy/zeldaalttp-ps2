	THUMB_FUNC_START sub_080108CC
sub_080108CC: @ 0x080108CC
	push {r4-r6,lr}
	ldr r2, _080108FC  @ =gUnknown_02016D60
	ldrb r0, [r2, #27]
	add r4, r2, #0
	cmp r0, #0
	beq _080108DA
	b _08010A9E
_080108DA:
	ldr r0, _08010900  @ =gNewKeys
	ldrh r1, [r0]
	add r3, r0, #0
	cmp r1, #16
	beq _08010984
	cmp r1, #16
	bgt _08010912
	cmp r1, #2
	bne _080108EE
	b _08010A60
_080108EE:
	cmp r1, #2
	bgt _08010904
	cmp r1, #1
	bne _080108F8
	b _08010A26
_080108F8:
	b _08010A9E
	.byte 0x00
	.byte 0x00
_080108FC:
	.4byte gUnknown_02016D60
_08010900:
	.4byte gNewKeys
_08010904:
	cmp r1, #4
	bne _0801090A
	b _08010A16
_0801090A:
	cmp r1, #8
	bne _08010910
	b _08010A66
_08010910:
	b _08010A9E
_08010912:
	cmp r1, #128
	beq _08010936
	cmp r1, #128
	bgt _08010924
	cmp r1, #32
	beq _08010984
	cmp r1, #64
	beq _08010936
	b _08010A9E
_08010924:
	mov r0, #128
	lsl r0, r0, #1
	cmp r1, r0
	beq _08010A16
	mov r0, #128
	lsl r0, r0, #2
	cmp r1, r0
	beq _08010A1E
	b _08010A9E
_08010936:
	ldrb r0, [r4, #3]
	cmp r0, #5
	bne _0801094A
	ldrh r0, [r3]
	mov r1, #0
	cmp r0, #64
	bne _08010946
	mov r1, #4
_08010946:
	strb r1, [r4, #3]
	b _08010A0E
_0801094A:
	add r5, r4, #0
	ldrb r1, [r4, #3]
	ldrh r0, [r3]
	cmp r0, #64
	bne _08010958
	add r0, r1, #5
	b _0801095A
_08010958:
	add r0, r1, #7
_0801095A:
	mov r1, #6
	bl __modsi3
	strb r0, [r5, #3]
	ldr r2, _0801097C  @ =gUnknown_08427524
	ldrb r1, [r4, #2]
	ldr r0, _08010980  @ =gGameLanguage
	ldrb r0, [r0]
	cmp r0, #0
	beq _08010970
	add r1, r1, #13
_08010970:
	add r0, r1, r2
	ldrb r1, [r0]
	add r0, r4, #0
	add r0, r0, #32
	strb r1, [r0]
	b _08010A0E
_0801097C:
	.4byte gUnknown_08427524
_08010980:
	.4byte gGameLanguage
_08010984:
	ldrb r0, [r4, #3]
	cmp r0, #5
	bne _080109F4
	ldr r0, _080109A8  @ =gGameLanguage
	ldrb r1, [r0]
	add r6, r0, #0
	cmp r1, #0
	bne _080109BA
	add r5, r4, #0
	add r0, r4, #0
	add r0, r0, #32
	ldrb r1, [r0]
	ldrh r0, [r3]
	cmp r0, #32
	bne _080109AC
	add r0, r1, #4
	b _080109AE
	.byte 0x00
	.byte 0x00
_080109A8:
	.4byte gGameLanguage
_080109AC:
	add r0, r1, #6
_080109AE:
	mov r1, #5
	bl __modsi3
	add r1, r0, #0
	add r0, r5, #0
	b _080109D4
_080109BA:
	add r2, r4, #0
	add r0, r4, #0
	add r0, r0, #32
	ldrb r1, [r0]
	ldrh r0, [r3]
	cmp r0, #32
	bne _080109CC
	sub r1, r1, #1
	b _080109CE
_080109CC:
	add r1, r1, #1
_080109CE:
	mov r0, #3
	and r1, r1, r0
	add r0, r2, #0
_080109D4:
	add r0, r0, #32
	strb r1, [r0]
	ldr r2, _080109F0  @ =gUnknown_0842753E
	add r0, r4, #0
	add r0, r0, #32
	ldrb r1, [r0]
	ldrb r0, [r6]
	cmp r0, #0
	beq _080109E8
	add r1, r1, #5
_080109E8:
	add r0, r1, r2
	ldrb r0, [r0]
	b _08010A0C
	.byte 0x00
	.byte 0x00
_080109F0:
	.4byte gUnknown_0842753E
_080109F4:
	ldrb r1, [r4, #2]
	ldrh r0, [r3]
	cmp r0, #32
	bne _08010A02
	add r0, r1, #0
	add r0, r0, #12
	b _08010A06
_08010A02:
	add r0, r1, #0
	add r0, r0, #14
_08010A06:
	mov r1, #13
	bl __modsi3
_08010A0C:
	strb r0, [r4, #2]
_08010A0E:
	mov r0, #61
	bl play_sound
	b _08010A9E
_08010A16:
	mov r0, #3
	bl sub_08010CCC
	b _08010A9E
_08010A1E:
	mov r0, #4
	bl sub_08010CCC
	b _08010A9E
_08010A26:
	ldrb r0, [r2, #3]
	cmp r0, #5
	bne _08010A6C
	ldr r0, _08010A48  @ =gGameLanguage
	ldrb r0, [r0]
	cmp r0, #0
	bne _08010A4C
	add r0, r2, #0
	add r0, r0, #32
	ldrb r0, [r0]
	cmp r0, #3
	beq _08010A60
	cmp r0, #4
	beq _08010A66
	bl sub_08010CCC
	b _08010A9E
_08010A48:
	.4byte gGameLanguage
_08010A4C:
	add r0, r2, #0
	add r0, r0, #32
	ldrb r0, [r0]
	cmp r0, #2
	beq _08010A60
	cmp r0, #3
	beq _08010A66
	bl sub_08010CCC
	b _08010A9E
_08010A60:
	bl sub_08010C9C
	b _08010A9E
_08010A66:
	bl sub_08010BFC
	b _08010A9E
_08010A6C:
	ldrb r0, [r2, #2]
	ldrb r1, [r2, #3]
	lsl r0, r0, #1
	lsl r1, r1, #6
	add r0, r0, r1
	lsl r0, r0, #1
	ldr r1, _08010A94  @ =0x0600E986
	add r0, r0, r1
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _08010A98
	bl sub_08010C48
	mov r0, #147
	bl play_sound
	b _08010A9E
_08010A94:
	.4byte 0x0600E986
_08010A98:
	mov r0, #64
	bl play_sound
_08010A9E:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080108CC

