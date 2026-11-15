	THUMB_FUNC_START sub_08103EF4
sub_08103EF4: @ 0x08103EF4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r7, _08103FC0  @ =gRam
	ldr r0, _08103FC4  @ =0x00001122
	add r2, r7, r0
	add r2, r5, r2
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	ldr r3, _08103FC8  @ =gUnknown_0817BB7C
	ldr r4, _08103FCC  @ =0x00000FB2
	add r0, r7, r4
	add r0, r0, r5
	mov r8, r0
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	ldr r0, _08103FD0  @ =0x00000F92
	add r1, r7, r0
	add r1, r5, r1
	ldr r2, _08103FD4  @ =gUnknown_0817BB80
	mov r3, r8
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810402E
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _0810402E
	add r0, r5, #0
	bl sub_080C5044
	ldr r1, _08103FD8  @ =0x00000F62
	add r0, r7, r1
	add r6, r5, r0
	strb r4, [r6]
	ldr r4, _08103FDC  @ =gUnknown_0817BB78
	add r0, r5, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, r4
	ldr r2, _08103FE0  @ =0x000016D5
	add r1, r7, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08103FEC
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldr r3, _08103FE4  @ =0x00000996
	add r0, r7, r3
	ldrb r1, [r0]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _08103FB6
	ldr r4, _08103FE8  @ =0x00000F72
	add r0, r7, r4
	add r1, r5, r0
	ldrb r0, [r1]
	add r2, r0, #0
	cmp r0, #0
	beq _08103FA4
	sub r0, r0, #1
	strb r0, [r1]
_08103FA4:
	add r0, r5, #0
	add r1, r2, #0
	bl sub_080C35FC
	add r0, r5, #0
	bl sub_080C36D8
	mov r1, r8
	strb r0, [r1]
_08103FB6:
	add r0, r5, #0
	bl Sprite3_Move
	b _0810402E
	.byte 0x00
	.byte 0x00
_08103FC0:
	.4byte gRam
_08103FC4:
	.4byte 0x00001122
_08103FC8:
	.4byte gUnknown_0817BB7C
_08103FCC:
	.4byte 0x00000FB2
_08103FD0:
	.4byte 0x00000F92
_08103FD4:
	.4byte gUnknown_0817BB80
_08103FD8:
	.4byte 0x00000F62
_08103FDC:
	.4byte gUnknown_0817BB78
_08103FE0:
	.4byte 0x000016D5
_08103FE4:
	.4byte 0x00000996
_08103FE8:
	.4byte 0x00000F72
_08103FEC:
	ldr r2, _08104038  @ =0x00000996
	add r0, r7, r2
	ldrb r1, [r0]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08104028
	add r0, r5, #0
	bl sub_080C2FA8
	mov r3, r8
	strb r0, [r3]
	ldr r4, _0810403C  @ =0x00000F72
	add r0, r7, r4
	add r2, r5, r0
	ldrb r1, [r2]
	cmp r1, #4
	beq _08104018
	add r0, r1, #1
	strb r0, [r2]
_08104018:
	add r0, r5, #0
	bl sub_080C35FC
	add r0, r5, #0
	bl sub_080C36D8
	mov r1, r8
	strb r0, [r1]
_08104028:
	add r0, r5, #0
	bl Sprite3_Move
_0810402E:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08104038:
	.4byte 0x00000996
_0810403C:
	.4byte 0x00000F72
	THUMB_FUNC_END sub_08103EF4

