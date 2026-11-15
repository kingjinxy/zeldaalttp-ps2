	THUMB_FUNC_START sub_080F0DD4
sub_080F0DD4: @ 0x080F0DD4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F0DF8  @ =gRam
	ldr r2, _080F0DFC  @ =0x00000F92
	add r3, r1, r2
	add r3, r0, r3
	ldr r2, _080F0E00  @ =0x00000996
	add r1, r1, r2
	ldrb r1, [r1]
	lsr r1, r1, #3
	mov r2, #1
	and r1, r1, r2
	strb r1, [r3]
	bl Sprite3_Move
	pop {r0}
	bx r0
_080F0DF8:
	.4byte gRam
_080F0DFC:
	.4byte 0x00000F92
_080F0E00:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F0DD4

