	THUMB_FUNC_START sub_0802CA70
sub_0802CA70: @ 0x0802CA70
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0802CAA4  @ =gUnknown_02030A70
	mov r1, #3
	and r0, r0, r1
	ldrb r4, [r3, #9]
	mov r2, #4
	neg r2, r2
	add r1, r2, #0
	and r1, r1, r4
	orr r1, r1, r0
	strb r1, [r3, #9]
	ldrb r1, [r3, #1]
	and r2, r2, r1
	orr r2, r2, r0
	strb r2, [r3, #1]
	mov r0, #0
	bl sub_0802D858
	mov r0, #1
	bl sub_0802D858
	pop {r4}
	pop {r0}
	bx r0
_0802CAA4:
	.4byte gUnknown_02030A70
	THUMB_FUNC_END sub_0802CA70

