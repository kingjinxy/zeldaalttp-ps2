	THUMB_FUNC_START sub_08102318
sub_08102318: @ 0x08102318
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r3, _08102344  @ =gRam
	ldr r2, _08102348  @ =0x00000FC2
	add r0, r3, r2
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _0810233C
	ldr r4, _0810234C  @ =0x00000F52
	add r0, r3, r4
	add r0, r1, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #55
	strb r0, [r2]
_0810233C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08102344:
	.4byte gRam
_08102348:
	.4byte 0x00000FC2
_0810234C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08102318

