	THUMB_FUNC_START sub_08033984
sub_08033984: @ 0x08033984
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r0, [r5, #23]
	cmp r0, #0
	beq _08033994
	sub r0, r0, #1
	strb r0, [r5, #23]
	b _080339BC
_08033994:
	ldrb r0, [r5, #24]
	cmp r0, #0
	bne _080339BC
	mov r0, #88
	mov r1, #9
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _080339BC
	ldr r3, _080339C8  @ =0xFFB40000
	add r0, r5, #0
	add r1, r4, #0
	mov r2, #0
	bl sub_0803D4A4
	str r5, [r4, #84]
	mov r0, #1
	strb r0, [r5, #24]
_080339BC:
	add r0, r5, #0
	bl GetNextFrame
	pop {r4,r5}
	pop {r0}
	bx r0
_080339C8:
	.4byte 0xFFB40000
	THUMB_FUNC_END sub_08033984

