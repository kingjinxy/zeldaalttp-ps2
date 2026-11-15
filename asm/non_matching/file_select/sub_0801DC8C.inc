	THUMB_FUNC_START sub_0801DC8C
sub_0801DC8C: @ 0x0801DC8C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #0
	beq _0801DC9E
	add r0, r4, #0
	mov r1, #128
	bl sub_08044240
_0801DC9E:
	ldr r0, _0801DCB4  @ =gUnknown_0813AAE4
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
_0801DCB4:
	.4byte gUnknown_0813AAE4
	THUMB_FUNC_END sub_0801DC8C

