	THUMB_FUNC_START sub_080C8AD8
sub_080C8AD8: @ 0x080C8AD8
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r3, _080C8B00  @ =gRam
	ldr r2, _080C8B04  @ =0x00000FC2
	add r0, r3, r2
	add r0, r1, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _080C8B0C
	ldr r4, _080C8B08  @ =0x00000FA2
	add r0, r3, r4
	add r0, r1, r0
	strb r2, [r0]
	add r0, r1, #0
	bl sub_080CB9D4
	b _080C8B24
_080C8B00:
	.4byte gRam
_080C8B04:
	.4byte 0x00000FC2
_080C8B08:
	.4byte 0x00000FA2
_080C8B0C:
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C8B24
	add r0, r4, #0
	bl sub_080C8B88
_080C8B24:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C8AD8

