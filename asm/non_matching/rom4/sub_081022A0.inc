	THUMB_FUNC_START sub_081022A0
sub_081022A0: @ 0x081022A0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _081022D0  @ =gRam
	ldr r1, _081022D4  @ =0x00000FB2
	add r3, r2, r1
	add r3, r0, r3
	ldr r4, _081022D8  @ =0x00000FF2
	add r1, r2, r4
	add r1, r0, r1
	ldrb r1, [r1]
	add r1, r1, #100
	lsl r1, r1, #1
	strb r1, [r3]
	ldr r1, _081022DC  @ =0x00000F92
	add r2, r2, r1
	add r0, r0, r2
	ldrb r1, [r0]
	sub r1, r1, #1
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081022D0:
	.4byte gRam
_081022D4:
	.4byte 0x00000FB2
_081022D8:
	.4byte 0x00000FF2
_081022DC:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_081022A0

