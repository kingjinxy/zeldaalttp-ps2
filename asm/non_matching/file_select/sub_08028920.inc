	THUMB_FUNC_START sub_08028920
sub_08028920: @ 0x08028920
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0802895A
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	add r1, r4, #0
	add r1, r1, #42
	ldrb r0, [r1]
	sub r0, r0, #4
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl 0x08003870
_0802895A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08028920

