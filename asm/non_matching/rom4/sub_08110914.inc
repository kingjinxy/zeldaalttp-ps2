	THUMB_FUNC_START sub_08110914
sub_08110914: @ 0x08110914
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #255
	mov r8, r0
	add r0, r5, #0
	bl sub_081110B0
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _08110936
	b _08110B48
_08110936:
	ldr r6, _081109A0  @ =gRam
	ldr r1, _081109A4  @ =0x00000DA8
	add r0, r6, r1
	ldr r2, _081109A8  @ =0x00000DAA
	add r1, r6, r2
	ldrh r2, [r0]
	ldrh r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	beq _0811094C
	b _08110B30
_0811094C:
	ldr r1, _081109AC  @ =0x00001716
	add r0, r6, r1
	ldrb r0, [r0]
	sub r0, r0, #2
	lsl r0, r0, #24
	cmp r0, #0
	blt _0811095C
	b _08110B30
_0811095C:
	add r0, r5, #0
	bl sub_080C46EC
	lsl r0, r0, #24
	cmp r0, #0
	bne _0811096A
	b _08110B30
_0811096A:
	ldr r2, _081109B0  @ =0x00000F82
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	bl sub_08093078
	ldr r1, _081109B4  @ =0x00001718
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #19
	bne _08110984
	b _08110B30
_08110984:
	cmp r0, #3
	bne _0811098A
	b _08110B30
_0811098A:
	ldr r2, _081109B8  @ =0x00000F52
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _081109BC
	add r0, r5, #0
	bl sub_08111004
	b _08110B48
	.byte 0x00
	.byte 0x00
_081109A0:
	.4byte gRam
_081109A4:
	.4byte 0x00000DA8
_081109A8:
	.4byte 0x00000DAA
_081109AC:
	.4byte 0x00001716
_081109B0:
	.4byte 0x00000F82
_081109B4:
	.4byte 0x00001718
_081109B8:
	.4byte 0x00000F52
_081109BC:
	ldr r0, _08110A4C  @ =0x00000F62
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08110A50  @ =0x00001783
	add r2, r6, r0
	mov r0, #2
	strb r0, [r2]
	ldrb r1, [r1]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08110A32
	add r0, r5, #0
	bl sub_08110700
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _08110A54  @ =0x00001062
	add r0, r6, r2
	add r0, r5, r0
	ldrb r2, [r0]
	cmp r1, r2
	beq _08110A32
	strb r1, [r0]
	ldr r0, _08110A58  @ =0x00001082
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _08110A5C  @ =0x00000FB2
	add r4, r6, r2
	add r4, r5, r4
	ldrb r0, [r4]
	strb r0, [r1]
	ldrb r0, [r4]
	mov r8, r0
	add r0, r5, #0
	bl sub_08111070
	ldr r2, _08110A60  @ =0x00000F22
	add r1, r6, r2
	add r1, r5, r1
	ldr r2, _08110A64  @ =gUnknown_0817D484
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08110A68  @ =0x00000F12
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _08110A6C  @ =gUnknown_0817D48B
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r5, #0
	bl sub_08111054
_08110A32:
	ldr r0, _08110A70  @ =gRam
	ldr r2, _08110A74  @ =0x000009DA
	add r1, r0, r2
	ldrb r1, [r1]
	add r4, r0, #0
	cmp r1, #36
	bne _08110A78
	ldr r0, _08110A50  @ =0x00001783
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	b _08110B48
	.byte 0x00
	.byte 0x00
_08110A4C:
	.4byte 0x00000F62
_08110A50:
	.4byte 0x00001783
_08110A54:
	.4byte 0x00001062
_08110A58:
	.4byte 0x00001082
_08110A5C:
	.4byte 0x00000FB2
_08110A60:
	.4byte 0x00000F22
_08110A64:
	.4byte gUnknown_0817D484
_08110A68:
	.4byte 0x00000F12
_08110A6C:
	.4byte gUnknown_0817D48B
_08110A70:
	.4byte gRam
_08110A74:
	.4byte 0x000009DA
_08110A78:
	ldr r1, _08110A98  @ =0x00000F22
	add r0, r4, r1
	add r1, r5, r0
	ldrb r6, [r1]
	ldr r2, _08110A9C  @ =0x00000F12
	add r0, r4, r2
	add r2, r5, r0
	ldrb r7, [r2]
	mov r0, r8
	cmp r0, #255
	bne _08110AA4
	ldr r1, _08110AA0  @ =0x00000FB2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r3, [r0]
	b _08110AB6
_08110A98:
	.4byte 0x00000F22
_08110A9C:
	.4byte 0x00000F12
_08110AA0:
	.4byte 0x00000FB2
_08110AA4:
	mov r3, r8
	ldr r0, _08110B08  @ =gUnknown_0817D484
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08110B0C  @ =gUnknown_0817D48B
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r2]
_08110AB6:
	ldr r0, _08110B10  @ =0x00000DA8
	add r2, r4, r0
	ldr r0, _08110B14  @ =gUnknown_0817D498
	add r0, r3, r0
	ldrb r0, [r0]
	ldrh r1, [r2]
	add r1, r1, r0
	ldr r0, _08110B18  @ =gUnknown_0817D493
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	strh r1, [r2]
	ldr r1, _08110B1C  @ =0x00000DAA
	add r2, r4, r1
	ldr r0, _08110B20  @ =gUnknown_0817D49F
	add r0, r3, r0
	ldrb r0, [r0]
	ldrh r1, [r2]
	add r1, r1, r0
	ldr r0, _08110B24  @ =gUnknown_0817D4A7
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	strh r1, [r2]
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_08110EF8
	ldr r2, _08110B28  @ =0x00000F22
	add r0, r4, r2
	add r0, r5, r0
	strb r6, [r0]
	ldr r1, _08110B2C  @ =0x00000F12
	add r0, r4, r1
	add r0, r5, r0
	strb r7, [r0]
	b _08110B48
_08110B08:
	.4byte gUnknown_0817D484
_08110B0C:
	.4byte gUnknown_0817D48B
_08110B10:
	.4byte 0x00000DA8
_08110B14:
	.4byte gUnknown_0817D498
_08110B18:
	.4byte gUnknown_0817D493
_08110B1C:
	.4byte 0x00000DAA
_08110B20:
	.4byte gUnknown_0817D49F
_08110B24:
	.4byte gUnknown_0817D4A7
_08110B28:
	.4byte 0x00000F22
_08110B2C:
	.4byte 0x00000F12
_08110B30:
	ldr r1, _08110B54  @ =gRam
	ldr r2, _08110B58  @ =0x00000F82
	add r0, r1, r2
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _08110B48
	ldr r0, _08110B5C  @ =0x00001783
	add r1, r1, r0
	mov r0, #0
	strb r0, [r1]
	strb r0, [r4]
_08110B48:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08110B54:
	.4byte gRam
_08110B58:
	.4byte 0x00000F82
_08110B5C:
	.4byte 0x00001783
	THUMB_FUNC_END sub_08110914

