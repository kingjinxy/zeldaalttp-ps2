	THUMB_FUNC_START sub_0801AA3C
sub_0801AA3C: @ 0x0801AA3C
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801AA58
	add r0, r4, #0
	bl sub_0801AA60
_0801AA58:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801AA3C

	.byte 0x00
	.byte 0x00
