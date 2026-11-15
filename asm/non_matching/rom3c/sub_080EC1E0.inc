	THUMB_FUNC_START sub_080EC1E0
sub_080EC1E0: @ 0x080EC1E0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #20
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080EC280  @ =gRam
	ldr r1, _080EC284  @ =0x00000F72
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #0
	beq _080EC200
	b _080EC300
_080EC200:
	ldr r2, _080EC288  @ =0x000010B2
	add r0, r6, r2
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _080EC232
	ldr r2, _080EC28C  @ =0x00000F52
	add r0, r6, r2
	add r0, r5, r0
	strb r1, [r0]
	ldr r1, _080EC290  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #32
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080C351C
	add r0, r5, #0
	bl sub_080C2FA8
	ldr r2, _080EC294  @ =0x00001082
	add r1, r6, r2
	add r1, r5, r1
	strb r0, [r1]
_080EC232:
	ldrb r4, [r4]
	cmp r4, #1
	bne _080EC246
	add r0, r5, #0
	bl sub_080EC810
	ldr r1, _080EC298  @ =0x00001052
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
_080EC246:
	ldr r2, _080EC29C  @ =0x00000F92
	add r3, r6, r2
	add r3, r5, r3
	ldr r4, _080EC2A0  @ =gUnknown_08178408
	ldr r0, _080EC2A4  @ =0x00000FB2
	add r1, r6, r0
	add r1, r5, r1
	add r2, r2, #192
	add r0, r6, r2
	add r0, r5, r0
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	lsl r0, r0, #2
	ldrb r1, [r1]
	add r0, r0, r1
	add r0, r0, r4
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r4, _080EC2A8  @ =0x00000FF2
	add r0, r6, r4
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #167
	beq _080EC2AC
	add r0, r5, #0
	bl sub_080EC8CC
	b _080EC2B2
_080EC280:
	.4byte gRam
_080EC284:
	.4byte 0x00000F72
_080EC288:
	.4byte 0x000010B2
_080EC28C:
	.4byte 0x00000F52
_080EC290:
	.4byte 0x00000FC2
_080EC294:
	.4byte 0x00001082
_080EC298:
	.4byte 0x00001052
_080EC29C:
	.4byte 0x00000F92
_080EC2A0:
	.4byte gUnknown_08178408
_080EC2A4:
	.4byte 0x00000FB2
_080EC2A8:
	.4byte 0x00000FF2
_080EC2AC:
	add r0, r5, #0
	bl sub_080EC000
_080EC2B2:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EC2C0
	b _080EC45E
_080EC2C0:
	add r0, r5, #0
	bl sub_080C1FD0
	add r0, r5, #0
	bl sub_080C5044
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C7A20
	ldr r1, _080EC2F4  @ =gUnknown_08178410
	ldr r0, _080EC2F8  @ =gRam
	ldr r2, _080EC2FC  @ =0x00000F52
	add r0, r0, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	b _080EC45E
	.byte 0x00
	.byte 0x00
_080EC2F4:
	.4byte gUnknown_08178410
_080EC2F8:
	.4byte gRam
_080EC2FC:
	.4byte 0x00000F52
_080EC300:
	add r0, r5, #0
	bl sub_080EC9D4
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EC314
	b _080EC45E
_080EC314:
	ldr r4, _080EC390  @ =0x00000F92
	add r2, r6, r4
	add r2, r5, r2
	ldr r1, _080EC394  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	add r0, r5, #0
	bl sub_080C4F98
	add r0, r5, #0
	bl Sprite3_Move
	ldr r2, _080EC398  @ =0x00001622
	add r0, r6, r2
	ldrb r0, [r0]
	str r0, [sp]
	ldr r4, _080EC39C  @ =0x00001623
	add r0, r6, r4
	ldrb r0, [r0]
	str r0, [sp, #4]
	ldr r1, _080EC3A0  @ =0x00001624
	add r0, r6, r1
	ldrb r0, [r0]
	str r0, [sp, #8]
	add r2, r2, #3
	add r0, r6, r2
	ldrb r0, [r0]
	str r0, [sp, #12]
	mov r7, #0
	ldr r4, _080EC3A4  @ =gRam
	ldr r1, _080EC3A8  @ =0x00000F12
	add r0, r4, r1
	add r0, r5, r0
	str r0, [sp, #16]
_080EC360:
	ldr r4, [sp, #4]
	lsl r2, r4, #8
	ldr r0, [sp]
	orr r2, r2, r0
	ldr r1, [sp, #12]
	lsl r3, r1, #8
	ldr r4, [sp, #8]
	orr r3, r3, r4
	ldr r1, _080EC3A4  @ =gRam
	ldr r4, _080EC3AC  @ =0x00000F22
	add r0, r1, r4
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #0
	beq _080EC3BC
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080EC3B0
	mov r0, #8
	lsl r0, r0, r7
	add r0, r2, r0
	b _080EC3B6
	.byte 0x00
	.byte 0x00
_080EC390:
	.4byte 0x00000F92
_080EC394:
	.4byte 0x00000996
_080EC398:
	.4byte 0x00001622
_080EC39C:
	.4byte 0x00001623
_080EC3A0:
	.4byte 0x00001624
_080EC3A4:
	.4byte gRam
_080EC3A8:
	.4byte 0x00000F12
_080EC3AC:
	.4byte 0x00000F22
_080EC3B0:
	mov r0, #8
	lsl r0, r0, r7
	sub r0, r2, r0
_080EC3B6:
	lsl r0, r0, #16
	lsr r2, r0, #16
	b _080EC3DE
_080EC3BC:
	ldr r0, [sp, #16]
	ldrb r1, [r0]
	cmp r1, #0
	beq _080EC3DE
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080EC3D4
	mov r0, #8
	lsl r0, r0, r7
	add r0, r3, r0
	b _080EC3DA
_080EC3D4:
	mov r0, #8
	lsl r0, r0, r7
	sub r0, r3, r0
_080EC3DA:
	lsl r0, r0, #16
	lsr r3, r0, #16
_080EC3DE:
	ldr r4, _080EC470  @ =gRam
	ldr r1, _080EC474  @ =0x00001622
	add r1, r1, r4
	mov r10, r1
	strb r2, [r1]
	lsr r0, r2, #8
	ldr r2, _080EC478  @ =0x00001623
	add r2, r2, r4
	mov r9, r2
	strb r0, [r2]
	ldr r0, _080EC47C  @ =0x00001624
	add r0, r0, r4
	mov r8, r0
	strb r3, [r0]
	lsr r0, r3, #8
	ldr r1, _080EC480  @ =0x00001625
	add r6, r4, r1
	strb r0, [r6]
	add r0, r5, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EC41E
	ldr r2, _080EC484  @ =0x00000FA2
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080C444C
_080EC41E:
	add r7, r7, #1
	cmp r7, #1
	ble _080EC360
	mov r2, sp
	ldrb r0, [r2]
	mov r2, r10
	strb r0, [r2]
	mov r1, sp
	ldrb r2, [r1, #4]
	mov r1, r9
	strb r2, [r1]
	mov r0, sp
	ldrb r1, [r0, #8]
	mov r0, r8
	strb r1, [r0]
	mov r2, sp
	ldrb r2, [r2, #12]
	strb r2, [r6]
	add r0, r5, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EC45E
	ldr r1, _080EC484  @ =0x00000FA2
	add r0, r4, r1
	add r0, r5, r0
	mov r2, #0
	strb r2, [r0]
	add r0, r5, #0
	bl sub_080C444C
_080EC45E:
	add sp, sp, #20
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EC470:
	.4byte gRam
_080EC474:
	.4byte 0x00001622
_080EC478:
	.4byte 0x00001623
_080EC47C:
	.4byte 0x00001624
_080EC480:
	.4byte 0x00001625
_080EC484:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080EC1E0

