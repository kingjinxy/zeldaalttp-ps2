	.syntax unified
	THUMB_FUNC_START sub_08002E50
sub_08002E50: @ 0X08002E50
	push {r4}
	movs r2, #94
	ldrb r4, [r0, r2]
	movs r3, #252
	ands r4, r3
	orrs r4, r1
	strb r4, [r0, r2]
	pop {r4}
	mov pc, lr
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
