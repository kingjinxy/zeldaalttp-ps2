	THUMB_FUNC_START sub_08020144
sub_08020144: @ 0x08020144
	push {lr}
	add r2, r0, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _08020160
	cmp r0, #12
	beq _08020160
	mov r1, #0
	mov r0, #3
	strb r0, [r2, #20]
	add r0, r2, #0
	add r0, r0, #66
	strb r1, [r0]
_08020160:
	ldr r1, _0802016C  @ =gUnknown_0813B5D4
	add r0, r2, #0
	bl 0x080098A0
	pop {r0}
	bx r0
_0802016C:
	.4byte gUnknown_0813B5D4
	THUMB_FUNC_END sub_08020144

