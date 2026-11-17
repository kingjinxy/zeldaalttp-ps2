	THUMB_FUNC_START sub_0802043C
sub_0802043C: @ 0x0802043C
	push {r4,lr}
	add r4, r0, #0
	ldr r1, [r4, #100]
	bl sub_08009EA4
	ldr r3, _08020474  @ =gUnknown_0813B5FC
	ldrb r2, [r4, #23]
	add r1, r2, #1
	strb r1, [r4, #23]
	mov r1, #1
	and r1, r1, r2
	add r1, r1, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #224
	lsl r0, r0, #9
	str r0, [r4, #16]
	mov r0, #49
	bl sub_08003DFC
	pop {r4}
	pop {r0}
	bx r0
_08020474:
	.4byte gUnknown_0813B5FC
	THUMB_FUNC_END sub_0802043C

