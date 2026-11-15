	THUMB_FUNC_START sub_080F7B24
sub_080F7B24: @ 0x080F7B24
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C35C0
	ldr r1, _080F7B4C  @ =gRam
	ldr r0, _080F7B50  @ =0x00000ED2
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #12
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C3758
	pop {r4}
	pop {r0}
	bx r0
_080F7B4C:
	.4byte gRam
_080F7B50:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_080F7B24

