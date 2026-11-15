	THUMB_FUNC_START sub_0802AC68
sub_0802AC68: @ 0x0802AC68
	push {r4,lr}
	add r4, r0, #0
	bl 0x08009664
	add r0, r4, #0
	bl 0x08008E50
	mov r1, #128
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _0802AC9E
	mov r0, #4
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #8
	and r0, r0, r1
	strb r0, [r4, #28]
	add r0, r4, #0
	bl sub_0802ACA4
	ldrb r1, [r4, #10]
	mov r0, #30
	bl sub_080161F8
_0802AC9E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802AC68

