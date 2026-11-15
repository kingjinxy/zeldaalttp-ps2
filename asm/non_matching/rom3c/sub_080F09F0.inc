	THUMB_FUNC_START sub_080F09F0
sub_080F09F0: @ 0x080F09F0
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080F0A74
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F0A6A
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl sub_080C90F4
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080F0A48  @ =gRam
	ldr r2, _080F0A4C  @ =0x00001082
	add r1, r3, r2
	add r1, r4, r1
	mov r2, #3
	eor r0, r0, r2
	strb r0, [r1]
	mov r0, #179
	lsl r0, r0, #5
	add r5, r3, r0
	ldrb r0, [r5]
	cmp r0, #2
	bls _080F0A54
	ldr r1, _080F0A50  @ =0x0000014B
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	b _080F0A6A
_080F0A48:
	.4byte gRam
_080F0A4C:
	.4byte 0x00001082
_080F0A50:
	.4byte 0x0000014B
_080F0A54:
	mov r1, #165
	lsl r1, r1, #1
	add r0, r6, #0
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F0A6A
	mov r0, #2
	strb r0, [r5]
_080F0A6A:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F09F0

	.byte 0x00
	.byte 0x00
