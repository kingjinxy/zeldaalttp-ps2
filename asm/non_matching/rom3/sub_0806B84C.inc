	THUMB_FUNC_START sub_0806B84C
sub_0806B84C: @ 0x0806B84C
	push {r4,r5,lr}
	ldr r4, _0806B874  @ =gRam
	ldr r0, _0806B878  @ =0x00000A02
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _0806B880
	bl sub_08069F08
	ldr r1, _0806B87C  @ =0x0000099D
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0806B8BE
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	b _0806B8BE
_0806B874:
	.4byte gRam
_0806B878:
	.4byte 0x00000A02
_0806B87C:
	.4byte 0x0000099D
_0806B880:
	add r0, r0, #1
	mov r3, #0
	strb r0, [r5]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #129
	bls _0806B8BE
	ldr r0, _0806B8C4  @ =0x000009AC
	add r1, r4, r0
	mov r0, #26
	strb r0, [r1]
	ldr r1, _0806B8C8  @ =0x000009AD
	add r0, r4, r1
	strb r3, [r0]
	add r1, r1, #59
	add r0, r4, r1
	mov r2, #0
	strh r3, [r0]
	ldr r0, _0806B8CC  @ =0x00000A36
	add r1, r4, r0
	mov r0, #255
	strh r0, [r1]
	ldr r1, _0806B8D0  @ =0x00000A38
	add r0, r4, r1
	strh r3, [r0]
	ldr r1, _0806B8D4  @ =0x00001B16
	add r0, r4, r1
	strb r2, [r0]
	ldr r1, _0806B8D8  @ =0x0000165C
	add r0, r4, r1
	strh r3, [r0]
_0806B8BE:
	pop {r4,r5}
	pop {r0}
	bx r0
_0806B8C4:
	.4byte 0x000009AC
_0806B8C8:
	.4byte 0x000009AD
_0806B8CC:
	.4byte 0x00000A36
_0806B8D0:
	.4byte 0x00000A38
_0806B8D4:
	.4byte 0x00001B16
_0806B8D8:
	.4byte 0x0000165C
	THUMB_FUNC_END sub_0806B84C

