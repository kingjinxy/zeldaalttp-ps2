	THUMB_FUNC_START sub_0811BE34
sub_0811BE34: @ 0x0811BE34
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0811BE60  @ =gRam
	ldr r2, _0811BE64  @ =0x00000DD9
	add r1, r3, r2
	add r1, r0, r1
	ldr r4, _0811BE68  @ =0x00001733
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _0811BE6C  @ =0x00000DC5
	add r1, r3, r2
	add r0, r0, r1
	sub r4, r4, #1
	add r3, r3, r4
	ldrb r1, [r3]
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811BE60:
	.4byte gRam
_0811BE64:
	.4byte 0x00000DD9
_0811BE68:
	.4byte 0x00001733
_0811BE6C:
	.4byte 0x00000DC5
	THUMB_FUNC_END sub_0811BE34

