	THUMB_FUNC_START sub_080C8764
sub_080C8764: @ 0x080C8764
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080C877C  @ =gRam
	ldr r2, _080C8780  @ =0x00001032
	add r1, r1, r2
	add r0, r0, r1
	ldrb r2, [r0]
	mov r1, #239
	and r1, r1, r2
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080C877C:
	.4byte gRam
_080C8780:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080C8764

