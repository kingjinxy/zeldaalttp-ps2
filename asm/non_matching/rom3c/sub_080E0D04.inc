	THUMB_FUNC_START sub_080E0D04
sub_080E0D04: @ 0x080E0D04
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E0DE8
	ldr r6, _080E0DA4  @ =gRam
	ldr r1, _080E0DA8  @ =0x000010B2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _080E0D32
	mov r0, #64
	mov r1, #0
	bl sub_0812A324
_080E0D32:
	ldr r2, _080E0DAC  @ =0x00001052
	add r0, r6, r2
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite3_MoveHoriz
	ldr r5, _080E0DB0  @ =0x00000FD2
	add r0, r6, r5
	add r3, r4, r0
	ldrb r0, [r3]
	mov r12, r0
	cmp r0, #0
	bne _080E0DE8
	ldr r2, _080E0DB4  @ =0x00001172
	add r1, r6, r2
	add r1, r4, r1
	sub r5, r5, #16
	add r0, r6, r5
	add r7, r4, r0
	ldrb r0, [r7]
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	beq _080E0DD0
	cmp r5, #1
	bne _080E0DE8
	ldr r0, _080E0DB8  @ =0x00000EE2
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080E0DBC  @ =gUnknown_08176844
	ldr r5, _080E0DC0  @ =0x00000F92
	add r0, r6, r5
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E0DC4  @ =0x00000F02
	add r0, r6, r1
	add r0, r4, r0
	ldr r2, _080E0DC8  @ =0x000016C5
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	mov r0, #32
	strb r0, [r3]
	ldr r5, _080E0DCC  @ =0x000010A2
	add r0, r6, r5
	add r0, r4, r0
	mov r1, r12
	strb r1, [r0]
	b _080E0DE8
	.byte 0x00
	.byte 0x00
_080E0DA4:
	.4byte gRam
_080E0DA8:
	.4byte 0x000010B2
_080E0DAC:
	.4byte 0x00001052
_080E0DB0:
	.4byte 0x00000FD2
_080E0DB4:
	.4byte 0x00001172
_080E0DB8:
	.4byte 0x00000EE2
_080E0DBC:
	.4byte gUnknown_08176844
_080E0DC0:
	.4byte 0x00000F92
_080E0DC4:
	.4byte 0x00000F02
_080E0DC8:
	.4byte 0x000016C5
_080E0DCC:
	.4byte 0x000010A2
_080E0DD0:
	mov r0, r8
	bl sub_080C79F8
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E0DE8
	mov r0, #16
	strb r0, [r7]
	ldr r2, _080E0DF4  @ =0x00000FE2
	add r0, r6, r2
	add r0, r0, r8
	strb r5, [r0]
_080E0DE8:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E0DF4:
	.4byte 0x00000FE2
	THUMB_FUNC_END sub_080E0D04

