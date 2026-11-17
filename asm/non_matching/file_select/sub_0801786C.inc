	THUMB_FUNC_START sub_0801786C
sub_0801786C: @ 0x0801786C
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	cmp r1, #1
	bne _0801788E
	mov r0, #0
	strb r0, [r2]
	add r2, r2, #19
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	b _080178B2
_0801788E:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080178B2
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	bl sub_0800099C
	mov r1, #112
	and r0, r0, r1
	add r0, r0, #30
	strb r0, [r4, #23]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r4, #28]
_080178B2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801786C

