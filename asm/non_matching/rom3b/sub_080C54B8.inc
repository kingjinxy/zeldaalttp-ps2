	THUMB_FUNC_START sub_080C54B8
sub_080C54B8: @ 0x080C54B8
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r4, r1, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C3AC8
	add r0, r4, #0
	mov r1, #32
	bl sub_080C4378
	ldr r0, _080C54EC  @ =gRam
	ldr r1, _080C54F0  @ =0x000016F9
	add r2, r0, r1
	mov r3, #0
	mov r1, #16
	strb r1, [r2]
	ldr r2, _080C54F4  @ =0x000016F8
	add r0, r0, r2
	strb r1, [r0]
	strb r3, [r5]
	mov r0, #1
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C54EC:
	.4byte gRam
_080C54F0:
	.4byte 0x000016F9
_080C54F4:
	.4byte 0x000016F8
	THUMB_FUNC_END sub_080C54B8

