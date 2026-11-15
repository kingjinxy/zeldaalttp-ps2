	THUMB_FUNC_START sub_080F35EC
sub_080F35EC: @ 0x080F35EC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r7, r0, #0
	ldr r2, _080F366C  @ =gRam
	ldr r0, _080F3670  @ =0x00000EE2
	add r5, r2, r0
	add r5, r7, r5
	ldrb r1, [r5]
	mov r8, r1
	add r0, r0, #32
	add r4, r2, r0
	add r4, r7, r4
	ldrb r6, [r4]
	lsl r0, r6, #8
	add r0, r0, r8
	add r0, r0, #19
	strb r0, [r5]
	lsr r0, r0, #8
	strb r0, [r4]
	add r0, r7, #0
	str r2, [sp]
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, r8
	strb r1, [r5]
	strb r6, [r4]
	ldr r2, [sp]
	cmp r0, #3
	beq _080F3636
	cmp r0, #1
	bne _080F365E
_080F3636:
	ldr r0, _080F3674  @ =0x00000F62
	add r1, r2, r0
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #63
	bls _080F365E
	ldr r0, _080F3678  @ =0x00000F52
	add r1, r2, r0
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F367C  @ =0x00001770
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
_080F365E:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F366C:
	.4byte gRam
_080F3670:
	.4byte 0x00000EE2
_080F3674:
	.4byte 0x00000F62
_080F3678:
	.4byte 0x00000F52
_080F367C:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080F35EC

