	THUMB_FUNC_START sub_08105190
sub_08105190: @ 0x08105190
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _081051B0  @ =gRam
	ldr r2, _081051B4  @ =0x00000EE2
	add r1, r1, r2
	add r1, r0, r1
	ldrb r2, [r1]
	mov r1, #16
	eor r1, r1, r2
	mov r2, #0
	bl sub_081051E0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081051B0:
	.4byte gRam
_081051B4:
	.4byte 0x00000EE2
	THUMB_FUNC_END sub_08105190

