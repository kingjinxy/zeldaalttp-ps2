	THUMB_FUNC_START sub_080CE350
sub_080CE350: @ 0x080CE350
	push {r4,lr}
	bl sub_080CA54C
	ldr r0, _080CE378  @ =gRam
	ldr r1, _080CE37C  @ =0x000015F8
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CE372
	mov r4, #29
_080CE364:
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CD618
	sub r4, r4, #1
	cmp r4, #14
	bgt _080CE364
_080CE372:
	pop {r4}
	pop {r0}
	bx r0
_080CE378:
	.4byte gRam
_080CE37C:
	.4byte 0x000015F8
	THUMB_FUNC_END sub_080CE350

