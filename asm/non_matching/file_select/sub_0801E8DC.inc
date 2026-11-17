	THUMB_FUNC_START sub_0801E8DC
sub_0801E8DC: @ 0x0801E8DC
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801E8F6
	mov r0, #1
	strb r0, [r4, #20]
_0801E8F6:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E8DC

