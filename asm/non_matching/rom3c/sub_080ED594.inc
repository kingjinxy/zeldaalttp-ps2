	THUMB_FUNC_START sub_080ED594
sub_080ED594: @ 0x080ED594
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080ED830
	lsl r0, r0, #24
	cmp r0, #0
	bne _080ED5C2
	ldr r2, _080ED5C8  @ =gRam
	ldr r1, _080ED5CC  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	ldr r0, _080ED5D0  @ =0x00001642
	add r2, r2, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080C35C0
_080ED5C2:
	pop {r4}
	pop {r0}
	bx r0
_080ED5C8:
	.4byte gRam
_080ED5CC:
	.4byte 0x00000FC2
_080ED5D0:
	.4byte 0x00001642
	THUMB_FUNC_END sub_080ED594

