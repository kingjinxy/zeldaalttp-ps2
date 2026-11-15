	THUMB_FUNC_START sub_080D492C
sub_080D492C: @ 0x080D492C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080D53CC
	ldr r5, _080D4984  @ =gRam
	ldr r1, _080D4988  @ =0x00000F62
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	mov r7, #0
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D4964
	add r1, r1, #32
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r1, _080D498C  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r7, [r0]
_080D4964:
	ldr r0, _080D4990  @ =0x00000FB2
	add r2, r5, r0
	add r2, r6, r2
	ldrb r0, [r3]
	lsr r0, r0, #2
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080D4994  @ =0x00000F92
	add r0, r5, r1
	add r0, r6, r0
	strb r7, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D4984:
	.4byte gRam
_080D4988:
	.4byte 0x00000F62
_080D498C:
	.4byte 0x00000FA2
_080D4990:
	.4byte 0x00000FB2
_080D4994:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080D492C

