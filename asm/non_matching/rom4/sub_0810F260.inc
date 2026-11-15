	THUMB_FUNC_START sub_0810F260
sub_0810F260: @ 0x0810F260
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0810F280  @ =gRam
	ldr r4, _0810F284  @ =0x00001052
	add r2, r3, r4
	add r0, r0, r2
	strb r1, [r0]
	ldr r0, _0810F288  @ =0x00000B6C
	add r3, r3, r0
	mov r0, #255
	strb r0, [r3]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810F280:
	.4byte gRam
_0810F284:
	.4byte 0x00001052
_0810F288:
	.4byte 0x00000B6C
	THUMB_FUNC_END sub_0810F260

