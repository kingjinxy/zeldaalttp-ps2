	THUMB_FUNC_START sub_080F5550
sub_080F5550: @ 0x080F5550
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080F5588  @ =gMagicPowder
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080F559C
	ldr r2, _080F558C  @ =gRam
	ldr r1, _080F5590  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080F5594  @ =0x00001122
	add r1, r2, r0
	add r1, r4, r1
	ldrb r3, [r1]
	mov r0, #8
	orr r0, r0, r3
	strb r0, [r1]
	ldr r1, _080F5598  @ =0x00001172
	add r2, r2, r1
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	b _080F55A8
	.byte 0x00
	.byte 0x00
_080F5588:
	.4byte gMagicPowder
_080F558C:
	.4byte gRam
_080F5590:
	.4byte 0x00000F92
_080F5594:
	.4byte 0x00001122
_080F5598:
	.4byte 0x00001172
_080F559C:
	ldr r0, _080F55B0  @ =gRam
	ldr r1, _080F55B4  @ =0x00000FA2
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_080F55A8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F55B0:
	.4byte gRam
_080F55B4:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080F5550

