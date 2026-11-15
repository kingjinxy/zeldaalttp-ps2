	THUMB_FUNC_START sub_080FF6AC
sub_080FF6AC: @ 0x080FF6AC
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080FF6D0  @ =gRam
	ldr r3, _080FF6D4  @ =0x00000FC2
	add r0, r1, r3
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FF6CC
	ldr r0, _080FF6D8  @ =0x00000F52
	add r1, r1, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080FF6CC:
	pop {r0}
	bx r0
_080FF6D0:
	.4byte gRam
_080FF6D4:
	.4byte 0x00000FC2
_080FF6D8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FF6AC

