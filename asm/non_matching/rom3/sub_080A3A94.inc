	THUMB_FUNC_START sub_080A3A94
sub_080A3A94: @ 0x080A3A94
	push {r4,lr}
	ldr r2, _080A3AB4  @ =gRam
	ldr r1, _080A3AB8  @ =0x000009B2
	add r0, r2, r1
	mov r3, #0
	ldrsb r3, [r0, r3]
	cmp r3, #0
	beq _080A3AC0
	ldr r3, _080A3ABC  @ =0x00001649
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A3B3A
	bl sub_0806C430
	b _080A3B3A
_080A3AB4:
	.4byte gRam
_080A3AB8:
	.4byte 0x000009B2
_080A3ABC:
	.4byte 0x00001649
_080A3AC0:
	ldr r4, _080A3B40  @ =0x000009AC
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #11
	beq _080A3B3A
	ldr r1, _080A3B44  @ =0x000009C6
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	ldr r4, _080A3B48  @ =0x0000173A
	add r1, r2, r4
	strb r0, [r1]
	cmp r0, #0
	beq _080A3B06
	ldr r1, _080A3B4C  @ =gUnknown_0201096F
	sub r4, r4, #122
	add r0, r2, r4
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #16
	add r4, r4, #1
	add r0, r2, r4
	ldrb r0, [r0]
	strb r0, [r1]
	sub r1, r1, #48
	add r4, r4, #3
	add r0, r2, r4
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #16
	add r4, r4, #1
	add r0, r2, r4
	ldrb r0, [r0]
	strb r0, [r1]
_080A3B06:
	ldr r0, _080A3B50  @ =0x000009AD
	add r1, r2, r0
	mov r0, #35
	strb r0, [r1]
	ldr r1, _080A3B54  @ =0x0000188F
	add r0, r2, r1
	strb r3, [r0]
	mov r4, #187
	lsl r4, r4, #5
	add r1, r2, r4
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080A3B58  @ =0x000009E8
	add r0, r2, r1
	mov r1, #0
	strh r3, [r0]
	ldr r3, _080A3B5C  @ =0x000016CD
	add r0, r2, r3
	strb r1, [r0]
	sub r4, r4, #146
	add r0, r2, r4
	strb r1, [r0]
	ldr r0, _080A3B60  @ =0x00001718
	add r1, r2, r0
	mov r0, #20
	strb r0, [r1]
_080A3B3A:
	pop {r4}
	pop {r0}
	bx r0
_080A3B40:
	.4byte 0x000009AC
_080A3B44:
	.4byte 0x000009C6
_080A3B48:
	.4byte 0x0000173A
_080A3B4C:
	.4byte gUnknown_0201096F
_080A3B50:
	.4byte 0x000009AD
_080A3B54:
	.4byte 0x0000188F
_080A3B58:
	.4byte 0x000009E8
_080A3B5C:
	.4byte 0x000016CD
_080A3B60:
	.4byte 0x00001718
	THUMB_FUNC_END sub_080A3A94

