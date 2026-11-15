	THUMB_FUNC_START sub_08069358
sub_08069358: @ 0x08069358
	push {lr}
	add r2, r0, #0
	add r0, r1, #0
	sub r1, r1, #1
	cmp r0, #0
	beq _08069372
	mov r3, #0
_08069366:
	strb r3, [r2]
	add r2, r2, #1
	add r0, r1, #0
	sub r1, r1, #1
	cmp r0, #0
	bne _08069366
_08069372:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08069358

	.byte 0x00
	.byte 0x00
