	THUMB_FUNC_START sub_080CA5AC
sub_080CA5AC: @ 0x080CA5AC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r2, r0, #0
	ldr r0, _080CA5D0  @ =gRam
	ldr r1, _080CA5D4  @ =0x00001142
	add r0, r0, r1
	add r0, r2, r0
	ldrb r0, [r0]
	lsr r1, r0, #3
	cmp r1, #3
	bls _080CA5C6
	mov r1, #4
_080CA5C6:
	add r0, r2, #0
	bl sub_080CA614
	pop {r0}
	bx r0
_080CA5D0:
	.4byte gRam
_080CA5D4:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080CA5AC

