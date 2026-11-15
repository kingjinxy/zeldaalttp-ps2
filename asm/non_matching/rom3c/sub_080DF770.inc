	THUMB_FUNC_START sub_080DF770
sub_080DF770: @ 0x080DF770
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DF7D4  @ =gRam
	ldr r0, _080DF7D8  @ =0x00001770
	add r1, r5, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080DF7DC  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DF7CC
	bl sub_0809E3CC
	add r6, r0, #0
	cmp r6, #0
	bne _080DF7CC
	add r0, r4, #0
	mov r1, #140
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DF7CC
	ldr r0, _080DF7E0  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080DF7E4  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	bl sub_08092E50
	bl sub_080AE75C
	ldr r1, _080DF7E8  @ =0x000016D5
	add r0, r5, r1
	strb r6, [r0]
_080DF7CC:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080DF7D4:
	.4byte gRam
_080DF7D8:
	.4byte 0x00001770
_080DF7DC:
	.4byte 0x00000FC2
_080DF7E0:
	.4byte 0x00000F52
_080DF7E4:
	.4byte 0x00001052
_080DF7E8:
	.4byte 0x000016D5
	THUMB_FUNC_END sub_080DF770

