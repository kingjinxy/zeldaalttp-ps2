	THUMB_FUNC_START sub_08025244
sub_08025244: @ 0x08025244
	push {lr}
	add r2, r0, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08025264
	mov r0, #127
	and r0, r0, r1
	cmp r0, #7
	bhi _08025264
	add r0, r2, #0
	bl DeleteThisEntity
	b _08025274
_08025264:
	ldr r0, _08025278  @ =gUnknown_0813C374
	ldrb r1, [r2, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
_08025274:
	pop {r0}
	bx r0
_08025278:
	.4byte gUnknown_0813C374
	THUMB_FUNC_END sub_08025244

