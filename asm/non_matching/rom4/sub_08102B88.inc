	THUMB_FUNC_START sub_08102B88
sub_08102B88: @ 0x08102B88
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08102BC4  @ =gRam
	ldr r2, _08102BC8  @ =0x00000F52
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	mov r2, #2
	strb r2, [r1]
	ldr r2, _08102BCC  @ =0x00001172
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	sub r2, r2, #48
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	add r2, r2, #16
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	ldr r1, _08102BD0  @ =0x00000FC2
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #63
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_08102BC4:
	.4byte gRam
_08102BC8:
	.4byte 0x00000F52
_08102BCC:
	.4byte 0x00001172
_08102BD0:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_08102B88

