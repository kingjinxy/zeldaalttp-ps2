	THUMB_FUNC_START sub_08135A88
sub_08135A88: @ 0x08135A88
	push {r4,lr}
	ldr r2, [r1, #64]
	ldr r0, _08135AC0  @ =0xFFFFFF00
	and r4, r4, r0
	ldrb r0, [r2]
	orr r4, r4, r0
	ldrb r0, [r2, #1]
	lsl r3, r0, #8
	ldr r0, _08135AC4  @ =0xFFFF00FF
	and r4, r4, r0
	orr r4, r4, r3
	ldrb r0, [r2, #2]
	lsl r3, r0, #16
	ldr r0, _08135AC8  @ =0xFF00FFFF
	and r4, r4, r0
	orr r4, r4, r3
	ldrb r0, [r2, #3]
	lsl r3, r0, #24
	ldr r0, _08135ACC  @ =0x00FFFFFF
	and r4, r4, r0
	orr r4, r4, r3
	str r4, [r1, #40]
	add r2, r2, #4
	str r2, [r1, #64]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08135AC0:
	.4byte 0xFFFFFF00
_08135AC4:
	.4byte 0xFFFF00FF
_08135AC8:
	.4byte 0xFF00FFFF
_08135ACC:
	.4byte 0x00FFFFFF
	THUMB_FUNC_END sub_08135A88

