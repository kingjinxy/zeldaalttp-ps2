	THUMB_FUNC_START sub_0801E750
sub_0801E750: @ 0x0801E750
	push {r4,lr}
	add r4, r0, #0
	mov r1, #192
	lsl r1, r1, #5
	bl 0x08003594
	cmp r0, #0
	bne _0801E766
	mov r0, #1
	strb r0, [r4, #20]
	strb r0, [r4, #23]
_0801E766:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E750

