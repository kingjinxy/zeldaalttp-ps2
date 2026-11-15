	THUMB_FUNC_START sub_0801BBC4
sub_0801BBC4: @ 0x0801BBC4
	push {r4,lr}
	add r4, r0, #0
	bl sub_0801BE44
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801BBE2
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #23]
	add r0, r4, #0
	mov r1, #92
	bl 0x08003E10
_0801BBE2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801BBC4

