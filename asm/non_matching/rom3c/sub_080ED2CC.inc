	THUMB_FUNC_START sub_080ED2CC
sub_080ED2CC: @ 0x080ED2CC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080ED31C  @ =gRam
	ldr r1, _080ED320  @ =0x00000D4B
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080ED336
	mov r1, #5
	ldr r3, _080ED324  @ =0x00000D43
	add r0, r2, r3
	add r5, r4, r0
	add r3, r3, #24
	add r0, r2, r3
	add r3, r4, r0
_080ED2EE:
	lsl r0, r1, #24
	asr r2, r0, #24
	ldr r0, _080ED328  @ =gUnknown_02003060
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #192
	bne _080ED32C
	mov r0, #1
	strb r0, [r5]
	ldrb r0, [r3]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r3]
	bl sub_080ED80C
	add r0, r4, #0
	bl sub_080ED3D8
	b _080ED336
_080ED31C:
	.4byte gRam
_080ED320:
	.4byte 0x00000D4B
_080ED324:
	.4byte 0x00000D43
_080ED328:
	.4byte gUnknown_02003060
_080ED32C:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080ED2EE
_080ED336:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080ED2CC

