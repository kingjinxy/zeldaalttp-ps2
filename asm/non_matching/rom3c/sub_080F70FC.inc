	THUMB_FUNC_START sub_080F70FC
sub_080F70FC: @ 0x080F70FC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080F7134  @ =gRam
	ldr r1, _080F7138  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F711C
	b _080F7226
_080F711C:
	add r0, r4, #0
	bl sub_080F72E0
	ldr r2, _080F713C  @ =0x00000FA2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F7144
	ldr r3, _080F7140  @ =0x00000DA6
	add r1, r5, r3
	b _080F7220
_080F7134:
	.4byte gRam
_080F7138:
	.4byte 0x00000FD2
_080F713C:
	.4byte 0x00000FA2
_080F7140:
	.4byte 0x00000DA6
_080F7144:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F7226
	mov r7, #3
	str r7, [sp, #4]
	ldr r1, _080F71E4  @ =0x00001052
	add r0, r5, r1
	add r6, r4, r0
	ldr r2, _080F71E8  @ =0x00000EF2
	add r0, r5, r2
	add r0, r0, r4
	mov r9, r0
	ldr r3, _080F71EC  @ =gUnknown_08179B8C
	mov r10, r3
	ldr r7, _080F71F0  @ =0x00000F92
	add r0, r5, r7
	add r0, r0, r4
	mov r8, r0
_080F716E:
	ldrb r2, [r6]
	mov r1, #31
	mov r3, r8
	ldrb r0, [r3]
	add r0, r0, r10
	and r1, r1, r2
	ldrb r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r7, _080F71F4  @ =gUnknown_0200EE18
	add r2, r1, r7
	ldr r0, _080F71F8  @ =0x00000EE2
	add r3, r5, r0
	add r0, r4, r3
	ldrb r0, [r0]
	strb r0, [r2]
	add r7, r7, #128
	add r2, r1, r7
	ldr r7, _080F71FC  @ =0x00000F02
	add r0, r5, r7
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080F7200  @ =gUnknown_0200EF18
	add r2, r1, r0
	sub r7, r7, #48
	add r0, r5, r7
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080F7204  @ =gUnknown_0200EF98
	add r1, r1, r0
	mov r2, r9
	ldrb r0, [r2]
	strb r0, [r1]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	add r0, r4, #0
	str r3, [sp]
	bl Sprite3_Move
	ldr r7, [sp, #4]
	sub r7, r7, #1
	str r7, [sp, #4]
	ldr r3, [sp]
	cmp r7, #0
	bge _080F716E
	ldr r1, _080F7208  @ =0x00000FC2
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080F720C
	add r0, r4, #0
	bl sub_080F723C
	b _080F7226
_080F71E4:
	.4byte 0x00001052
_080F71E8:
	.4byte 0x00000EF2
_080F71EC:
	.4byte gUnknown_08179B8C
_080F71F0:
	.4byte 0x00000F92
_080F71F4:
	.4byte gUnknown_0200EE18
_080F71F8:
	.4byte 0x00000EE2
_080F71FC:
	.4byte 0x00000F02
_080F7200:
	.4byte gUnknown_0200EF18
_080F7204:
	.4byte gUnknown_0200EF98
_080F7208:
	.4byte 0x00000FC2
_080F720C:
	ldrb r0, [r1]
	cmp r0, #1
	bne _080F7226
	add r0, r3, #0
	add r0, r0, #192
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080F7238  @ =0xFFFFFEC4
	add r1, r3, r2
_080F7220:
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
_080F7226:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F7238:
	.4byte 0xFFFFFEC4
	THUMB_FUNC_END sub_080F70FC

