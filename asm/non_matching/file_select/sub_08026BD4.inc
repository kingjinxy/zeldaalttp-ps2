	THUMB_FUNC_START sub_08026BD4
sub_08026BD4: @ 0x08026BD4
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #100
	ldrh r0, [r0]
	bl 0x08000A40
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r4, #23]
	cmp r0, r1
	bcs _08026BF4
	add r0, r4, #0
	mov r1, #0
	bl sub_08026CC0
	b _08026BF8
_08026BF4:
	mov r0, #3
	strb r0, [r4, #20]
_08026BF8:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08026BD4

	.byte 0x00
	.byte 0x00
