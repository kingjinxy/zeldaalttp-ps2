	THUMB_FUNC_START sub_080729A8
sub_080729A8: @ 0x080729A8
	push {lr}
	bl sub_08096F30
	ldr r2, _080729D8  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r1, r2, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	ldr r0, _080729DC  @ =0x00000C0C
	add r1, r2, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080729D4
	ldr r0, _080729E0  @ =0x000009AD
	add r1, r2, r0
	mov r0, #0
	strb r0, [r1]
_080729D4:
	pop {r0}
	bx r0
_080729D8:
	.4byte gRam
_080729DC:
	.4byte 0x00000C0C
_080729E0:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080729A8

