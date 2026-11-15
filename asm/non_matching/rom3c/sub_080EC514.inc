	THUMB_FUNC_START sub_080EC514
sub_080EC514: @ 0x080EC514
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #16
	mov r10, r0
	mov r1, #0
	mov r9, r1
	ldr r6, _080EC568  @ =gRam
	ldr r2, _080EC56C  @ =0x00001042
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EC5EC
	ldr r1, _080EC570  @ =0x00000FC2
	add r0, r6, r1
	add r7, r5, r0
	ldrb r0, [r7]
	cmp r0, #0
	beq _080EC57C
	ldr r2, _080EC574  @ =0x000010A2
	add r0, r6, r2
	add r1, r5, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080EC5E6
	mov r0, #11
	strb r0, [r1]
	ldr r0, _080EC578  @ =0x00001052
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080EC5E6
_080EC568:
	.4byte gRam
_080EC56C:
	.4byte 0x00001042
_080EC570:
	.4byte 0x00000FC2
_080EC574:
	.4byte 0x000010A2
_080EC578:
	.4byte 0x00001052
_080EC57C:
	mov r1, #1
	mov r8, r1
	ldr r2, _080EC660  @ =0x00000FF2
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #166
	bne _080EC5D8
	ldr r0, _080EC664  @ =0x00000FB2
	add r4, r6, r0
	add r4, r5, r4
	add r0, r5, #0
	bl sub_080C2FA8
	ldrb r1, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r1, r0
	bne _080EC5D8
	mov r1, #161
	lsl r1, r1, #4
	add r0, r6, r1
	ldr r2, _080EC668  @ =0x000010F2
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080EC5D8
	ldr r0, _080EC66C  @ =0x00000F52
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r1, #48
	strb r1, [r7]
	ldr r2, _080EC670  @ =0x00000FD2
	add r0, r6, r2
	add r0, r5, r0
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080C351C
	mov r0, #0
	mov r8, r0
_080EC5D8:
	mov r1, r8
	cmp r1, #0
	beq _080EC5E6
	mov r2, #32
	mov r10, r2
	mov r0, #1
	mov r9, r0
_080EC5E6:
	mov r1, r9
	cmp r1, #0
	beq _080EC650
_080EC5EC:
	ldr r4, _080EC674  @ =gRam
	ldr r2, _080EC678  @ =0x00000FC2
	add r0, r4, r2
	add r7, r5, r0
	mov r0, #0
	mov r8, r0
	mov r1, r10
	strb r1, [r7]
	bl GetRandomInt
	ldr r2, _080EC67C  @ =0x00001082
	add r1, r4, r2
	add r6, r5, r1
	ldr r3, _080EC680  @ =gUnknown_08178400
	sub r2, r2, #208
	add r1, r4, r2
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #1
	mov r2, #1
	and r2, r2, r0
	orr r1, r1, r2
	add r1, r1, r3
	ldrb r0, [r1]
	strb r0, [r6]
	ldr r1, _080EC66C  @ =0x00000F52
	add r0, r4, r1
	add r0, r5, r0
	mov r2, r8
	strb r2, [r0]
	ldr r0, _080EC684  @ =0x00000F82
	add r4, r4, r0
	add r1, r5, r4
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	bne _080EC64A
	strb r2, [r1]
	add r0, r5, #0
	bl sub_080C2FA8
	strb r0, [r6]
	mov r0, #24
	strb r0, [r7]
_080EC64A:
	add r0, r5, #0
	bl sub_080C351C
_080EC650:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EC660:
	.4byte 0x00000FF2
_080EC664:
	.4byte 0x00000FB2
_080EC668:
	.4byte 0x000010F2
_080EC66C:
	.4byte 0x00000F52
_080EC670:
	.4byte 0x00000FD2
_080EC674:
	.4byte gRam
_080EC678:
	.4byte 0x00000FC2
_080EC67C:
	.4byte 0x00001082
_080EC680:
	.4byte gUnknown_08178400
_080EC684:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080EC514

