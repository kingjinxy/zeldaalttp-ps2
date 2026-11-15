	THUMB_FUNC_START sub_08024898
sub_08024898: @ 0x08024898
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #61
	ldrb r0, [r0]
	cmp r0, #0
	bne _080248D8
	ldrb r0, [r4, #23]
	sub r1, r0, #1
	strb r1, [r4, #23]
	lsl r0, r1, #24
	cmp r0, #0
	bne _080248B6
	mov r0, #23
	strb r0, [r4, #20]
	b _080248D8
_080248B6:
	mov r0, #15
	and r1, r1, r0
	cmp r1, #0
	bne _080248D2
	bl 0x0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #46
	bl play_sound
_080248D2:
	add r0, r4, #0
	bl sub_0803CC20
_080248D8:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024898

	.byte 0x00
	.byte 0x00
