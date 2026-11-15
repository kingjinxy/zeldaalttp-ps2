	THUMB_FUNC_START sub_080DC09C
sub_080DC09C: @ 0x080DC09C
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r2, _080DC0DC  @ =gRam
	ldr r0, _080DC0E0  @ =0x0000096C
	add r1, r2, r0
	mov r0, #2
	strh r0, [r1]
	ldr r1, _080DC0E4  @ =0x00000FB2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r0, _080DC0E8  @ =0x00000F92
	add r2, r2, r0
	add r2, r4, r2
	lsl r1, r1, #1
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #4
	ldr r0, _080DC0EC  @ =gUnknown_08175F5C
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DC0DC:
	.4byte gRam
_080DC0E0:
	.4byte 0x0000096C
_080DC0E4:
	.4byte 0x00000FB2
_080DC0E8:
	.4byte 0x00000F92
_080DC0EC:
	.4byte gUnknown_08175F5C
	THUMB_FUNC_END sub_080DC09C

