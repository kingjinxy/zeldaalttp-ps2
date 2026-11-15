	THUMB_FUNC_START sub_08019EC4
sub_08019EC4: @ 0x08019EC4
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r1, r4, #0
	add r1, r1, #112
	ldrh r0, [r1]
	cmp r0, #0
	beq _08019EDC
	sub r0, r0, #1
	strh r0, [r1]
	b _08019EF8
_08019EDC:
	add r0, r4, #0
	add r0, r0, #126
	ldrb r1, [r0]
	cmp r1, #0
	bne _08019EF8
	mov r0, #12
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #125
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
_08019EF8:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019EC4

	.byte 0x00
	.byte 0x00
