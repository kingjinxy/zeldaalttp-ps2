	THUMB_FUNC_START sub_080D9058
sub_080D9058: @ 0x080D9058
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r5, r1, #0
	ldr r4, _080D90B4  @ =gRam
	ldr r2, _080D90B8  @ =0x00000FC2
	add r0, r4, r2
	add r6, r1, r0
	ldrb r2, [r6]
	cmp r2, #0
	bne _080D90AE
	mov r3, #1
	ldr r7, _080D90BC  @ =0x000010A2
	add r0, r4, r7
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _080D9088
	strb r2, [r1]
	mov r3, #2
_080D9088:
	ldr r1, _080D90C0  @ =0x00000F52
	add r0, r4, r1
	add r0, r5, r0
	strb r3, [r0]
	bl GetRandomInt
	ldr r7, _080D90C4  @ =0x00001082
	add r2, r4, r7
	add r2, r5, r2
	mov r1, #2
	and r1, r1, r0
	sub r1, r1, #1
	strb r1, [r2]
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #32
	strb r1, [r6]
_080D90AE:
	pop {r4-r7}
	pop {r0}
	bx r0
_080D90B4:
	.4byte gRam
_080D90B8:
	.4byte 0x00000FC2
_080D90BC:
	.4byte 0x000010A2
_080D90C0:
	.4byte 0x00000F52
_080D90C4:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080D9058

