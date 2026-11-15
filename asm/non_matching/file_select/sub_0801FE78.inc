	THUMB_FUNC_START sub_0801FE78
sub_0801FE78: @ 0x0801FE78
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #2
	bhi _0801FE8E
	mov r0, #3
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #12
	bl sub_0801FCC4
_0801FE8E:
	ldr r1, _0801FE9C  @ =gUnknown_0813B514
	add r0, r4, #0
	bl 0x080098A0
	pop {r4}
	pop {r0}
	bx r0
_0801FE9C:
	.4byte gUnknown_0813B514
	THUMB_FUNC_END sub_0801FE78

