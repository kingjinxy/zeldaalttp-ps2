	THUMB_FUNC_START sub_080F45C0
sub_080F45C0: @ 0x080F45C0
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #88
	bl sub_080CF140
	ldr r0, _080F45E4  @ =gRam
	ldr r1, _080F45E8  @ =0x00000F52
	add r0, r0, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_080F45E4:
	.4byte gRam
_080F45E8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F45C0

