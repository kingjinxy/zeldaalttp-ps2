	THUMB_FUNC_START sub_080F0D48
sub_080F0D48: @ 0x080F0D48
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F0D74  @ =gRam
	ldr r3, _080F0D78  @ =0x00001082
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #2
	strb r3, [r1]
	ldr r4, _080F0D7C  @ =0x00000FB2
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r1, _080F0D80  @ =0x00001172
	add r2, r2, r1
	add r0, r0, r2
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080F0D74:
	.4byte gRam
_080F0D78:
	.4byte 0x00001082
_080F0D7C:
	.4byte 0x00000FB2
_080F0D80:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080F0D48

