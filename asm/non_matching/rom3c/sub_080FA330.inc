	THUMB_FUNC_START sub_080FA330
sub_080FA330: @ 0x080FA330
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080FA360  @ =gRam
	ldr r1, _080FA364  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r1, r0, #1
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _080FA368  @ =gUnknown_0817A3D4
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #3
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
_080FA360:
	.4byte gRam
_080FA364:
	.4byte 0x00000F92
_080FA368:
	.4byte gUnknown_0817A3D4
	THUMB_FUNC_END sub_080FA330

