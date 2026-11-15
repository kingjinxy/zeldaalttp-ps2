	THUMB_FUNC_START sub_0801CE14
sub_0801CE14: @ 0x0801CE14
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #10]
	cmp r0, #2
	bne _0801CE38
	ldr r1, _0801CE34  @ =gUnknown_0813A780
	add r0, r4, #0
	bl 0x08009924
	ldr r0, [r4, #84]
	cmp r0, #0
	beq _0801CE48
	add r0, r4, #0
	bl sub_0801D330
	b _0801CE48
_0801CE34:
	.4byte gUnknown_0813A780
_0801CE38:
	ldr r0, _0801CE50  @ =gUnknown_0813A798
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
_0801CE48:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801CE50:
	.4byte gUnknown_0813A798
	THUMB_FUNC_END sub_0801CE14

