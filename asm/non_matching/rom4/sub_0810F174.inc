	THUMB_FUNC_START sub_0810F174
sub_0810F174: @ 0x0810F174
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810F190  @ =gRam
	ldr r2, _0810F194  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	mov r1, #1
	bl sub_0810F260
	pop {r0}
	bx r0
_0810F190:
	.4byte gRam
_0810F194:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_0810F174

