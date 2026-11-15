	THUMB_FUNC_START sub_080DB61C
sub_080DB61C: @ 0x080DB61C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080DB650  @ =gRam
	ldr r2, _080DB654  @ =0x00000F72
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r5, r1, #0
	cmp r0, #0
	bne _080DB65C
	ldr r1, _080DB658  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #2
	and r0, r0, r1
	add r1, r0, #2
	mov r0, #1
	orr r1, r1, r0
	b _080DB672
	.byte 0x00
	.byte 0x00
_080DB650:
	.4byte gRam
_080DB654:
	.4byte 0x00000F72
_080DB658:
	.4byte 0x00000996
_080DB65C:
	ldr r2, _080DB6A4  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DB670
	add r0, r4, #0
	mov r1, #32
	bl sub_080C35FC
_080DB670:
	mov r1, #5
_080DB672:
	ldr r2, _080DB6A8  @ =0x00001122
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080DB6AC  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DB688
	b _080DB8EC
_080DB688:
	mov r7, #0
	mov r2, #0
	mov r9, r2
	mov r8, r2
	add r1, r1, #32
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DB6B0
	add r0, r4, #0
	bl sub_080C6240
	b _080DB6B6
_080DB6A4:
	.4byte 0x00000FC2
_080DB6A8:
	.4byte 0x00001122
_080DB6AC:
	.4byte 0x00000F52
_080DB6B0:
	add r0, r4, #0
	bl sub_080DBAA4
_080DB6B6:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	beq _080DB6C6
	b _080DB964
_080DB6C6:
	ldr r5, _080DB700  @ =gRam
	ldr r2, _080DB704  @ =0x00001052
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DB718
	ldr r1, _080DB708  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	ldr r2, _080DB70C  @ =0x00000F72
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DB710
	mov r0, #1
	mov r9, r0
	b _080DB712
_080DB700:
	.4byte gRam
_080DB704:
	.4byte 0x00001052
_080DB708:
	.4byte 0x00000FA2
_080DB70C:
	.4byte 0x00000F72
_080DB710:
	mov r7, #1
_080DB712:
	cmp r7, #0
	bne _080DB718
	b _080DB84E
_080DB718:
	ldr r5, _080DB794  @ =gRam
	ldr r1, _080DB798  @ =0x00000F62
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _080DB730
	ldr r2, _080DB79C  @ =0x00001172
	add r0, r5, r2
	ldrb r7, [r0]
	cmp r7, #0
	beq _080DB7C0
_080DB730:
	add r0, r4, #0
	bl sub_080C4F98
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DB746
	b _080DB84A
_080DB746:
	ldr r1, _080DB7A0  @ =0x00000F72
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DB7B0
	add r0, r4, #0
	mov r1, #113
	bl sub_080CF0AC
	add r0, r4, #0
	mov r1, #92
	bl sub_080CF140
	add r0, r4, #0
	mov r1, #48
	bl sub_080C35FC
	ldr r2, _080DB7A4  @ =0x00000F22
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _080DB7A8  @ =0x00000961
	add r0, r5, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	ldr r0, _080DB7AC  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	sub r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	b _080DB84A
	.byte 0x00
	.byte 0x00
_080DB794:
	.4byte gRam
_080DB798:
	.4byte 0x00000F62
_080DB79C:
	.4byte 0x00001172
_080DB7A0:
	.4byte 0x00000F72
_080DB7A4:
	.4byte 0x00000F22
_080DB7A8:
	.4byte 0x00000961
_080DB7AC:
	.4byte 0x00000F12
_080DB7B0:
	ldr r1, _080DB7BC  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _080DB854
_080DB7BC:
	.4byte 0x00000FA2
_080DB7C0:
	ldr r2, _080DB8B8  @ =0x00000EE2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r6, r5, r1
	strb r0, [r6]
	add r2, r2, #32
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #151
	lsl r2, r2, #4
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080DB8BC  @ =0x00000964
	add r0, r5, r1
	mov r1, #15
	strb r1, [r0]
	sub r2, r2, #11
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080DB8C0  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	sub r2, r2, #4
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080DB8C4  @ =0x00000EF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r2, #16
	add r0, r5, r2
	strb r1, [r0]
	mov r0, #0
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DB84A
	mov r0, #160
	strb r0, [r6]
	mov r0, #0
	mov r1, #16
	bl sub_080C414C
	ldr r1, _080DB8C8  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r7, [r0]
	ldr r2, _080DB8CC  @ =0x00000F22
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _080DB8D0  @ =0x00001112
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080DB8D4  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	sub r2, r2, #16
	add r0, r5, r2
	strb r1, [r0]
_080DB84A:
	mov r0, #1
	mov r8, r0
_080DB84E:
	mov r1, r9
	cmp r1, #0
	beq _080DB862
_080DB854:
	add r0, r4, #0
	mov r1, #95
	bl sub_080CF140
	add r0, r4, #0
	bl sub_080DB990
_080DB862:
	mov r2, r8
	cmp r2, #0
	bne _080DB86A
	b _080DB964
_080DB86A:
	ldr r5, _080DB8D8  @ =gRam
	ldr r1, _080DB8DC  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	ldr r2, _080DB8E0  @ =0x00000F72
	add r7, r5, r2
	add r6, r4, r7
	ldrb r1, [r6]
	orr r0, r0, r1
	cmp r0, #0
	bne _080DB964
	mov r0, #123
	add r1, r4, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080DB964
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r1, _080DB8E4  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #15
	strb r1, [r0]
	ldr r2, _080DB8E8  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r1, r4, r7
	ldrb r0, [r6]
	b _080DB962
	.byte 0x00
	.byte 0x00
_080DB8B8:
	.4byte 0x00000EE2
_080DB8BC:
	.4byte 0x00000964
_080DB8C0:
	.4byte 0x00000ED2
_080DB8C4:
	.4byte 0x00000EF2
_080DB8C8:
	.4byte 0x00000FA2
_080DB8CC:
	.4byte 0x00000F22
_080DB8D0:
	.4byte 0x00001112
_080DB8D4:
	.4byte 0x00000F12
_080DB8D8:
	.4byte gRam
_080DB8DC:
	.4byte 0x00000996
_080DB8E0:
	.4byte 0x00000F72
_080DB8E4:
	.4byte 0x00000FC2
_080DB8E8:
	.4byte 0x00000F52
_080DB8EC:
	ldr r1, _080DB900  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bne _080DB904
	add r0, r4, #0
	bl sub_080C58F0
	b _080DB90A
_080DB900:
	.4byte 0x00000F92
_080DB904:
	add r0, r4, #0
	bl sub_080C6240
_080DB90A:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DB964
	ldr r6, _080DB974  @ =gRam
	ldr r2, _080DB978  @ =0x00001172
	add r0, r6, r2
	add r0, r4, r0
	ldr r2, _080DB97C  @ =0x00000FC2
	add r1, r6, r2
	add r5, r4, r1
	ldrb r1, [r5]
	strb r1, [r0]
	ldrb r1, [r5]
	cmp r1, #0
	bne _080DB936
	sub r2, r2, #32
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
_080DB936:
	ldrb r0, [r5]
	cmp r0, #6
	bne _080DB954
	ldr r1, _080DB980  @ =0x00000F22
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	ldr r2, _080DB984  @ =0x00000F12
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite3_Move
_080DB954:
	ldr r0, _080DB988  @ =0x00000F92
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080DB98C  @ =gUnknown_08175E60
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
_080DB962:
	strb r0, [r1]
_080DB964:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DB974:
	.4byte gRam
_080DB978:
	.4byte 0x00001172
_080DB97C:
	.4byte 0x00000FC2
_080DB980:
	.4byte 0x00000F22
_080DB984:
	.4byte 0x00000F12
_080DB988:
	.4byte 0x00000F92
_080DB98C:
	.4byte gUnknown_08175E60
	THUMB_FUNC_END sub_080DB61C

