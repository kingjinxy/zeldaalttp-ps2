	THUMB_FUNC_START sub_0802808C
sub_0802808C: @ 0x0802808C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #10]
	cmp r0, #8
	bhi _0802809E
	add r0, r4, #0
	bl sub_08000694
	b _080280A4
_0802809E:
	add r0, r4, #0
	bl sub_0800066C
_080280A4:
	ldr r1, _080280C0  @ =gUnknown_0813CE9C
	ldrb r0, [r4, #21]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	mov r0, #0
	str r0, [r4, #96]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080280C0:
	.4byte gUnknown_0813CE9C
	THUMB_FUNC_END sub_0802808C

