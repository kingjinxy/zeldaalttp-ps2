	THUMB_FUNC_START sub_080CE324
sub_080CE324: @ 0x080CE324
	push {r4,lr}
	ldr r0, _080CE348  @ =gRam
	ldr r1, _080CE34C  @ =0x000015F8
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CE342
	mov r4, #14
_080CE334:
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CD618
	sub r4, r4, #1
	cmp r4, #0
	bge _080CE334
_080CE342:
	pop {r4}
	pop {r0}
	bx r0
_080CE348:
	.4byte gRam
_080CE34C:
	.4byte 0x000015F8
	THUMB_FUNC_END sub_080CE324

