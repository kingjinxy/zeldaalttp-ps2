	THUMB_FUNC_START sub_080F928C
sub_080F928C: @ 0x080F928C
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _080F92D8  @ =gRam
	ldr r1, _080F92DC  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, #7
	mov r2, #182
	lsl r2, r2, #5
	add r1, r5, r2
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bcs _080F9306
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _080F9306
	ldr r1, _080F92E0  @ =0x00001663
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F92E8
	ldr r1, _080F92E4  @ =0x00000197
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	b _080F9306
	.byte 0x00
	.byte 0x00
_080F92D8:
	.4byte gRam
_080F92DC:
	.4byte 0x00000ED2
_080F92E0:
	.4byte 0x00001663
_080F92E4:
	.4byte 0x00000197
_080F92E8:
	mov r1, #201
	lsl r1, r1, #1
	add r0, r6, #0
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F9306
	ldr r2, _080F9310  @ =0x00000F52
	add r1, r5, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F9306:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F9310:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F928C

