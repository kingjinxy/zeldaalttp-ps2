	THUMB_FUNC_START sub_0801F8AC
sub_0801F8AC: @ 0x0801F8AC
	push {lr}
	add r3, r0, #0
	ldrb r2, [r3, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	sub r0, r0, #5
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r3, #28]
	ldrb r0, [r3, #23]
	sub r0, r0, #1
	strb r0, [r3, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801F8D4
	add r0, r3, #0
	bl DeleteThisEntity
_0801F8D4:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801F8AC

