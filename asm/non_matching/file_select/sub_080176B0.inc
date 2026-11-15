	THUMB_FUNC_START sub_080176B0
sub_080176B0: @ 0x080176B0
	push {lr}
	add r2, r0, #0
	add r0, r0, #69
	ldrb r1, [r0]
	cmp r1, #0
	beq _080176CA
	add r0, r0, #55
	ldrb r0, [r0]
	cmp r0, r1
	beq _080176CA
	mov r0, #9
	strb r0, [r2, #20]
	b _080176D2
_080176CA:
	ldr r1, _080176D8  @ =gUnknown_0813959C
	add r0, r2, #0
	bl 0x080098A0
_080176D2:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080176D8:
	.4byte gUnknown_0813959C
	THUMB_FUNC_END sub_080176B0

