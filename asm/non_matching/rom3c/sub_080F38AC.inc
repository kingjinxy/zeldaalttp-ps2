	THUMB_FUNC_START sub_080F38AC
sub_080F38AC: @ 0x080F38AC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F38E8  @ =gRam
	ldr r1, _080F38EC  @ =0x00001663
	add r3, r2, r1
	mov r1, #5
	strb r1, [r3]
	ldr r1, _080F38F0  @ =0x00001752
	add r3, r2, r1
	mov r5, #0
	ldr r1, _080F38F4  @ =0x00000DF3
	strh r1, [r3]
	ldr r3, _080F38F8  @ =0x0000165F
	add r4, r2, r3
	ldrb r3, [r4]
	mov r1, #16
	orr r1, r1, r3
	strb r1, [r4]
	ldr r3, _080F38FC  @ =0x00000FA2
	add r1, r2, r3
	add r0, r0, r1
	strb r5, [r0]
	ldr r0, _080F3900  @ =0x00001770
	add r2, r2, r0
	strb r5, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F38E8:
	.4byte gRam
_080F38EC:
	.4byte 0x00001663
_080F38F0:
	.4byte 0x00001752
_080F38F4:
	.4byte 0x00000DF3
_080F38F8:
	.4byte 0x0000165F
_080F38FC:
	.4byte 0x00000FA2
_080F3900:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080F38AC

