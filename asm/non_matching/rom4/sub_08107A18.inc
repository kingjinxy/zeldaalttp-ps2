	THUMB_FUNC_START sub_08107A18
sub_08107A18: @ 0x08107A18
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r5, #0
	mov r9, r5
	ldr r1, _08107A5C  @ =gRam
	ldr r2, _08107A60  @ =0x00001002
	add r0, r1, r2
	add r4, r7, r0
	ldrb r0, [r4]
	add r2, r1, #0
	cmp r0, #255
	bne _08107A70
	ldr r3, _08107A64  @ =0x00000FC2
	add r0, r2, r3
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08107A50
	add r0, r7, #0
	bl sub_080C3028
	lsl r0, r0, #24
	cmp r0, #0
	bne _08107A68
_08107A50:
	mov r0, r9
	strb r0, [r4]
	mov r1, #1
	mov r9, r1
	b _08107A6A
	.byte 0x00
	.byte 0x00
_08107A5C:
	.4byte gRam
_08107A60:
	.4byte 0x00001002
_08107A64:
	.4byte 0x00000FC2
_08107A68:
	mov r5, #1
_08107A6A:
	cmp r5, #0
	bne _08107A70
	b _08107BD8
_08107A70:
	ldr r1, _08107ABC  @ =gRam
	ldr r0, _08107AC0  @ =gUnknown_02010990
	ldrb r2, [r0]
	ldr r3, _08107AC4  @ =0x00000968
	add r0, r1, r3
	strb r2, [r0]
	ldr r2, _08107AC8  @ =0x00000F02
	add r0, r1, r2
	add r0, r7, r0
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _08107ACC  @ =gUnknown_02010991
	ldrb r2, [r0]
	add r3, r3, #3
	add r0, r1, r3
	strb r2, [r0]
	ldr r2, _08107AD0  @ =0x00000EF2
	add r0, r1, r2
	add r0, r7, r0
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _08107AD4  @ =0x00001002
	add r1, r1, r0
	add r1, r7, r1
	ldrb r1, [r1]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08107AD8
	add r0, r7, #0
	mov r1, #8
	bl sub_080C2DCC
	b _08107AE0
_08107ABC:
	.4byte gRam
_08107AC0:
	.4byte gUnknown_02010990
_08107AC4:
	.4byte 0x00000968
_08107AC8:
	.4byte 0x00000F02
_08107ACC:
	.4byte gUnknown_02010991
_08107AD0:
	.4byte 0x00000EF2
_08107AD4:
	.4byte 0x00001002
_08107AD8:
	add r0, r7, #0
	mov r1, #16
	bl sub_080C2DCC
_08107AE0:
	ldr r5, _08107B30  @ =gRam
	ldr r1, _08107B34  @ =0x00000F12
	add r0, r5, r1
	add r0, r7, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _08107B38  @ =0x00000F22
	add r0, r5, r3
	add r0, r7, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	sub r3, r3, #64
	add r0, r5, r3
	add r0, r7, r0
	ldrb r0, [r0]
	mov r8, r0
	ldr r0, _08107B3C  @ =0x00000ED2
	add r4, r5, r0
	add r4, r7, r4
	ldrb r6, [r4]
	add r0, r7, #0
	bl Sprite3_Move
	ldrb r0, [r4]
	sub r6, r6, r0
	ldr r1, _08107B40  @ =0x0000179A
	add r5, r5, r1
	strh r6, [r5]
	mov r0, #128
	and r0, r0, r6
	cmp r0, #0
	bne _08107B44
	mov r0, #255
	and r6, r6, r0
	b _08107B4A
_08107B30:
	.4byte gRam
_08107B34:
	.4byte 0x00000F12
_08107B38:
	.4byte 0x00000F22
_08107B3C:
	.4byte 0x00000ED2
_08107B40:
	.4byte 0x0000179A
_08107B44:
	ldr r2, _08107B70  @ =0xFFFFFF00
	add r0, r2, #0
	orr r6, r6, r0
_08107B4A:
	strh r6, [r5]
	ldr r1, _08107B74  @ =gRam
	ldr r3, _08107B78  @ =0x00000EE2
	add r0, r1, r3
	add r0, r7, r0
	ldrb r0, [r0]
	mov r3, r8
	sub r2, r3, r0
	ldr r0, _08107B7C  @ =0x0000179C
	add r1, r1, r0
	strh r2, [r1]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	bne _08107B80
	mov r0, #255
	and r2, r2, r0
	b _08107B86
	.byte 0x00
	.byte 0x00
_08107B70:
	.4byte 0xFFFFFF00
_08107B74:
	.4byte gRam
_08107B78:
	.4byte 0x00000EE2
_08107B7C:
	.4byte 0x0000179C
_08107B80:
	ldr r3, _08107C1C  @ =0xFFFFFF00
	add r0, r3, #0
	orr r2, r2, r0
_08107B86:
	strh r2, [r1]
	ldr r4, _08107C20  @ =gRam
	ldr r0, _08107C24  @ =0x00000ACE
	add r1, r4, r0
	mov r0, #1
	strh r0, [r1]
	add r0, r7, #0
	bl sub_08107520
	ldr r2, _08107C28  @ =0x00000F82
	add r1, r4, r2
	add r1, r7, r1
	ldr r3, _08107C2C  @ =0x00000ED2
	add r0, r4, r3
	add r2, r7, r0
	ldrb r0, [r2]
	sub r0, r0, #12
	strb r0, [r1]
	ldr r0, _08107C30  @ =gUnknown_02010990
	ldr r1, _08107C34  @ =0x00000EE2
	add r4, r4, r1
	add r4, r7, r4
	ldrb r0, [r0]
	ldrb r1, [r4]
	sub r0, r0, r1
	add r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bhi _08107BD8
	ldr r0, _08107C38  @ =gUnknown_02010991
	ldrb r0, [r0]
	ldrb r1, [r2]
	sub r0, r0, r1
	add r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bhi _08107BD8
	mov r2, #1
	mov r9, r2
_08107BD8:
	ldr r2, _08107C20  @ =gRam
	mov r3, r9
	cmp r3, #0
	beq _08107BF4
	ldr r1, _08107C3C  @ =0x00000F52
	add r0, r2, r1
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
	ldr r3, _08107C40  @ =0x00000FC2
	add r0, r2, r3
	add r0, r7, r0
	mov r1, #48
	strb r1, [r0]
_08107BF4:
	ldr r1, _08107C44  @ =0x00001002
	add r0, r2, r1
	add r0, r7, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08107C0A
	add r0, r7, #0
	bl sub_08107C48
_08107C0A:
	add r0, r7, #0
	bl sub_08107C48
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08107C1C:
	.4byte 0xFFFFFF00
_08107C20:
	.4byte gRam
_08107C24:
	.4byte 0x00000ACE
_08107C28:
	.4byte 0x00000F82
_08107C2C:
	.4byte 0x00000ED2
_08107C30:
	.4byte gUnknown_02010990
_08107C34:
	.4byte 0x00000EE2
_08107C38:
	.4byte gUnknown_02010991
_08107C3C:
	.4byte 0x00000F52
_08107C40:
	.4byte 0x00000FC2
_08107C44:
	.4byte 0x00001002
	THUMB_FUNC_END sub_08107A18

