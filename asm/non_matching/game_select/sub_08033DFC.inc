	THUMB_FUNC_START sub_08033DFC
sub_08033DFC: @ 0x08033DFC
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08033E10
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _08033E3A
_08033E10:
	mov r0, #88
	mov r1, #3
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08033E3A
	ldr r3, _08033E40  @ =0xFFF80000
	add r0, r4, #0
	mov r2, #0
	bl sub_0803D4A4
	ldr r2, _08033E44  @ =gUnknown_0201F000
	ldr r0, [r2]
	mov r1, #2
	orr r0, r0, r1
	str r0, [r2]
	add r0, r4, #0
	bl DeleteThisEntity
_08033E3A:
	pop {r4}
	pop {r0}
	bx r0
_08033E40:
	.4byte 0xFFF80000
_08033E44:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08033DFC

