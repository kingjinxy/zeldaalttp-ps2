	THUMB_FUNC_START sub_080D78EC
sub_080D78EC: @ 0x080D78EC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080D7924  @ =gRam
	ldr r1, _080D7928  @ =0x00000FC2
	add r0, r3, r1
	add r1, r2, r0
	ldrb r4, [r1]
	cmp r4, #0
	bne _080D791E
	mov r0, #8
	strb r0, [r1]
	ldr r5, _080D792C  @ =0x00001052
	add r0, r3, r5
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #6
	bne _080D7918
	sub r5, r5, #176
	add r0, r3, r5
	add r0, r2, r0
	strb r4, [r0]
_080D7918:
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D791E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080D7924:
	.4byte gRam
_080D7928:
	.4byte 0x00000FC2
_080D792C:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080D78EC

