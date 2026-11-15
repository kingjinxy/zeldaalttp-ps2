	THUMB_FUNC_START sub_08043EA4
sub_08043EA4: @ 0x08043EA4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strb r0, [r1]
	add r0, r7, #0
	ldrb r1, [r0]
	mov r2, #15
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08043ED2
	add r0, r7, #0
	ldrb r1, [r0]
	lsr r0, r1, #4
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r1, r0, #24
	add r0, r1, #0
	b _08043ED6
_08043ED2:
	mov r0, #255
	b _08043ED6
_08043ED6:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08043EA4

	.byte 0x00
	.byte 0x00
