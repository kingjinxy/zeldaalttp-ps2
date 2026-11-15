	THUMB_FUNC_START sub_080C6E9C
sub_080C6E9C: @ 0x080C6E9C
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080C6EE0  @ =gRam
	ldr r1, _080C6EE4  @ =0x00000FA2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r5, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C6EFE
	mov r1, #29
_080C6EC4:
	lsl r2, r1, #24
	asr r1, r2, #24
	ldr r3, _080C6EE8  @ =0x000011D2
	add r0, r4, r3
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C6EEC
	lsr r0, r2, #24
	add r1, r5, #0
	bl sub_080C6B94
	b _080C6EFE
	.byte 0x00
	.byte 0x00
_080C6EE0:
	.4byte gRam
_080C6EE4:
	.4byte 0x00000FA2
_080C6EE8:
	.4byte 0x000011D2
_080C6EEC:
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080C6EC4
	mov r0, #0
	add r1, r5, #0
	bl sub_080C6B94
_080C6EFE:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C6E9C

	.byte 0x00
	.byte 0x00
