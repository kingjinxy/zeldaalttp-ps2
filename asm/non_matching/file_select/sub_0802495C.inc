	THUMB_FUNC_START sub_0802495C
sub_0802495C: @ 0x0802495C
	push {r4,lr}
	add r4, r0, #0
	ldr r1, [r4, #84]
	ldrb r0, [r1, #11]
	cmp r0, #0
	bne _08024990
	ldr r0, [r1, #84]
	add r0, r0, #124
	ldrb r0, [r0]
	cmp r0, #1
	bne _08024990
	add r0, r4, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08024990
	mov r0, #2
	strb r0, [r4, #20]
	bl sub_0800099C
	add r0, r0, #30
	mov r1, #15
	and r0, r0, r1
	strb r0, [r4, #23]
_08024990:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802495C

	.byte 0x00
	.byte 0x00
