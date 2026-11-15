	THUMB_FUNC_START sub_080F5490
sub_080F5490: @ 0x080F5490
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080F54B8  @ =gRam
	ldr r1, _080F54BC  @ =0x00000E75
	add r2, r3, r1
	add r2, r0, r2
	ldrb r4, [r2]
	mov r1, #8
	orr r1, r1, r4
	strb r1, [r2]
	ldr r1, _080F54C0  @ =0x00000EA5
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #4
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F54B8:
	.4byte gRam
_080F54BC:
	.4byte 0x00000E75
_080F54C0:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_080F5490

