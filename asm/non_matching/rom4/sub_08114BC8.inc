	THUMB_FUNC_START sub_08114BC8
sub_08114BC8: @ 0x08114BC8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r1, _08114CB4  @ =gRam
	ldr r2, _08114CB8  @ =0x00001770
	add r0, r1, r2
	ldrb r7, [r0]
	add r5, r1, #0
	cmp r7, #0
	beq _08114BDE
	b _08114DA8
_08114BDE:
	ldr r3, _08114CBC  @ =0x000009AD
	add r3, r3, r5
	mov r8, r3
	ldrb r1, [r3]
	cmp r1, #11
	bne _08114BEC
	b _08114DA8
_08114BEC:
	ldr r2, _08114CC0  @ =0x000009AC
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #9
	bne _08114BFC
	cmp r1, #35
	bne _08114BFC
	b _08114DA8
_08114BFC:
	cmp r0, #14
	bne _08114C0C
	cmp r1, #1
	bne _08114C06
	b _08114DA8
_08114C06:
	cmp r1, #2
	bne _08114C0C
	b _08114DA8
_08114C0C:
	ldr r3, _08114CC4  @ =0x000016D6
	add r0, r5, r3
	ldr r2, _08114CC8  @ =0x000016D7
	add r1, r5, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _08114C20
	b _08114DA8
_08114C20:
	add r3, r3, #130
	add r4, r5, r3
	ldrb r0, [r4]
	add r0, r0, #1
	mov r1, #20
	bl __modsi3
	lsl r0, r0, #24
	lsr r6, r0, #24
	strb r6, [r4]
	ldr r1, _08114CCC  @ =0x000016C8
	add r0, r5, r1
	ldrb r0, [r0]
	mov r1, #0
	cmp r0, #239
	bhi _08114C42
	add r1, r0, #0
_08114C42:
	mov r3, #150
	lsl r3, r3, #4
	add r2, r5, r3
	strb r1, [r2]
	ldr r0, _08114CD0  @ =0x00000961
	add r3, r5, r0
	strb r7, [r3]
	ldr r7, _08114CD4  @ =gUnknown_0200EBF0
	add r1, r6, r7
	ldrb r0, [r2]
	strb r0, [r1]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r5, r1
	ldrh r0, [r0]
	ldrh r1, [r2]
	sub r0, r0, r1
	strh r0, [r2]
	sub r7, r7, #80
	add r1, r6, r7
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _08114CD8  @ =gUnknown_0200EBB4
	add r1, r6, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r2, _08114CDC  @ =gUnknown_0200EBC8
	add r1, r6, r2
	ldr r3, _08114CE0  @ =0x000016C4
	add r0, r5, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r7, r7, #60
	add r1, r6, r7
	ldr r2, _08114CE4  @ =0x000016C5
	add r0, r5, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _08114CE8  @ =gUnknown_0200EC04
	add r4, r6, r3
	ldr r7, _08114CEC  @ =0x000016D5
	add r0, r5, r7
	ldrb r0, [r0]
	lsr r3, r0, #1
	strb r3, [r4]
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #15
	bne _08114CFC
	ldr r2, _08114CF0  @ =gUnknown_0817E9EC
	ldr r1, _08114CF4  @ =gUnknown_0815353B
	ldr r7, _08114CF8  @ =0x00000B32
	add r0, r5, r7
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	b _08114D28
_08114CB4:
	.4byte gRam
_08114CB8:
	.4byte 0x00001770
_08114CBC:
	.4byte 0x000009AD
_08114CC0:
	.4byte 0x000009AC
_08114CC4:
	.4byte 0x000016D6
_08114CC8:
	.4byte 0x000016D7
_08114CCC:
	.4byte 0x000016C8
_08114CD0:
	.4byte 0x00000961
_08114CD4:
	.4byte gUnknown_0200EBF0
_08114CD8:
	.4byte gUnknown_0200EBB4
_08114CDC:
	.4byte gUnknown_0200EBC8
_08114CE0:
	.4byte 0x000016C4
_08114CE4:
	.4byte 0x000016C5
_08114CE8:
	.4byte gUnknown_0200EC04
_08114CEC:
	.4byte 0x000016D5
_08114CF0:
	.4byte gUnknown_0817E9EC
_08114CF4:
	.4byte gUnknown_0815353B
_08114CF8:
	.4byte 0x00000B32
_08114CFC:
	cmp r0, #8
	bne _08114D3C
	ldr r1, _08114D34  @ =0x00001727
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _08114D3C
	mov r2, #175
	lsl r2, r2, #4
	add r0, r5, r2
	ldrh r0, [r0]
	cmp r0, #2
	beq _08114D3C
	ldr r2, _08114D38  @ =gUnknown_0817E9EC
	mov r7, #161
	lsl r7, r7, #4
	add r0, r5, r7
	ldrb r1, [r0]
	mov r0, #1
	eor r0, r0, r1
_08114D28:
	add r0, r0, r2
	ldrb r0, [r0]
	lsr r0, r0, #2
	orr r3, r3, r0
	strb r3, [r4]
	b _08114D56
_08114D34:
	.4byte 0x00001727
_08114D38:
	.4byte gUnknown_0817E9EC
_08114D3C:
	ldr r0, _08114D64  @ =gUnknown_0200EC04
	add r2, r6, r0
	ldr r1, _08114D68  @ =gUnknown_0817E9EC
	mov r3, #161
	lsl r3, r3, #4
	add r0, r5, r3
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	ldrb r1, [r2]
	orr r0, r0, r1
	strb r0, [r2]
_08114D56:
	ldr r7, _08114D6C  @ =0x00001718
	add r0, r5, r7
	ldrb r0, [r0]
	cmp r0, #4
	bne _08114D70
	mov r2, #32
	b _08114D9E
_08114D64:
	.4byte gUnknown_0200EC04
_08114D68:
	.4byte gUnknown_0817E9EC
_08114D6C:
	.4byte 0x00001718
_08114D70:
	cmp r0, #19
	bne _08114D8A
	ldr r1, _08114DB8  @ =0x00001810
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08114D8A
	ldr r2, _08114DBC  @ =gUnknown_0200EC04
	add r0, r6, r2
	ldrb r1, [r0]
	mov r2, #16
	orr r1, r1, r2
	strb r1, [r0]
_08114D8A:
	ldr r3, _08114DC0  @ =0x000017E1
	add r0, r5, r3
	ldrb r0, [r0]
	mov r2, #0
	cmp r0, #0
	beq _08114D9E
	mov r2, #64
	cmp r0, #1
	bne _08114D9E
	mov r2, #128
_08114D9E:
	ldr r7, _08114DBC  @ =gUnknown_0200EC04
	add r1, r6, r7
	ldrb r0, [r1]
	orr r2, r2, r0
	strb r2, [r1]
_08114DA8:
	bl sub_08115EA8
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08114DB8:
	.4byte 0x00001810
_08114DBC:
	.4byte gUnknown_0200EC04
_08114DC0:
	.4byte 0x000017E1
	THUMB_FUNC_END sub_08114BC8

