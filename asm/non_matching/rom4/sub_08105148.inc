	THUMB_FUNC_START sub_08105148
sub_08105148: @ 0x08105148
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08105164  @ =gRam
	ldr r2, _08105168  @ =0x00000ED2
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	mov r2, #2
	bl sub_081051E0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08105164:
	.4byte gRam
_08105168:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_08105148

