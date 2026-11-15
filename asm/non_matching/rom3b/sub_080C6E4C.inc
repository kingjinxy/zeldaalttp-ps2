	THUMB_FUNC_START sub_080C6E4C
sub_080C6E4C: @ 0x080C6E4C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080C6E78  @ =gRam
	ldr r4, _080C6E7C  @ =0x00000FC2
	add r2, r3, r4
	add r2, r0, r2
	strb r1, [r2]
	ldr r2, _080C6E80  @ =0x00000FA2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #6
	strb r2, [r1]
	add r4, r4, #80
	add r3, r3, r4
	add r0, r0, r3
	ldrb r1, [r0]
	add r1, r1, #4
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080C6E78:
	.4byte gRam
_080C6E7C:
	.4byte 0x00000FC2
_080C6E80:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080C6E4C

