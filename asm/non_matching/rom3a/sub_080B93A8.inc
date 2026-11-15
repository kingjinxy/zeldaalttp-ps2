	THUMB_FUNC_START sub_080B93A8
sub_080B93A8: @ 0x080B93A8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r4, _080B9434  @ =gRam
	mov r5, #150
	lsl r5, r5, #4
	add r3, r4, r5
	strb r0, [r3]
	ldr r7, _080B9438  @ =0x00000964
	add r3, r4, r7
	strb r2, [r3]
	ldr r2, _080B943C  @ =0x00000F82
	add r0, r4, r2
	strb r1, [r0]
	mov r5, #0
	mov r8, r3
	add r6, r0, #0
_080B93CA:
	ldr r3, _080B9440  @ =0x00000F92
	add r0, r4, r3
	add r2, r5, r0
	ldrb r1, [r2]
	ldr r7, _080B9444  @ =0x00000FC2
	add r0, r4, r7
	add r3, r5, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080B9410
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #5
	bls _080B9406
	ldr r0, _080B9448  @ =0x00000EE2
	add r1, r4, r0
	add r1, r5, r1
	mov r7, #150
	lsl r7, r7, #4
	add r0, r4, r7
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080B944C  @ =0x00000ED2
	add r0, r4, r1
	add r0, r5, r0
	mov r7, r8
	ldrb r1, [r7]
	strb r1, [r0]
	mov r1, #0
_080B9406:
	strb r1, [r2]
	ldr r0, _080B9450  @ =gUnknown_08170B3C
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r3]
_080B9410:
	cmp r1, #0
	beq _080B941E
	add r0, r5, #0
	mov r1, #28
	mov r2, #1
	bl sub_080BD874
_080B941E:
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldrb r0, [r6]
	cmp r5, r0
	bcc _080B93CA
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080B9434:
	.4byte gRam
_080B9438:
	.4byte 0x00000964
_080B943C:
	.4byte 0x00000F82
_080B9440:
	.4byte 0x00000F92
_080B9444:
	.4byte 0x00000FC2
_080B9448:
	.4byte 0x00000EE2
_080B944C:
	.4byte 0x00000ED2
_080B9450:
	.4byte gUnknown_08170B3C
	THUMB_FUNC_END sub_080B93A8

