	THUMB_FUNC_START sub_081101F4
sub_081101F4: @ 0x081101F4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r6, r2, #0
	ldr r5, _0811025C  @ =gRam
	ldr r1, _08110260  @ =0x00000FC2
	add r0, r5, r1
	add r4, r2, r0
	ldrb r0, [r4]
	add r3, r0, #0
	cmp r3, #0
	bne _08110254
	add r0, r0, #1
	strb r0, [r4]
	add r1, r1, #224
	add r0, r5, r1
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #6
	bne _0811022C
	strb r3, [r1]
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_0811022C:
	ldr r1, _08110264  @ =0x00000F52
	add r0, r5, r1
	add r0, r6, r0
	ldrb r1, [r4]
	strb r1, [r0]
	bl GetRandomInt
	ldr r1, _08110268  @ =0x00001082
	add r2, r5, r1
	add r2, r6, r2
	mov r1, #2
	and r1, r1, r0
	sub r1, r1, #1
	strb r1, [r2]
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #32
	strb r1, [r4]
_08110254:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811025C:
	.4byte gRam
_08110260:
	.4byte 0x00000FC2
_08110264:
	.4byte 0x00000F52
_08110268:
	.4byte 0x00001082
	THUMB_FUNC_END sub_081101F4

