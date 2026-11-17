	THUMB_FUNC_START sub_08023130
sub_08023130: @ 0x08023130
	push {r4,lr}
	add r4, r0, #0
	ldr r1, _08023174  @ =gUnknown_0813BE0C
	ldrb r0, [r4, #20]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	add r0, r4, #0
	bl GetNextFrame
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0802316E
	mov r0, #0
	strb r0, [r2]
	bl sub_0800099C
	add r2, r4, #0
	add r2, r2, #40
	mov r1, #56
	and r0, r0, r1
	ldrb r1, [r2]
	add r0, r0, r1
	strb r0, [r2]
_0802316E:
	pop {r4}
	pop {r0}
	bx r0
_08023174:
	.4byte gUnknown_0813BE0C
	THUMB_FUNC_END sub_08023130

