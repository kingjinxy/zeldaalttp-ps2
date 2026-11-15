	THUMB_FUNC_START sub_08135A54
sub_08135A54: @ 0x08135A54
	push {lr}
	ldr r2, [r1, #64]
	ldrb r3, [r2]
	add r2, r2, #1
	str r2, [r1, #64]
	ldr r2, _08135A70  @ =gUnknown_083C28FC
	lsl r3, r3, #2
	add r3, r3, r2
	ldr r2, [r3]
	bl _call_via_r2
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08135A70:
	.4byte gUnknown_083C28FC
	THUMB_FUNC_END sub_08135A54

