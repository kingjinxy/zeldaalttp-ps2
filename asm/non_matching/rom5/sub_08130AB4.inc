	THUMB_FUNC_START sub_08130AB4
sub_08130AB4: @ 0x08130AB4
	push {r4-r7,lr}
	ldr r1, _08130AE0  @ =gRam
	ldr r0, _08130AE4  @ =0x000009B5
	add r5, r1, r0
	mov r0, #0
	strb r0, [r5]
	ldr r3, _08130AE8  @ =0x000019C6
	ldr r2, _08130AEC  @ =0x000009C6
	add r4, r1, r2
	ldrh r2, [r4]
	cmp r2, #128
	bne _08130AF8
	ldr r2, _08130AF0  @ =0x000009DA
	add r0, r1, r2
	ldrh r1, [r0]
	ldr r0, _08130AF4  @ =0x00000181
	cmp r1, r0
	bne _08130B20
	mov r0, #1
	strb r0, [r5]
	b _08130B12
	.byte 0x00
	.byte 0x00
_08130AE0:
	.4byte gRam
_08130AE4:
	.4byte 0x000009B5
_08130AE8:
	.4byte 0x000019C6
_08130AEC:
	.4byte 0x000009C6
_08130AF0:
	.4byte 0x000009DA
_08130AF4:
	.4byte 0x00000181
_08130AF8:
	cmp r2, #129
	beq _08130B20
	ldr r3, _08130BB0  @ =0x00002A32
	cmp r2, #91
	beq _08130B20
	mov r0, #191
	and r2, r2, r0
	cmp r2, #3
	beq _08130B20
	cmp r2, #5
	beq _08130B20
	cmp r2, #7
	beq _08130B20
_08130B12:
	ldr r3, _08130BB4  @ =0x00002669
	ldrh r1, [r4]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08130B20
	ldr r3, _08130BB0  @ =0x00002A32
_08130B20:
	add r0, r3, #0
	bl sub_08133468
	lsl r0, r0, #16
	lsr r3, r0, #16
	ldr r0, _08130BB8  @ =gUnknown_02000C50
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	ldr r0, _08130BBC  @ =gUnknown_02000850
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	ldr r2, _08130BC0  @ =gRam
	ldr r4, _08130BC4  @ =0x000009CC
	add r0, r2, r4
	strh r3, [r0]
	ldr r0, _08130BC8  @ =0x000009D6
	add r1, r2, r0
	mov r0, #32
	strb r0, [r1]
	add r4, r4, #11
	add r1, r2, r4
	mov r0, #64
	strb r0, [r1]
	ldr r0, _08130BCC  @ =0x000009D8
	add r1, r2, r0
	mov r0, #128
	strb r0, [r1]
	ldr r1, _08130BD0  @ =0x000009C6
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08130C3C
	cmp r0, #112
	bne _08130B8A
	b _08130D76
_08130B8A:
	cmp r0, #64
	beq _08130C3C
	cmp r0, #91
	beq _08130C3C
	cmp r0, #3
	beq _08130C3C
	cmp r0, #5
	beq _08130C3C
	cmp r0, #7
	beq _08130C3C
	mov r5, #74
	mov r3, #135
	cmp r0, #67
	beq _08130BD4
	cmp r0, #69
	beq _08130BD4
	sub r4, r4, #60
	add r1, r2, r4
	b _08130D84
_08130BB0:
	.4byte 0x00002A32
_08130BB4:
	.4byte 0x00002669
_08130BB8:
	.4byte gUnknown_02000C50
_08130BBC:
	.4byte gUnknown_02000850
_08130BC0:
	.4byte gRam
_08130BC4:
	.4byte 0x000009CC
_08130BC8:
	.4byte 0x000009D6
_08130BCC:
	.4byte 0x000009D8
_08130BD0:
	.4byte 0x000009C6
_08130BD4:
	ldr r4, _08130CBC  @ =gRam
	ldr r0, _08130CC0  @ =0x000009D6
	add r1, r4, r0
	mov r0, #38
	strb r0, [r1]
	ldr r1, _08130CC4  @ =0x000009D7
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08130CC8  @ =0x000009D8
	add r0, r4, r2
	strb r3, [r0]
	mov r1, #31
	add r0, r3, #0
	and r0, r0, r1
	lsl r2, r0, #10
	add r0, r5, #0
	and r0, r0, r1
	lsl r1, r0, #5
	orr r2, r2, r1
	orr r2, r2, r0
	add r0, r2, #0
	bl sub_08133468
	lsl r0, r0, #16
	lsr r3, r0, #16
	ldr r0, _08130CCC  @ =gUnknown_02000C50
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	ldr r0, _08130CD0  @ =gUnknown_02000850
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	add r0, r0, #32
	strh r3, [r0]
	ldr r0, _08130CD4  @ =0x000009CC
	add r4, r4, r0
	strh r3, [r4]
_08130C3C:
	ldr r2, _08130CBC  @ =gRam
	ldr r1, _08130CD8  @ =0x000009AD
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #4
	beq _08130D28
	ldr r4, _08130CDC  @ =0x00000958
	add r0, r2, r4
	ldrh r3, [r0]
	ldr r0, _08130CE0  @ =0x0000095E
	add r6, r2, r0
	strh r3, [r6]
	sub r1, r1, #91
	add r4, r2, r1
	ldrh r5, [r4]
	sub r0, r0, #2
	add r7, r2, r0
	strh r5, [r7]
	add r1, r1, #116
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #27
	beq _08130C70
	b _08130D76
_08130C70:
	mov r2, #0
	ldrsh r0, [r4, r2]
	ldr r4, _08130CE4  @ =0xFFFFF888
	add r0, r0, r4
	lsl r0, r0, #15
	lsr r2, r0, #16
	add r1, r2, #0
	mov r0, #128
	lsl r0, r0, #7
	and r0, r0, r2
	cmp r0, #0
	beq _08130C8E
	mov r1, #128
	lsl r1, r1, #8
	orr r1, r1, r2
_08130C8E:
	sub r0, r5, r1
	strh r0, [r7]
	add r2, r3, #0
	lsl r1, r2, #16
	ldr r0, _08130CE8  @ =0x06BF0000
	cmp r1, r0
	ble _08130D00
	ldr r1, _08130CEC  @ =0xFFFFFA00
	add r0, r2, r1
	ldr r2, _08130CF0  @ =0x000003FF
	add r1, r2, #0
	and r0, r0, r1
	lsl r2, r0, #16
	ldr r1, _08130CF4  @ =0x0000017F
	cmp r0, r1
	bhi _08130CF8
	lsr r0, r2, #17
	mov r4, #194
	lsl r4, r4, #3
	add r0, r0, r4
	strh r0, [r6]
	b _08130D76
	.byte 0x00
	.byte 0x00
_08130CBC:
	.4byte gRam
_08130CC0:
	.4byte 0x000009D6
_08130CC4:
	.4byte 0x000009D7
_08130CC8:
	.4byte 0x000009D8
_08130CCC:
	.4byte gUnknown_02000C50
_08130CD0:
	.4byte gUnknown_02000850
_08130CD4:
	.4byte 0x000009CC
_08130CD8:
	.4byte 0x000009AD
_08130CDC:
	.4byte 0x00000958
_08130CE0:
	.4byte 0x0000095E
_08130CE4:
	.4byte 0xFFFFF888
_08130CE8:
	.4byte 0x06BF0000
_08130CEC:
	.4byte 0xFFFFFA00
_08130CF0:
	.4byte 0x000003FF
_08130CF4:
	.4byte 0x0000017F
_08130CF8:
	mov r0, #216
	lsl r0, r0, #3
	strh r0, [r6]
	b _08130D76
_08130D00:
	mov r0, #255
	and r0, r0, r3
	lsr r0, r0, #1
	mov r2, #192
	lsl r2, r2, #3
	add r1, r2, #0
	orr r0, r0, r1
	mov r1, #0
	orr r0, r0, r1
	strh r0, [r6]
	ldr r1, _08130D24  @ =0x0000060F
	cmp r0, r1
	bgt _08130D76
	mov r0, #194
	lsl r0, r0, #3
	strh r0, [r6]
	b _08130D76
	.byte 0x00
	.byte 0x00
_08130D24:
	.4byte 0x0000060F
_08130D28:
	ldr r4, _08130D60  @ =0x000009C6
	add r0, r2, r4
	ldrh r1, [r0]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #27
	bne _08130D76
	ldr r1, _08130D64  @ =0x00000958
	add r0, r2, r1
	ldrh r0, [r0]
	sub r4, r4, #104
	add r3, r2, r4
	strh r0, [r3]
	sub r1, r1, #6
	add r0, r2, r1
	ldrh r0, [r0]
	sub r4, r4, #2
	add r1, r2, r4
	strh r0, [r1]
	ldr r4, _08130D68  @ =0x00000AB6
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #8
	beq _08130D70
	ldr r0, _08130D6C  @ =0x00000838
	strh r0, [r1]
	b _08130D76
	.byte 0x00
	.byte 0x00
_08130D60:
	.4byte 0x000009C6
_08130D64:
	.4byte 0x00000958
_08130D68:
	.4byte 0x00000AB6
_08130D6C:
	.4byte 0x00000838
_08130D70:
	mov r0, #216
	lsl r0, r0, #3
	strh r0, [r3]
_08130D76:
	ldr r1, _08130D90  @ =gRam
	ldr r0, _08130D94  @ =0x000009B5
	add r2, r1, r0
	mov r0, #0
	strb r0, [r2]
	ldr r2, _08130D98  @ =0x0000099B
	add r1, r1, r2
_08130D84:
	mov r0, #1
	strb r0, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08130D90:
	.4byte gRam
_08130D94:
	.4byte 0x000009B5
_08130D98:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08130AB4

