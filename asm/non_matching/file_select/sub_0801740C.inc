	THUMB_FUNC_START sub_0801740C
sub_0801740C: @ 0x0801740C
	push {r4,lr}
	add r4, r0, #0
	bl 0x0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrb r0, [r1]
	bl sub_08043EA4
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #255
	beq _0801743E
	add r0, r4, #0
	add r0, r0, #42
	ldrb r2, [r0]
	cmp r1, r2
	beq _0801743E
	strb r1, [r0]
	add r0, r4, #0
	bl 0x08003870
_0801743E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801740C

