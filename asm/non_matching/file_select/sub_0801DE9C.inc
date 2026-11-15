	THUMB_FUNC_START sub_0801DE9C
sub_0801DE9C: @ 0x0801DE9C
	push {r4,lr}
	add r4, r0, #0
	mov r1, #0
	bl sub_0801DEC0
	ldrb r0, [r4, #24]
	cmp r0, #0
	bne _0801DEBA
	add r0, r4, #0
	bl sub_0801DF24
	add r1, r4, #0
	add r1, r1, #113
	mov r0, #120
	strb r0, [r1]
_0801DEBA:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801DE9C

