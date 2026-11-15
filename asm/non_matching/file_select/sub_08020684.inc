	THUMB_FUNC_START sub_08020684
sub_08020684: @ 0x08020684
	push {r4,lr}
	add r4, r0, #0
	ldrb r2, [r4, #20]
	cmp r2, #0
	beq _080206BC
	add r1, r4, #0
	add r1, r1, #122
	ldrh r0, [r1]
	cmp r0, #0
	beq _0802069E
	sub r0, r0, #1
	strh r0, [r1]
	b _080206B4
_0802069E:
	cmp r2, #3
	bhi _080206B4
	add r0, r4, #0
	bl sub_080209A0
	add r1, r0, #0
	cmp r1, #0
	beq _080206B4
	add r0, r4, #0
	bl sub_080209DC
_080206B4:
	add r0, r4, #0
	mov r1, #128
	bl sub_08044240
_080206BC:
	ldr r0, _080206D8  @ =gUnknown_0813B694
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	add r0, r4, #0
	bl sub_08020C0C
	pop {r4}
	pop {r0}
	bx r0
_080206D8:
	.4byte gUnknown_0813B694
	THUMB_FUNC_END sub_08020684

