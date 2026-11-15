	THUMB_FUNC_START sub_080D72C0
sub_080D72C0: @ 0x080D72C0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D72EC  @ =gRam
	ldr r1, _080D72F0  @ =0x00000FB2
	add r3, r2, r1
	add r3, r0, r3
	ldr r4, _080D72F4  @ =0x00000FF2
	add r1, r2, r4
	add r1, r0, r1
	ldrb r1, [r1]
	sub r1, r1, #102
	strb r1, [r3]
	ldr r3, _080D72F8  @ =0x00000F62
	add r2, r2, r3
	add r0, r0, r2
	mov r2, #2
	and r1, r1, r2
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080D72EC:
	.4byte gRam
_080D72F0:
	.4byte 0x00000FB2
_080D72F4:
	.4byte 0x00000FF2
_080D72F8:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080D72C0

