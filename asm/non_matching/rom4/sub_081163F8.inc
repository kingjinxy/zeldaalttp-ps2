	THUMB_FUNC_START sub_081163F8
sub_081163F8: @ 0x081163F8
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #4
	bl sub_080C18C8
	ldr r1, _08116420  @ =gRam
	ldr r2, _08116424  @ =0x00000E51
	add r1, r1, r2
	add r1, r4, r1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_08116010
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08116420:
	.4byte gRam
_08116424:
	.4byte 0x00000E51
	THUMB_FUNC_END sub_081163F8

