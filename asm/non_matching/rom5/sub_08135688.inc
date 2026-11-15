	THUMB_FUNC_START sub_08135688
sub_08135688: @ 0x08135688
	push {r4,lr}
	add r2, r0, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, [r2, #52]
	ldr r0, _081356AC  @ =0x68736D53
	cmp r3, r0
	bne _081356A4
	strh r1, [r2, #30]
	ldrh r4, [r2, #28]
	add r0, r1, #0
	mul r0, r4, r0
	asr r0, r0, #8
	strh r0, [r2, #32]
_081356A4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081356AC:
	.4byte 0x68736D53
	THUMB_FUNC_END sub_08135688

