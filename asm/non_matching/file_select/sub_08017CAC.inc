	THUMB_FUNC_START sub_08017CAC
sub_08017CAC: @ 0x08017CAC
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r1, [r4, #29]
	mov r5, #63
	add r0, r5, #0
	and r0, r0, r1
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r4, #29]
	ldrb r1, [r4, #31]
	add r0, r5, #0
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #31]
	mov r1, #192
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _08017D0E
	mov r0, #5
	strb r0, [r4, #20]
	ldrb r1, [r4, #29]
	add r0, r5, #0
	and r0, r0, r1
	mov r2, #128
	orr r0, r0, r2
	strb r0, [r4, #29]
	ldrb r1, [r4, #31]
	add r0, r5, #0
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #31]
	mov r0, #128
	lsl r0, r0, #2
	str r0, [r4, #12]
	bl 0x0800099C
	mov r1, #24
	and r0, r0, r1
	add r0, r0, #4
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #2
	bl sub_08017D78
_08017D0E:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017CAC

