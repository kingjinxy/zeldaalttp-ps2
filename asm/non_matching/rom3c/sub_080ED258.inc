	THUMB_FUNC_START sub_080ED258
sub_080ED258: @ 0x080ED258
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080ED2B4  @ =gRam
	ldr r1, _080ED2B8  @ =0x00000D4B
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080ED2AC
	bl sub_080ED80C
	mov r1, #5
	ldr r7, _080ED2BC  @ =gUnknown_02003040
	ldr r6, _080ED2C0  @ =gUnknown_08178690
	ldr r5, _080ED2C4  @ =gUnknown_02003060
	mov r3, #80
_080ED27A:
	lsl r0, r1, #24
	asr r0, r0, #24
	add r2, r0, r7
	add r1, r0, r6
	ldrb r1, [r1]
	strb r1, [r2]
	add r1, r0, r5
	strb r3, [r1]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080ED27A
	ldr r2, _080ED2B4  @ =gRam
	ldr r0, _080ED2C8  @ =0x00000D43
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080ED2B8  @ =0x00000D4B
	add r2, r2, r1
	add r2, r4, r2
	mov r0, #255
	strb r0, [r2]
_080ED2AC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ED2B4:
	.4byte gRam
_080ED2B8:
	.4byte 0x00000D4B
_080ED2BC:
	.4byte gUnknown_02003040
_080ED2C0:
	.4byte gUnknown_08178690
_080ED2C4:
	.4byte gUnknown_02003060
_080ED2C8:
	.4byte 0x00000D43
	THUMB_FUNC_END sub_080ED258

