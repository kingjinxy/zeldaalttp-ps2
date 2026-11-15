	THUMB_FUNC_START sub_0801CABC
sub_0801CABC: @ 0x0801CABC
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r0, [r5, #10]
	cmp r0, #0
	beq _0801CB04
	add r0, r5, #0
	bl 0x080095A4
	ldr r4, _0801CB00  @ =gUnknown_0813A73C
	add r0, r5, #0
	bl 0x080098DC
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r4
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	add r0, r5, #0
	bl 0x08008D90
	ldrb r2, [r5, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r5, #31]
	ldrb r0, [r5, #29]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r5, #29]
	b _0801CB0A
_0801CB00:
	.4byte gUnknown_0813A73C
_0801CB04:
	add r0, r5, #0
	bl sub_0801CB60
_0801CB0A:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801CABC

