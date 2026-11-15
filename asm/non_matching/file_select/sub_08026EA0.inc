	THUMB_FUNC_START sub_08026EA0
sub_08026EA0: @ 0x08026EA0
	push {r4-r6,lr}
	add r6, r0, #0
	bl sub_080123E8
	add r5, r0, #0
	cmp r5, #0
	beq _08026EE6
	mov r4, #0
	mov r0, #3
	strb r0, [r5, #8]
	add r0, r6, #0
	add r0, r0, #112
	ldrb r0, [r0]
	strb r0, [r5, #9]
	add r0, r6, #0
	add r0, r0, #113
	ldrb r0, [r0]
	strb r0, [r5, #10]
	add r0, r6, #0
	add r0, r0, #114
	ldrb r0, [r0]
	strb r0, [r5, #11]
	ldrb r0, [r6, #23]
	strb r0, [r5, #23]
	add r0, r6, #0
	add r1, r5, #0
	bl sub_08044018
	mov r0, #4
	add r1, r5, #0
	bl sub_08012728
	add r0, r6, #0
	add r0, r0, #41
	strb r4, [r0]
_08026EE6:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08026EA0

