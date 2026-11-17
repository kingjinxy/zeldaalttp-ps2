	THUMB_FUNC_START sub_0801EA28
sub_0801EA28: @ 0x0801EA28
	push {r4,lr}
	add r4, r0, #0
	bl sub_0801ED3C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801EA3E
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #30
	b _0801EA4C
_0801EA3E:
	mov r0, #1
	strb r0, [r4, #20]
	bl sub_0800099C
	mov r1, #15
	and r0, r0, r1
	add r0, r0, #15
_0801EA4C:
	strb r0, [r4, #23]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801EA28

