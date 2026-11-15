	THUMB_FUNC_START sub_08021F08
sub_08021F08: @ 0x08021F08
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	bl 0x08002E64
	ldrb r0, [r4, #23]
	add r1, r0, #0
	cmp r1, #0
	beq _08021F24
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _08021F2A
_08021F24:
	mov r0, #10
	strb r0, [r4, #20]
	strb r1, [r4, #23]
_08021F2A:
	add r0, r4, #0
	bl sub_08022734
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08021F08

	.byte 0x00
	.byte 0x00
