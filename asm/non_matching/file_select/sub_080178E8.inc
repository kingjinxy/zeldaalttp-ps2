	THUMB_FUNC_START sub_080178E8
sub_080178E8: @ 0x080178E8
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	cmp r1, #1
	bne _0801790A
	mov r0, #0
	strb r0, [r2]
	add r2, r2, #19
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	b _0801791E
_0801790A:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801791E
	mov r0, #1
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
_0801791E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080178E8

