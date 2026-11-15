	THUMB_FUNC_START sub_08013D20
sub_08013D20: @ 0x08013D20
	push {r4,r5,lr}
	sub sp, sp, #32
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r2, sp
	ldr r1, _08013D50  @ =gUnknown_0813813C
	ldm r1!, {r3-r5}
	stm r2!, {r3-r5}
	ldm r1!, {r3-r5}
	stm r2!, {r3-r5}
	ldm r1!, {r3,r4}
	stm r2!, {r3,r4}
	lsr r1, r0, #5
	lsl r1, r1, #2
	mov r5, sp
	add r2, r5, r1
	mov r1, #31
	and r1, r1, r0
	ldr r0, [r2]
	lsl r0, r0, r1
	add sp, sp, #32
	pop {r4,r5}
	pop {r1}
	bx r1
_08013D50:
	.4byte gUnknown_0813813C
	THUMB_FUNC_END sub_08013D20

