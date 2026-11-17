	THUMB_FUNC_START sub_08021B8C
sub_08021B8C: @ 0x08021B8C
	push {r4,lr}
	add r4, r0, #0
	bl sub_08022D50
	add r0, r4, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08021BB0
	add r0, r4, #0
	add r0, r0, #114
	ldrb r0, [r0]
	strb r0, [r4, #20]
_08021BB0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08021B8C

	.byte 0x00
	.byte 0x00
