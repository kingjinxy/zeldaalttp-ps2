	THUMB_FUNC_START sub_08035D88
sub_08035D88: @ 0x08035D88
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldr r0, [r4, #88]
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _08035DB4
	mov r0, #13
	strb r0, [r4, #20]
	mov r0, #8
	strb r0, [r4, #23]
	ldr r0, _08035DBC  @ =0x0000021F
	bl play_sound
	ldr r1, _08035DC0  @ =gUnknown_03000520
	mov r0, #22
	strb r0, [r1, #7]
	add r0, r0, #234
	bl sub_0800C1EC
_08035DB4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08035DBC:
	.4byte 0x0000021F
_08035DC0:
	.4byte gUnknown_03000520
	THUMB_FUNC_END sub_08035D88

