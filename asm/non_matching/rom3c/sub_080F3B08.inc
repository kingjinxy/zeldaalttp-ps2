	THUMB_FUNC_START sub_080F3B08
sub_080F3B08: @ 0x080F3B08
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r6, _080F3B50  @ =gRam
	ldr r2, _080F3B54  @ =0x00001082
	add r1, r6, r2
	add r5, r4, r1
	mov r1, #3
	eor r0, r0, r1
	strb r0, [r5]
	add r0, r4, #0
	mov r1, #25
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F3B46
	ldr r1, _080F3B58  @ =0x00000FB2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r5]
_080F3B46:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F3B50:
	.4byte gRam
_080F3B54:
	.4byte 0x00001082
_080F3B58:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080F3B08

