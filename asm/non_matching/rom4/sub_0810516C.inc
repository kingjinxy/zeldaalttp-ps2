	THUMB_FUNC_START sub_0810516C
sub_0810516C: @ 0x0810516C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08105188  @ =gRam
	ldr r2, _0810518C  @ =0x00000ED2
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	mov r2, #3
	bl sub_081051E0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08105188:
	.4byte gRam
_0810518C:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_0810516C

