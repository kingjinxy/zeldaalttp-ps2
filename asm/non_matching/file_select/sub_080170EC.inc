	THUMB_FUNC_START sub_080170EC
sub_080170EC: @ 0x080170EC
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801710E
	bl sub_0800099C
	mov r1, #28
	and r0, r0, r1
	add r0, r0, #30
	strb r0, [r4, #23]
	add r0, r4, #0
	bl sub_0801740C
_0801710E:
	add r0, r4, #0
	bl sub_0800963C
	add r0, r4, #0
	bl GetNextFrame
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080170EC

