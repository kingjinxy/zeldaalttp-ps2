	THUMB_FUNC_START sub_080F3ABC
sub_080F3ABC: @ 0x080F3ABC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _080F3AE4  @ =gRam
	ldr r3, _080F3AE8  @ =0x00001AE2
	add r0, r2, r3
	ldrb r3, [r0]
	cmp r3, #0
	bne _080F3AF4
	ldr r4, _080F3AEC  @ =0x00000F52
	add r0, r2, r4
	add r0, r1, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r1, _080F3AF0  @ =0x00001770
	add r0, r2, r1
	strb r3, [r0]
	b _080F3AFE
	.byte 0x00
	.byte 0x00
_080F3AE4:
	.4byte gRam
_080F3AE8:
	.4byte 0x00001AE2
_080F3AEC:
	.4byte 0x00000F52
_080F3AF0:
	.4byte 0x00001770
_080F3AF4:
	ldr r3, _080F3B04  @ =0x00000F52
	add r0, r2, r3
	add r0, r1, r0
	mov r1, #1
	strb r1, [r0]
_080F3AFE:
	pop {r4}
	pop {r0}
	bx r0
_080F3B04:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F3ABC

