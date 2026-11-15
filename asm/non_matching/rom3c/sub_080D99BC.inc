	THUMB_FUNC_START sub_080D99BC
sub_080D99BC: @ 0x080D99BC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #0
	mov r8, r0
	ldr r5, _080D9B98  @ =gRam
	ldr r1, _080D9B9C  @ =0x00000FB2
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080D99EA
	mov r2, r8
	strb r2, [r1]
	ldr r3, _080D9BA0  @ =0x00001719
	add r0, r5, r3
	strb r2, [r0]
	ldr r2, _080D9BA4  @ =0x000016FA
	add r0, r5, r2
	mov r3, r8
	strb r3, [r0]
_080D99EA:
	ldr r2, _080D9BA8  @ =0x00000FC2
	add r0, r5, r2
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _080D9A0A
	mov r0, #1
	strb r0, [r1]
	ldr r3, _080D9BA4  @ =0x000016FA
	add r1, r5, r3
	mov r0, #129
	strb r0, [r1]
	ldr r0, _080D9BA0  @ =0x00001719
	add r1, r5, r0
	mov r0, #8
	strb r0, [r1]
_080D9A0A:
	add r0, r4, #0
	bl sub_080D9EF4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D9A1E
	b _080D9C88
_080D9A1E:
	add r0, r4, #0
	bl sub_080D9D8C
	mov r1, #188
	lsl r1, r1, #4
	add r7, r5, r1
	mov r2, r8
	strh r2, [r7]
	add r0, r4, #0
	bl sub_080D9CB4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D9A3E
	mov r0, #1
	strh r0, [r7]
_080D9A3E:
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C1F70
	add r0, r4, #0
	bl sub_080C6F48
	add r0, r4, #0
	bl sub_080C3540
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D9A64
	b _080D9BFC
_080D9A64:
	mov r7, #1
	ldrb r0, [r6]
	cmp r0, #0
	bne _080D9A76
	ldr r3, _080D9BAC  @ =0x00000FD2
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #13
	strb r1, [r0]
_080D9A76:
	ldr r1, _080D9BB0  @ =0x00001622
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080D9BB4  @ =0x00001623
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080D9BB8  @ =0x000016C4
	add r0, r5, r3
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	add r1, r1, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #34
	bhi _080D9B60
	ldr r1, _080D9BBC  @ =0x00001624
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080D9BC0  @ =0x00001625
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r3, r3, #5
	add r0, r5, r3
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	add r1, r1, #12
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #35
	bhi _080D9B60
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _080D9BC4  @ =0x000016D5
	add r1, r5, r0
	ldr r0, _080D9BC8  @ =gUnknown_081759C8
	add r0, r2, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	bne _080D9B60
	ldr r1, _080D9BCC  @ =0x00001804
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D9B60
	ldr r3, _080D9BD0  @ =0x00001788
	add r0, r5, r3
	strb r7, [r0]
	ldr r1, _080D9BD4  @ =0x00000F62
	add r0, r5, r1
	add r0, r4, r0
	strb r7, [r0]
	add r3, r3, #128
	add r0, r5, r3
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080D9B5E
	ldr r0, _080D9BD8  @ =0x00000545
	add r1, r5, r0
	ldr r0, _080D9BDC  @ =gUnknown_081759CC
	add r0, r2, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _080D9B5E
	ldr r1, _080D9BE0  @ =0x000016D6
	add r0, r5, r1
	ldr r3, _080D9BE4  @ =0x000016D7
	add r1, r5, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	beq _080D9B5E
	mov r0, #1
	eor r2, r2, r0
	ldr r0, _080D9BE8  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080D9BEC  @ =gUnknown_081759C0
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _080D9BF0  @ =0x00000F12
	add r1, r5, r3
	add r1, r4, r1
	ldr r0, _080D9BF4  @ =gUnknown_081759C4
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	mov r0, #1
	mov r8, r0
_080D9B5E:
	mov r7, #0
_080D9B60:
	cmp r7, #0
	beq _080D9C46
	ldr r2, _080D9B98  @ =gRam
	ldr r1, _080D9BD4  @ =0x00000F62
	add r0, r2, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	beq _080D9C46
	mov r1, #0
	strb r1, [r3]
	ldr r3, _080D9BA0  @ =0x00001719
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #239
	add r0, r2, r3
	strb r1, [r0]
	sub r3, r3, #128
	add r0, r2, r3
	strb r1, [r0]
	ldr r0, _080D9BF8  @ =0x00001705
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	b _080D9C46
	.byte 0x00
	.byte 0x00
_080D9B98:
	.4byte gRam
_080D9B9C:
	.4byte 0x00000FB2
_080D9BA0:
	.4byte 0x00001719
_080D9BA4:
	.4byte 0x000016FA
_080D9BA8:
	.4byte 0x00000FC2
_080D9BAC:
	.4byte 0x00000FD2
_080D9BB0:
	.4byte 0x00001622
_080D9BB4:
	.4byte 0x00001623
_080D9BB8:
	.4byte 0x000016C4
_080D9BBC:
	.4byte 0x00001624
_080D9BC0:
	.4byte 0x00001625
_080D9BC4:
	.4byte 0x000016D5
_080D9BC8:
	.4byte gUnknown_081759C8
_080D9BCC:
	.4byte 0x00001804
_080D9BD0:
	.4byte 0x00001788
_080D9BD4:
	.4byte 0x00000F62
_080D9BD8:
	.4byte 0x00000545
_080D9BDC:
	.4byte gUnknown_081759CC
_080D9BE0:
	.4byte 0x000016D6
_080D9BE4:
	.4byte 0x000016D7
_080D9BE8:
	.4byte 0x00000F22
_080D9BEC:
	.4byte gUnknown_081759C0
_080D9BF0:
	.4byte 0x00000F12
_080D9BF4:
	.4byte gUnknown_081759C4
_080D9BF8:
	.4byte 0x00001705
_080D9BFC:
	mov r0, #7
	strb r0, [r6]
	bl sub_0809945C
	ldr r1, _080D9C18  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D9C1C
	bl sub_080AF16C
	b _080D9C46
	.byte 0x00
	.byte 0x00
_080D9C18:
	.4byte 0x00000FD2
_080D9C1C:
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080D9C94  @ =0x00000F22
	add r2, r5, r3
	add r2, r4, r2
	ldr r1, _080D9C98  @ =gUnknown_081759C0
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _080D9C9C  @ =0x00000F12
	add r2, r5, r1
	add r2, r4, r2
	ldr r1, _080D9CA0  @ =gUnknown_081759C4
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	mov r2, #1
	mov r8, r2
_080D9C46:
	mov r3, r8
	cmp r3, #0
	beq _080D9C88
	ldr r5, _080D9CA4  @ =gRam
	ldr r1, _080D9CA8  @ =0x00001808
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080D9C60
	bl sub_080AF16C
_080D9C60:
	ldr r2, _080D9CAC  @ =0x00001042
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080D9C88
	ldr r3, _080D9CB0  @ =0x000010E2
	add r0, r5, r3
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080D9C88
	add r0, r4, #0
	mov r1, #58
	bl sub_080CF0AC
	mov r0, #8
	strb r0, [r5]
_080D9C88:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D9C94:
	.4byte 0x00000F22
_080D9C98:
	.4byte gUnknown_081759C0
_080D9C9C:
	.4byte 0x00000F12
_080D9CA0:
	.4byte gUnknown_081759C4
_080D9CA4:
	.4byte gRam
_080D9CA8:
	.4byte 0x00001808
_080D9CAC:
	.4byte 0x00001042
_080D9CB0:
	.4byte 0x000010E2
	THUMB_FUNC_END sub_080D99BC

