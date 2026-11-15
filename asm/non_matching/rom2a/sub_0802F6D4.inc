	THUMB_FUNC_START sub_0802F6D4
sub_0802F6D4: @ 0x0802F6D4
	push {r4,r5,lr}
	ldr r0, _0802F6EC  @ =gUnknown_02016D60
	ldrb r1, [r0]
	add r4, r0, #0
	cmp r1, #14
	bls _0802F6E2
	b _0802F9D6
_0802F6E2:
	lsl r0, r1, #2
	ldr r1, _0802F6F0  @ =0x0802F6F4
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0802F6EC:
	.4byte gUnknown_02016D60
_0802F6F0:
	.4byte 0x0802F6F4
	.4byte _0802F730
	.4byte _0802F774
	.4byte _0802F798
	.4byte _0802F7C4
	.4byte _0802F7E2
	.4byte _0802F810
	.4byte _0802F848
	.4byte _0802F884
	.4byte _0802F8AC
	.4byte _0802F8B4
	.4byte _0802F8C0
	.4byte _0802F8D0
	.4byte _0802F8E0
	.4byte _0802F924
	.4byte _0802F974
_0802F730:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802F73E
	b _0802F9D6
_0802F73E:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #1
	bl sub_08063C5C
	mov r0, #2
	bl sub_08063C5C
	mov r0, #3
	bl sub_08063C5C
	ldr r2, _0802F770  @ =gUnknown_03006A30
	add r0, r2, #0
	add r0, r0, #156
	mov r1, #11
	strb r1, [r0]
	mov r3, #150
	lsl r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #144
	add r0, r2, r3
	strb r1, [r0]
	b _0802F9D6
_0802F770:
	.4byte gUnknown_03006A30
_0802F774:
	ldr r1, _0802F790  @ =gUnknown_03000520
	ldr r0, _0802F794  @ =0xF877FFFF
	str r0, [r1, #12]
	mov r0, #28
	strb r0, [r1, #7]
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #255
	lsl r0, r0, #1
	bl play_sound
	b _0802F9D6
	.byte 0x00
	.byte 0x00
_0802F790:
	.4byte gUnknown_03000520
_0802F794:
	.4byte 0xF877FFFF
_0802F798:
	ldrb r2, [r4, #12]
	cmp r2, #15
	bhi _0802F7B8
	ldr r0, _0802F7B4  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _0802F7AC
	b _0802F9D6
_0802F7AC:
	add r0, r2, #1
	strb r0, [r4, #12]
	b _0802F9D6
	.byte 0x00
	.byte 0x00
_0802F7B4:
	.4byte gUnknown_03000948
_0802F7B8:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #60
	strh r0, [r4, #4]
	b _0802F9D6
_0802F7C4:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802F7D2
	b _0802F9D6
_0802F7D2:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #240
	strh r0, [r4, #4]
	bl sub_0802F688
	b _0802F9D6
_0802F7E2:
	ldrh r0, [r4, #4]
	cmp r0, #120
	bne _0802F7F0
	mov r0, #130
	lsl r0, r0, #2
	bl play_sound
_0802F7F0:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802F7FE
	b _0802F9D6
_0802F7FE:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r0, _0802F80C  @ =0x000001FF
	bl play_sound
	b _0802F9D6
_0802F80C:
	.4byte 0x000001FF
_0802F810:
	ldrb r2, [r4, #12]
	cmp r2, #0
	beq _0802F830
	ldr r0, _0802F82C  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _0802F824
	b _0802F9D6
_0802F824:
	sub r0, r2, #1
	strb r0, [r4, #12]
	b _0802F9D6
	.byte 0x00
	.byte 0x00
_0802F82C:
	.4byte gUnknown_03000948
_0802F830:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #120
	strh r0, [r4, #4]
	ldr r0, _0802F844  @ =0x000001FD
	bl play_sound
	b _0802F9D6
	.byte 0x00
	.byte 0x00
_0802F844:
	.4byte 0x000001FD
_0802F848:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802F856
	b _0802F9D6
_0802F856:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #60
	strh r0, [r4, #4]
	ldr r2, _0802F87C  @ =gUnknown_0202A4F8
	ldr r0, [r2]
	mov r1, #16
	orr r0, r0, r1
	str r0, [r2]
	mov r0, #128
	lsl r0, r0, #2
	bl play_sound
	ldr r0, _0802F880  @ =0x800B01B0
	bl play_sound
	b _0802F9D6
	.byte 0x00
	.byte 0x00
_0802F87C:
	.4byte gUnknown_0202A4F8
_0802F880:
	.4byte 0x800B01B0
_0802F884:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802F892
	b _0802F9D6
_0802F892:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #30
	strh r0, [r4, #4]
	ldr r1, _0802F8A8  @ =0x0000050E
	mov r0, #0
	bl sub_0802FA3C
	b _0802F9D6
	.byte 0x00
	.byte 0x00
_0802F8A8:
	.4byte 0x0000050E
_0802F8AC:
	ldr r1, _0802F8B0  @ =0x0000050F
	b _0802F8D2
_0802F8B0:
	.4byte 0x0000050F
_0802F8B4:
	mov r1, #162
	lsl r1, r1, #3
	mov r0, #2
	bl sub_0802F304
	b _0802F9D6
_0802F8C0:
	ldr r1, _0802F8CC  @ =0x00000511
	mov r0, #0
	bl sub_0802F304
	b _0802F9D6
	.byte 0x00
	.byte 0x00
_0802F8CC:
	.4byte 0x00000511
_0802F8D0:
	ldr r1, _0802F8DC  @ =0x00000512
_0802F8D2:
	mov r0, #1
	bl sub_0802F304
	b _0802F9D6
	.byte 0x00
	.byte 0x00
_0802F8DC:
	.4byte 0x00000512
_0802F8E0:
	ldr r0, _0802F914  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _0802F9D6
	bl sub_0800D644
	ldr r1, _0802F918  @ =gUnknown_02016D60
	mov r0, #255
	strb r0, [r1, #15]
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #120
	strh r0, [r1, #4]
	ldr r2, _0802F91C  @ =gUnknown_0202A4F8
	ldr r0, [r2]
	mov r1, #32
	orr r0, r0, r1
	str r0, [r2]
	ldr r0, _0802F920  @ =0x80040000
	bl play_sound
	b _0802F9D6
	.byte 0x00
	.byte 0x00
_0802F914:
	.4byte gUnknown_02000010
_0802F918:
	.4byte gUnknown_02016D60
_0802F91C:
	.4byte gUnknown_0202A4F8
_0802F920:
	.4byte 0x80040000
_0802F924:
	ldr r0, _0802F948  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0802F9D6
	ldr r1, _0802F94C  @ =gUnknown_03000450
	ldrh r2, [r1, #34]
	mov r3, #34
	ldrsh r0, [r1, r3]
	cmp r0, #91
	ble _0802F954
	sub r0, r2, #1
	strh r0, [r1, #34]
	ldr r1, _0802F950  @ =gUnknown_030004A0
	strh r0, [r1, #48]
	strh r0, [r1, #36]
	b _0802F9D6
_0802F948:
	.4byte gUnknown_03000948
_0802F94C:
	.4byte gUnknown_03000450
_0802F950:
	.4byte gUnknown_030004A0
_0802F954:
	ldr r0, _0802F96C  @ =0x000001B1
	bl play_sound
	ldr r1, _0802F970  @ =gUnknown_02016D60
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #210
	lsl r0, r0, #1
	strh r0, [r1, #4]
	b _0802F9D6
	.byte 0x00
	.byte 0x00
_0802F96C:
	.4byte 0x000001B1
_0802F970:
	.4byte gUnknown_02016D60
_0802F974:
	ldrh r0, [r4, #4]
	cmp r0, #60
	bne _0802F99E
	ldr r0, _0802F9DC  @ =0x00000201
	bl play_sound
	mov r0, #0
	mov r1, #6
	mov r2, #40
	bl sub_0802F9F8
	mov r0, #1
	mov r1, #7
	mov r2, #40
	bl sub_0802F9F8
	mov r0, #2
	mov r1, #8
	mov r2, #40
	bl sub_0802F9F8
_0802F99E:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	mov r5, #0
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802F9D6
	ldr r1, _0802F9E0  @ =gUnknown_03000520
	mov r0, #1
	neg r0, r0
	str r0, [r1, #12]
	ldr r1, _0802F9E4  @ =0x00006739
	mov r0, #0
	bl set_palette_color
	strb r5, [r4, #9]
	mov r0, #255
	strb r0, [r4, #10]
	ldr r1, _0802F9E8  @ =gUnknown_03005050
	mov r0, #2
	strb r0, [r1]
	ldr r0, _0802F9EC  @ =gSubState
	strb r5, [r0]
	ldr r2, _0802F9F0  @ =gNewKeys
	ldrh r1, [r2]
	ldr r0, _0802F9F4  @ =0x0000FFF7
	and r0, r0, r1
	strh r0, [r2]
_0802F9D6:
	pop {r4,r5}
	pop {r0}
	bx r0
_0802F9DC:
	.4byte 0x00000201
_0802F9E0:
	.4byte gUnknown_03000520
_0802F9E4:
	.4byte 0x00006739
_0802F9E8:
	.4byte gUnknown_03005050
_0802F9EC:
	.4byte gSubState
_0802F9F0:
	.4byte gNewKeys
_0802F9F4:
	.4byte 0x0000FFF7
	THUMB_FUNC_END sub_0802F6D4

