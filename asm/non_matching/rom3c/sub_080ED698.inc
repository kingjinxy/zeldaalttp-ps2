	THUMB_FUNC_START sub_080ED698
sub_080ED698: @ 0x080ED698
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080ED6E8  @ =gRam
	ldr r1, _080ED6EC  @ =0x00001152
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #152
	strb r1, [r0]
	ldr r2, _080ED6F0  @ =0x00001142
	add r0, r6, r2
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080ED6E0
	ldr r2, _080ED6F4  @ =0x00000FC2
	add r0, r6, r2
	add r0, r5, r0
	mov r4, #32
	strb r4, [r0]
	add r2, r2, #224
	add r0, r6, r2
	add r0, r5, r0
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #41
	bl sub_080CF0AC
	ldr r1, _080ED6F8  @ =0x000010E2
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
_080ED6E0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ED6E8:
	.4byte gRam
_080ED6EC:
	.4byte 0x00001152
_080ED6F0:
	.4byte 0x00001142
_080ED6F4:
	.4byte 0x00000FC2
_080ED6F8:
	.4byte 0x000010E2
	THUMB_FUNC_END sub_080ED698

