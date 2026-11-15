	THUMB_FUNC_START sub_080F1BB8
sub_080F1BB8: @ 0x080F1BB8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	bl sub_080C2C4C
	ldr r2, _080F1CB0  @ =gRam
	ldr r0, _080F1CB4  @ =0x00001152
	add r1, r2, r0
	add r1, r1, r8
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F1BF0
	ldr r1, _080F1CB8  @ =0x00000F62
	add r0, r2, r1
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F1BF0
	ldr r0, _080F1CBC  @ =0x00000179
	bl sub_080C95C0
_080F1BF0:
	ldr r2, _080F1CB0  @ =gRam
	ldr r1, _080F1CC0  @ =0x00001142
	add r0, r2, r1
	mov r1, r8
	add r3, r1, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	mov r9, r2
	cmp r0, #0
	beq _080F1C86
	mov r0, #0
	strb r0, [r3]
	mov r0, r8
	bl sub_080C969C
	ldr r0, _080F1CB8  @ =0x00000F62
	add r0, r0, r9
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F1C78
	mov r0, #219
	mov r1, r8
	bl sub_080CA538
	add r7, r0, #0
	cmp r7, #0
	blt _080F1C78
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r9
	ldrh r4, [r0]
	add r4, r4, #4
	lsl r4, r4, #16
	lsr r6, r4, #16
	lsl r5, r7, #24
	lsr r5, r5, #24
	add r0, r5, #0
	bl sub_080CAE50
	ldr r0, _080F1CC4  @ =0x00000EE2
	add r0, r0, r9
	add r0, r7, r0
	strb r6, [r0]
	ldr r0, _080F1CC8  @ =0x00000F02
	add r0, r0, r9
	add r0, r7, r0
	lsr r4, r4, #24
	strb r4, [r0]
	ldr r0, _080F1CCC  @ =0x00000D74
	add r0, r0, r9
	add r0, r7, r0
	mov r1, #255
	strb r1, [r0]
	ldr r0, _080F1CB4  @ =0x00001152
	add r0, r0, r9
	add r0, r7, r0
	mov r1, #48
	strb r1, [r0]
	ldr r0, _080F1CD0  @ =0x000010B2
	add r0, r0, r9
	add r0, r7, r0
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #16
	bl sub_080C35FC
_080F1C78:
	ldr r0, _080F1CB0  @ =gRam
	ldr r2, _080F1CD4  @ =0x00000FA2
	add r1, r0, r2
	add r1, r1, r8
	mov r2, #0
	strb r2, [r1]
	mov r9, r0
_080F1C86:
	ldr r1, _080F1CD8  @ =0x00001052
	add r1, r1, r9
	add r1, r1, r8
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F1CDC  @ =0x00000F92
	add r1, r1, r9
	add r1, r1, r8
	ldr r2, _080F1CE0  @ =gUnknown_08178F44
	lsl r0, r0, #24
	lsr r0, r0, #26
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080F1CB0:
	.4byte gRam
_080F1CB4:
	.4byte 0x00001152
_080F1CB8:
	.4byte 0x00000F62
_080F1CBC:
	.4byte 0x00000179
_080F1CC0:
	.4byte 0x00001142
_080F1CC4:
	.4byte 0x00000EE2
_080F1CC8:
	.4byte 0x00000F02
_080F1CCC:
	.4byte 0x00000D74
_080F1CD0:
	.4byte 0x000010B2
_080F1CD4:
	.4byte 0x00000FA2
_080F1CD8:
	.4byte 0x00001052
_080F1CDC:
	.4byte 0x00000F92
_080F1CE0:
	.4byte gUnknown_08178F44
	THUMB_FUNC_END sub_080F1BB8

