	THUMB_FUNC_START sub_0801ACE8
sub_0801ACE8: @ 0x0801ACE8
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801AD34
	mov r3, #0
	mov r0, #4
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	add r0, r0, #113
	strb r3, [r0]
	sub r0, r0, #1
	strb r3, [r0]
	add r0, r0, #2
	strb r3, [r0]
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #2
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #2
	bl sub_08003870
	add r0, r4, #0
	bl sub_0801B4F4
_0801AD34:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801ACE8

	.byte 0x00
	.byte 0x00
