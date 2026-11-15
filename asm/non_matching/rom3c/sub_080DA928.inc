	THUMB_FUNC_START sub_080DA928
sub_080DA928: @ 0x080DA928
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DA974  @ =gRam
	ldr r0, _080DA978  @ =0x00001649
	add r1, r5, r0
	mov r6, #0
	mov r0, #2
	strb r0, [r1]
	ldr r1, _080DA97C  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	sub r1, r1, #192
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #63
	bhi _080DA98C
	cmp r0, #1
	bne _080DA960
	add r0, r4, #0
	bl sub_080DB5C4
	ldr r0, _080DA980  @ =0x00000A3C
	add r1, r5, r0
	mov r0, #27
	strh r0, [r1]
_080DA960:
	ldr r1, _080DA984  @ =0x000010C2
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	ldr r1, _080DA988  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #17
	b _080DA998
	.byte 0x00
	.byte 0x00
_080DA974:
	.4byte gRam
_080DA978:
	.4byte 0x00001649
_080DA97C:
	.4byte 0x00001082
_080DA980:
	.4byte 0x00000A3C
_080DA984:
	.4byte 0x000010C2
_080DA988:
	.4byte 0x00000F92
_080DA98C:
	ldr r1, _080DA9A0  @ =0x000010C2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #224
	orr r1, r1, r2
_080DA998:
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_080DA9A0:
	.4byte 0x000010C2
	THUMB_FUNC_END sub_080DA928

