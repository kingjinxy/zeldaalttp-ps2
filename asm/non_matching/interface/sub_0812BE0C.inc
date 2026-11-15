	THUMB_FUNC_START sub_0812BE0C
sub_0812BE0C: @ 0x0812BE0C
	push {r4-r6,lr}
	add r4, r0, #0
	cmp r4, #0
	beq _0812BE34
	add r1, r4, #0
	add r1, r1, #73
	ldrb r6, [r1]
	mov r0, #0
	strb r0, [r1]
	ldr r0, [r4, #12]
	add r5, r1, #0
	cmp r0, #0
	beq _0812BE32
_0812BE26:
	ldr r4, [r0, #116]
	bl sub_0812B980
	add r0, r4, #0
	cmp r0, #0
	bne _0812BE26
_0812BE32:
	strb r6, [r5]
_0812BE34:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812BE0C

	.byte 0x00
	.byte 0x00
