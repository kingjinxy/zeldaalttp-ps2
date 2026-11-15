	THUMB_FUNC_START sub_080F6974
sub_080F6974: @ 0x080F6974
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r1, _080F69B4  @ =gRam
	ldr r3, _080F69B8  @ =0x00000FB2
	add r2, r1, r3
	add r2, r4, r2
	strb r0, [r2]
	ldr r0, _080F69BC  @ =0x00000F92
	add r3, r1, r0
	add r3, r4, r3
	add r0, r0, #192
	add r1, r1, r0
	add r4, r4, r1
	ldrb r1, [r4]
	add r1, r1, #1
	strb r1, [r4]
	lsl r1, r1, #24
	lsr r1, r1, #27
	mov r0, #1
	and r1, r1, r0
	ldrb r0, [r2]
	lsl r0, r0, #1
	orr r1, r1, r0
	strb r1, [r3]
	pop {r4}
	pop {r0}
	bx r0
_080F69B4:
	.4byte gRam
_080F69B8:
	.4byte 0x00000FB2
_080F69BC:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080F6974

