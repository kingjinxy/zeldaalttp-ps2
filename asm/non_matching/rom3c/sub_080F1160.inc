	THUMB_FUNC_START sub_080F1160
sub_080F1160: @ 0x080F1160
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080F11B8  @ =gRam
	ldr r2, _080F11BC  @ =0x00000FB2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #2
	strb r2, [r1]
	ldr r4, _080F11C0  @ =0x00001082
	add r1, r3, r4
	add r1, r0, r1
	strb r2, [r1]
	ldr r1, _080F11C4  @ =0x00001172
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	ldr r4, _080F11C8  @ =0x00000F62
	add r2, r3, r4
	add r2, r0, r2
	sub r4, r4, #128
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _080F11CC  @ =0x00000F72
	add r2, r3, r1
	add r2, r0, r2
	add r4, r4, #32
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _080F11D0  @ =0x00000F22
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #247
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F11B8:
	.4byte gRam
_080F11BC:
	.4byte 0x00000FB2
_080F11C0:
	.4byte 0x00001082
_080F11C4:
	.4byte 0x00001172
_080F11C8:
	.4byte 0x00000F62
_080F11CC:
	.4byte 0x00000F72
_080F11D0:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080F1160

