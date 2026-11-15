	THUMB_FUNC_START sub_080D4400
sub_080D4400: @ 0x080D4400
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080D443C  @ =gRam
	ldr r1, _080D4440  @ =0x00000F92
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080D4444  @ =0x00001152
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	ldrb r0, [r1]
	sub r0, r0, #241
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D4436
	ldr r0, _080D4448  @ =0x00000F52
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D4436:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D443C:
	.4byte gRam
_080D4440:
	.4byte 0x00000F92
_080D4444:
	.4byte 0x00001152
_080D4448:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D4400

