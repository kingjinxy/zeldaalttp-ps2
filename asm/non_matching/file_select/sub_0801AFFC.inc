	THUMB_FUNC_START sub_0801AFFC
sub_0801AFFC: @ 0x0801AFFC
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801B01E
	mov r0, #2
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #6
	and r0, r0, r1
	strb r0, [r4, #28]
_0801B01E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801AFFC

