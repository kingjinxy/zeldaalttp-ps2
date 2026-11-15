	THUMB_FUNC_START sub_080F3930
sub_080F3930: @ 0x080F3930
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F3948
	bl sub_08093078
_080F3948:
	add r0, r4, #0
	mov r1, #17
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F396E
	ldr r1, _080F3978  @ =gRam
	ldr r0, _080F397C  @ =0x00001663
	add r2, r1, r0
	mov r0, #0
	strb r0, [r2]
	ldr r0, _080F3980  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F396E:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F3978:
	.4byte gRam
_080F397C:
	.4byte 0x00001663
_080F3980:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F3930

