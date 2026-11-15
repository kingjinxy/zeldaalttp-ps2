	THUMB_FUNC_START sub_080EB9F0
sub_080EB9F0: @ 0x080EB9F0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080EBA88  @ =gRam
	ldr r2, _080EBA8C  @ =0x00000F52
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r5, r1, #0
	cmp r0, #0
	beq _080EBADC
	mov r6, #0
	cmp r4, #4
	bne _080EBA18
	mov r6, #1
_080EBA18:
	add r0, r4, #0
	add r1, r6, #0
	bl sub_080EB69C
	add r4, r0, #0
	cmp r4, #0
	bge _080EBA28
	b _080EBB98
_080EBA28:
	ldr r7, _080EBA90  @ =0x00000FD2
	add r0, r5, r7
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	ldr r0, _080EBA94  @ =0x00000E75
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #128
	mov r3, #0
	mov r7, #0
	orr r0, r0, r2
	strb r0, [r1]
	ldr r1, _080EBA98  @ =0x00001122
	add r0, r5, r1
	add r2, r4, r0
	mov r0, #4
	strb r0, [r2]
	cmp r6, #0
	bne _080EBA54
	b _080EBB98
_080EBA54:
	ldr r6, _080EBA9C  @ =0x00000F92
	add r0, r5, r6
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldrb r1, [r2]
	mov r0, #241
	and r0, r0, r1
	mov r1, #8
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _080EBAA0  @ =0x00000F22
	add r0, r5, r1
	add r0, r4, r0
	strb r7, [r0]
	ldr r2, _080EBAA4  @ =0x00000F12
	add r0, r5, r2
	add r0, r4, r0
	strb r7, [r0]
	ldr r6, _080EBAA8  @ =0x00001152
	add r0, r5, r6
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	b _080EBB98
	.byte 0x00
	.byte 0x00
_080EBA88:
	.4byte gRam
_080EBA8C:
	.4byte 0x00000F52
_080EBA90:
	.4byte 0x00000FD2
_080EBA94:
	.4byte 0x00000E75
_080EBA98:
	.4byte 0x00001122
_080EBA9C:
	.4byte 0x00000F92
_080EBAA0:
	.4byte 0x00000F22
_080EBAA4:
	.4byte 0x00000F12
_080EBAA8:
	.4byte 0x00001152
_080EBAAC:
	mov r0, #0
	ldr r7, [sp]
	strb r0, [r7]
	ldr r0, _080EBAD4  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EBAD8  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #13
	bl sub_080CF140
	b _080EBB98
	.byte 0x00
	.byte 0x00
_080EBAD4:
	.4byte 0x00000F52
_080EBAD8:
	.4byte 0x00000FC2
_080EBADC:
	ldr r2, _080EBBA8  @ =0x00000F92
	add r3, r5, r2
	add r3, r4, r3
	ldr r2, _080EBBAC  @ =gUnknown_08178289
	ldr r6, _080EBBB0  @ =0x00000FB2
	add r0, r5, r6
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, r2
	ldr r7, _080EBBB4  @ =0x00001052
	add r0, r5, r7
	add r0, r4, r0
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r0, [r3]
	mov r3, #15
	ldr r0, _080EBBB8  @ =0x00000EE2
	add r0, r0, r5
	mov r10, r0
	ldr r1, _080EBBBC  @ =0x00000F02
	add r1, r1, r5
	mov r9, r1
	ldr r2, _080EBBC0  @ =0x00000ED2
	add r2, r2, r5
	mov r8, r2
	sub r6, r6, #192
	add r6, r6, r5
	mov r12, r6
_080EBB1A:
	cmp r3, r4
	beq _080EBB92
	ldr r7, _080EBBC4  @ =gUnknown_030031D2
	add r7, r3, r7
	str r7, [sp]
	ldrb r0, [r7]
	cmp r0, #0
	beq _080EBB92
	ldr r1, _080EBBC8  @ =gUnknown_03003222
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #74
	bne _080EBB92
	mov r2, r10
	add r0, r4, r2
	ldrb r1, [r0]
	mov r6, r9
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	add r0, r3, r2
	ldrb r2, [r0]
	add r0, r3, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	sub r1, r1, r2
	add r1, r1, #12
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #31
	bhi _080EBB92
	mov r7, r8
	add r0, r4, r7
	ldrb r1, [r0]
	mov r2, r12
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	add r0, r3, r7
	ldrb r2, [r0]
	mov r6, r12
	add r0, r3, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	ldr r7, _080EBBCC  @ =gRam
	ldr r6, _080EBBD0  @ =0x00001142
	add r0, r7, r6
	add r0, r3, r0
	ldrb r0, [r0]
	sub r2, r2, r0
	sub r1, r1, r2
	add r1, r1, #12
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #31
	bls _080EBAAC
_080EBB92:
	sub r3, r3, #1
	cmp r3, #0
	bge _080EBB1A
_080EBB98:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080EBBA8:
	.4byte 0x00000F92
_080EBBAC:
	.4byte gUnknown_08178289
_080EBBB0:
	.4byte 0x00000FB2
_080EBBB4:
	.4byte 0x00001052
_080EBBB8:
	.4byte 0x00000EE2
_080EBBBC:
	.4byte 0x00000F02
_080EBBC0:
	.4byte 0x00000ED2
_080EBBC4:
	.4byte gUnknown_030031D2
_080EBBC8:
	.4byte gUnknown_03003222
_080EBBCC:
	.4byte gRam
_080EBBD0:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080EB9F0

