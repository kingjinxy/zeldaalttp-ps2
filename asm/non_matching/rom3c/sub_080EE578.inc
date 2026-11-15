	THUMB_FUNC_START sub_080EE578
sub_080EE578: @ 0x080EE578
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r5, r6, #0
	add r0, r6, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r4, _080EE618  @ =gRam
	ldr r1, _080EE61C  @ =0x0000097C
	add r0, r4, r1
	ldrb r0, [r0]
	add r0, r0, #40
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #79
	bhi _080EE5F4
	ldr r3, _080EE620  @ =0x0000097D
	add r0, r4, r3
	ldrb r0, [r0]
	add r0, r0, #40
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #79
	bhi _080EE5F4
	ldr r1, _080EE624  @ =0x000016F6
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #128
	beq _080EE5F4
	ldr r3, _080EE628  @ =0x00001142
	add r1, r4, r3
	add r1, r6, r1
	sub r3, r3, #112
	add r0, r4, r3
	add r0, r6, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	bne _080EE5F4
	mov r1, #161
	lsl r1, r1, #4
	add r0, r4, r1
	add r3, r3, #32
	add r1, r4, r3
	add r1, r6, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080EE5F4
	ldr r1, _080EE62C  @ =gUnknown_08178A68
	ldr r3, _080EE630  @ =0x000016D5
	add r0, r4, r3
	ldrb r0, [r0]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r2, r0
	beq _080EE5F4
	b _080EE6EC
_080EE5F4:
	ldr r4, _080EE618  @ =gRam
	ldr r1, _080EE634  @ =0x00000FC2
	add r0, r4, r1
	add r6, r5, r0
	ldrb r0, [r6]
	lsl r1, r0, #24
	lsr r3, r1, #24
	cmp r3, #0
	beq _080EE63C
	ldr r2, _080EE638  @ =0x00000F92
	add r0, r4, r2
	add r0, r5, r0
	lsr r1, r1, #28
	mov r2, #1
	and r1, r1, r2
	strb r1, [r0]
	b _080EE72C
	.byte 0x00
	.byte 0x00
_080EE618:
	.4byte gRam
_080EE61C:
	.4byte 0x0000097C
_080EE620:
	.4byte 0x0000097D
_080EE624:
	.4byte 0x000016F6
_080EE628:
	.4byte 0x00001142
_080EE62C:
	.4byte gUnknown_08178A68
_080EE630:
	.4byte 0x000016D5
_080EE634:
	.4byte 0x00000FC2
_080EE638:
	.4byte 0x00000F92
_080EE63C:
	ldr r1, _080EE678  @ =0x00000F52
	add r0, r4, r1
	add r2, r5, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	add r1, r1, #32
	add r0, r4, r1
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	beq _080EE680
	bl GetRandomInt
	ldr r3, _080EE67C  @ =0x00001152
	add r2, r4, r3
	add r2, r5, r2
	mov r1, #7
	and r1, r1, r0
	add r1, r1, #24
	strb r1, [r2]
	bl GetRandomInt
	mov r4, #3
	and r4, r4, r0
	b _080EE6B4
_080EE678:
	.4byte 0x00000F52
_080EE67C:
	.4byte 0x00001152
_080EE680:
	strb r3, [r1]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #48
	strb r1, [r6]
	ldr r1, _080EE6D4  @ =0x00001152
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #12
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080C3028
	add r4, r0, #0
	add r0, r5, #0
	bl sub_080C36D8
	lsl r4, r4, #1
	orr r4, r4, r0
	lsl r4, r4, #24
	lsr r4, r4, #24
_080EE6B4:
	ldr r2, _080EE6D8  @ =gRam
	ldr r3, _080EE6DC  @ =0x00000F22
	add r1, r2, r3
	add r1, r5, r1
	ldr r0, _080EE6E0  @ =gUnknown_08178A6C
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EE6E4  @ =0x00000F12
	add r2, r2, r0
	add r2, r5, r2
	ldr r0, _080EE6E8  @ =gUnknown_08178A70
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r2]
	b _080EE72C
_080EE6D4:
	.4byte 0x00001152
_080EE6D8:
	.4byte gRam
_080EE6DC:
	.4byte 0x00000F22
_080EE6E0:
	.4byte gUnknown_08178A6C
_080EE6E4:
	.4byte 0x00000F12
_080EE6E8:
	.4byte gUnknown_08178A70
_080EE6EC:
	add r0, r5, #0
	mov r1, #32
	bl sub_080C2CB4
	ldr r2, _080EE734  @ =0x00000F22
	add r1, r4, r2
	add r1, r5, r1
	ldr r3, _080EE738  @ =0x00000961
	add r0, r4, r3
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	ldr r0, _080EE73C  @ =0x00000F12
	add r1, r4, r0
	add r1, r5, r1
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	ldr r3, _080EE740  @ =0x00001152
	add r0, r4, r3
	add r0, r5, r0
	mov r1, #16
	strb r1, [r0]
	ldr r0, _080EE744  @ =0x00000F52
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080EE72C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EE734:
	.4byte 0x00000F22
_080EE738:
	.4byte 0x00000961
_080EE73C:
	.4byte 0x00000F12
_080EE740:
	.4byte 0x00001152
_080EE744:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EE578

