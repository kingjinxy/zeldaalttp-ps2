	THUMB_FUNC_START sub_080C536C
sub_080C536C: @ 0x080C536C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080C5388  @ =gRam
	ldr r3, _080C538C  @ =0x000010C2
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #0
	strb r3, [r1]
	ldr r1, _080C5390  @ =0x00000EB5
	add r2, r2, r1
	add r0, r0, r2
	strb r3, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080C5388:
	.4byte gRam
_080C538C:
	.4byte 0x000010C2
_080C5390:
	.4byte 0x00000EB5
	THUMB_FUNC_END sub_080C536C

