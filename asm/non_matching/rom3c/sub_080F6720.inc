	THUMB_FUNC_START sub_080F6720
sub_080F6720: @ 0x080F6720
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080F686C  @ =gRam
	ldr r1, _080F6870  @ =0x00000FD2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _080F674A
	ldr r2, _080F6874  @ =0x00000F92
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _080F6878  @ =gUnknown_08179A10
	ldr r3, _080F687C  @ =0x00000FB2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080F674A:
	ldr r0, _080F6880  @ =0x00000D94
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080F6C5C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F6866
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F6866
	ldrb r0, [r6]
	cmp r0, #8
	bne _080F6782
	add r0, r4, #0
	bl sub_080F69C0
_080F6782:
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _080F6884  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080F67C8
	ldr r3, _080F6888  @ =0x000010A2
	add r0, r5, r3
	add r3, r4, r0
	ldrb r0, [r3]
	and r2, r2, r0
	ldr r0, _080F688C  @ =0x00001152
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080F6890  @ =gUnknown_08179A0C
	add r0, r2, r0
	ldrb r0, [r0]
	ldrb r5, [r1]
	add r0, r0, r5
	strb r0, [r1]
	ldr r1, _080F6894  @ =gUnknown_08179A0E
	add r2, r2, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r2, [r2]
	cmp r0, r2
	bne _080F67C8
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_080F67C8:
	add r0, r4, #0
	bl sub_080C2C4C
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r5, _080F686C  @ =gRam
	ldr r1, _080F6898  @ =0x0000097C
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #40
	cmp r0, #79
	bgt _080F684E
	ldr r2, _080F689C  @ =0x0000097D
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, #40
	cmp r0, #79
	bgt _080F684E
	ldr r3, _080F68A0  @ =0x000016F6
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #128
	beq _080F684E
	mov r1, #1
	ldr r2, _080F68A4  @ =0x00001804
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F680E
	sub r3, r3, #12
	add r0, r5, r3
	ldrb r0, [r0]
	sub r0, r0, #9
	lsr r1, r0, #31
_080F680E:
	cmp r1, #0
	beq _080F684E
	add r0, r4, #0
	mov r1, #48
	bl sub_080C2CB4
	ldr r0, _080F68A8  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080F68AC  @ =0x00000961
	add r0, r5, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	ldr r3, _080F68B0  @ =0x00000F12
	add r1, r5, r3
	add r1, r4, r1
	sub r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	add r3, r3, #176
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #8
	strb r1, [r0]
	ldr r1, _080F68B4  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
_080F684E:
	ldr r1, _080F68B8  @ =gUnknown_08179A14
	ldr r0, _080F686C  @ =gRam
	ldr r2, _080F68B4  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F6866:
	pop {r4-r6}
	pop {r0}
	bx r0
_080F686C:
	.4byte gRam
_080F6870:
	.4byte 0x00000FD2
_080F6874:
	.4byte 0x00000F92
_080F6878:
	.4byte gUnknown_08179A10
_080F687C:
	.4byte 0x00000FB2
_080F6880:
	.4byte 0x00000D94
_080F6884:
	.4byte 0x00000996
_080F6888:
	.4byte 0x000010A2
_080F688C:
	.4byte 0x00001152
_080F6890:
	.4byte gUnknown_08179A0C
_080F6894:
	.4byte gUnknown_08179A0E
_080F6898:
	.4byte 0x0000097C
_080F689C:
	.4byte 0x0000097D
_080F68A0:
	.4byte 0x000016F6
_080F68A4:
	.4byte 0x00001804
_080F68A8:
	.4byte 0x00000F22
_080F68AC:
	.4byte 0x00000961
_080F68B0:
	.4byte 0x00000F12
_080F68B4:
	.4byte 0x00000F52
_080F68B8:
	.4byte gUnknown_08179A14
	THUMB_FUNC_END sub_080F6720

