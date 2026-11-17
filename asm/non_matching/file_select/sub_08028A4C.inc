	THUMB_FUNC_START sub_08028A4C
sub_08028A4C: @ 0x08028A4C
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08028A80
	ldrb r0, [r4, #20]
	sub r0, r0, #3
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_08003870
_08028A80:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08028A4C

	.byte 0x00
	.byte 0x00
