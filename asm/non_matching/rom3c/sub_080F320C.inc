	THUMB_FUNC_START sub_080F320C
sub_080F320C: @ 0x080F320C
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080F3264  @ =gRam
	ldr r0, _080F3268  @ =0x00001776
	add r1, r5, r0
	mov r0, #0
	strb r0, [r1]
	bl sub_080A1588
	ldr r0, _080F326C  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F3270  @ =0x00000F92
	add r0, r5, r1
	add r4, r4, r0
	mov r6, #1
	mov r0, #1
	mov r8, r0
	mov r1, r8
	strb r1, [r4]
	mov r0, #3
	bl sub_080BE9A0
	ldr r0, _080F3274  @ =0x0000165F
	add r1, r5, r0
	ldrb r0, [r1]
	orr r6, r6, r0
	strb r6, [r1]
	ldr r1, _080F3278  @ =0x0000165E
	add r5, r5, r1
	mov r0, r8
	strb r0, [r5]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_080F3264:
	.4byte gRam
_080F3268:
	.4byte 0x00001776
_080F326C:
	.4byte 0x00000F52
_080F3270:
	.4byte 0x00000F92
_080F3274:
	.4byte 0x0000165F
_080F3278:
	.4byte 0x0000165E
	THUMB_FUNC_END sub_080F320C

