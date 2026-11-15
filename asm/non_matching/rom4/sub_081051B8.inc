	THUMB_FUNC_START sub_081051B8
sub_081051B8: @ 0x081051B8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _081051D8  @ =gRam
	ldr r2, _081051DC  @ =0x00000EE2
	add r1, r1, r2
	add r1, r0, r1
	ldrb r2, [r1]
	mov r1, #16
	eor r1, r1, r2
	mov r2, #1
	bl sub_081051E0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081051D8:
	.4byte gRam
_081051DC:
	.4byte 0x00000EE2
	THUMB_FUNC_END sub_081051B8

