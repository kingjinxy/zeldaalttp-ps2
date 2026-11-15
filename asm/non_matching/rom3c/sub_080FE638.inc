	THUMB_FUNC_START sub_080FE638
sub_080FE638: @ 0x080FE638
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080FE714  @ =gRam
	ldr r2, _080FE718  @ =0x000010B2
	add r0, r1, r2
	add r0, r4, r0
	mov r2, #16
	strb r2, [r0]
	ldr r3, _080FE71C  @ =0x00000FC2
	add r1, r1, r3
	add r1, r4, r1
	ldrb r0, [r1]
	mov r2, #96
	cmp r0, #31
	ble _080FE666
	mov r2, #80
	cmp r0, #63
	ble _080FE666
	mov r2, #48
	cmp r0, #127
	bgt _080FE666
	mov r2, #64
_080FE666:
	ldr r5, _080FE714  @ =gRam
	ldr r7, _080FE720  @ =0x00000F02
	add r0, r5, r7
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r0, r0, #112
	ldr r3, _080FE724  @ =0x00000968
	add r1, r5, r3
	strh r0, [r1]
	sub r7, r7, #16
	add r0, r5, r7
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r0, r0, #144
	add r3, r3, #4
	add r1, r5, r3
	strh r0, [r1]
	add r1, r2, #0
	add r0, r4, #0
	bl sub_080C2DCC
	add r7, r7, #48
	add r0, r5, r7
	add r2, r4, r0
	mov r0, #150
	lsl r0, r0, #4
	add r1, r5, r0
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r2]
	ldr r3, _080FE728  @ =0x00000F12
	add r0, r5, r3
	add r6, r4, r0
	ldr r7, _080FE72C  @ =0x00000961
	add r7, r7, r5
	mov r12, r7
	ldrb r3, [r7]
	strb r3, [r6]
	ldr r7, _080FE730  @ =0x0000097C
	add r0, r5, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, #40
	cmp r0, #79
	bgt _080FE6D6
	add r7, r7, #1
	add r0, r5, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, #40
	cmp r0, #79
	ble _080FE6F6
_080FE6D6:
	mov r0, #0
	ldrsb r0, [r1, r0]
	lsr r1, r0, #31
	add r0, r0, r1
	asr r0, r0, #1
	add r0, r3, r0
	strb r0, [r6]
	mov r1, r12
	mov r0, #0
	ldrsb r0, [r1, r0]
	lsr r1, r0, #31
	add r0, r0, r1
	asr r0, r0, #1
	ldrb r3, [r2]
	add r0, r0, r3
	strb r0, [r2]
_080FE6F6:
	add r0, r4, #0
	bl Sprite3_Move
	ldr r3, _080FE714  @ =gRam
	ldr r7, _080FE71C  @ =0x00000FC2
	add r0, r3, r7
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #80
	beq _080FE738
	cmp r0, #80
	bgt _080FE734
	cmp r0, #16
	beq _080FE740
	b _080FE778
_080FE714:
	.4byte gRam
_080FE718:
	.4byte 0x000010B2
_080FE71C:
	.4byte 0x00000FC2
_080FE720:
	.4byte 0x00000F02
_080FE724:
	.4byte 0x00000968
_080FE728:
	.4byte 0x00000F12
_080FE72C:
	.4byte 0x00000961
_080FE730:
	.4byte 0x0000097C
_080FE734:
	cmp r0, #176
	bne _080FE778
_080FE738:
	add r0, r4, #0
	bl sub_080FE95C
	b _080FE778
_080FE740:
	ldr r1, _080FE7B0  @ =0x000010A2
	add r0, r3, r1
	add r0, r4, r0
	mov r2, #0
	mov r1, #128
	strb r1, [r0]
	ldr r7, _080FE7B4  @ =0x00000F52
	add r0, r3, r7
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080FE7B8  @ =0x00001172
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	mov r0, #64
	strb r0, [r5]
	sub r7, r7, #48
	add r0, r3, r7
	add r0, r4, r0
	strb r2, [r0]
	ldr r1, _080FE7BC  @ =0x00000F12
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	add r0, r4, #0
	bl sub_080FE864
_080FE778:
	ldr r6, _080FE7C0  @ =gRam
	ldr r2, _080FE7C4  @ =0x00001052
	add r0, r6, r2
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	lsl r1, r1, #24
	lsr r1, r1, #26
	mov r0, #3
	and r1, r1, r0
	add r5, r1, #0
	cmp r5, #0
	bne _080FE79C
	add r0, r4, #0
	mov r1, #12
	bl sub_080CF0AC
_080FE79C:
	ldr r3, _080FE7C8  @ =0x00000F92
	add r0, r6, r3
	add r0, r4, r0
	ldr r1, _080FE7CC  @ =gUnknown_0817AB66
	add r1, r5, r1
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
_080FE7B0:
	.4byte 0x000010A2
_080FE7B4:
	.4byte 0x00000F52
_080FE7B8:
	.4byte 0x00001172
_080FE7BC:
	.4byte 0x00000F12
_080FE7C0:
	.4byte gRam
_080FE7C4:
	.4byte 0x00001052
_080FE7C8:
	.4byte 0x00000F92
_080FE7CC:
	.4byte gUnknown_0817AB66
	THUMB_FUNC_END sub_080FE638

