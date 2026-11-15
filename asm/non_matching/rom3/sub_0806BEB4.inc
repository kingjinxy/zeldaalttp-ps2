	THUMB_FUNC_START sub_0806BEB4
sub_0806BEB4: @ 0x0806BEB4
	push {r4,lr}
	sub sp, sp, #4
	ldr r4, _0806BEE4  @ =gRam
	ldr r0, _0806BEE8  @ =0x00000A3C
	add r1, r4, r0
	ldr r0, _0806BEEC  @ =0x0000FFF1
	strh r0, [r1]
	mov r1, sp
	mov r0, #127
	strh r0, [r1]
	ldr r1, _0806BEF0  @ =0x06008000
	ldr r2, _0806BEF4  @ =0x01001000
	mov r0, sp
	bl CpuSet
	ldr r0, _0806BEF8  @ =0x000009AC
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_0806BEE4:
	.4byte gRam
_0806BEE8:
	.4byte 0x00000A3C
_0806BEEC:
	.4byte 0x0000FFF1
_0806BEF0:
	.4byte 0x06008000
_0806BEF4:
	.4byte 0x01001000
_0806BEF8:
	.4byte 0x000009AC
	THUMB_FUNC_END sub_0806BEB4

