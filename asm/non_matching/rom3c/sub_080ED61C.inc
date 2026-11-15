	THUMB_FUNC_START sub_080ED61C
sub_080ED61C: @ 0x080ED61C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080ED648  @ =gRam
	ldr r2, _080ED64C  @ =0x00000FC2
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	mov r2, #35
	strb r2, [r1]
	ldr r2, _080ED650  @ =0x000010C2
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	ldr r1, _080ED654  @ =0x00000A2A
	add r3, r3, r1
	strh r4, [r3]
	bl sub_080ED8B8
	pop {r4}
	pop {r0}
	bx r0
_080ED648:
	.4byte gRam
_080ED64C:
	.4byte 0x00000FC2
_080ED650:
	.4byte 0x000010C2
_080ED654:
	.4byte 0x00000A2A
	THUMB_FUNC_END sub_080ED61C

