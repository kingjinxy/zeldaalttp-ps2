	THUMB_FUNC_START sub_08012A24
sub_08012A24: @ 0x08012A24
	push {r4,lr}
	add r2, r0, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _08012A3C  @ =0x0000FFFF
	add r4, r3, #0
_08012A30:
	ldrh r0, [r2]
	cmp r0, r1
	bne _08012A40
	ldrh r3, [r2, #2]
	b _08012A48
	.byte 0x00
	.byte 0x00
_08012A3C:
	.4byte 0x0000FFFF
_08012A40:
	add r2, r2, #4
	ldrh r0, [r2]
	cmp r0, r4
	bne _08012A30
_08012A48:
	add r0, r3, #0
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08012A24

