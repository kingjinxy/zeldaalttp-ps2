	THUMB_FUNC_START sub_080DC304
sub_080DC304: @ 0x080DC304
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080DC334  @ =gRam
	ldr r1, _080DC338  @ =0x00001776
	add r0, r5, r1
	mov r6, #0
	strb r6, [r0]
	mov r0, #33
	bl sub_080A1588
	ldr r1, _080DC33C  @ =0x00000F52
	add r0, r5, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r0, _080DC340  @ =0x00001770
	add r5, r5, r0
	strb r6, [r5]
	pop {r4-r6}
	pop {r0}
	bx r0
_080DC334:
	.4byte gRam
_080DC338:
	.4byte 0x00001776
_080DC33C:
	.4byte 0x00000F52
_080DC340:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080DC304

