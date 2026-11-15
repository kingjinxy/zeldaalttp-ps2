	THUMB_FUNC_START sub_08059A2C
sub_08059A2C: @ 0x08059A2C
	push {r7,lr}
	mov r7, sp
	ldr r0, _08059A38  @ =gUnknown_0202E1E4
	ldr r1, [r0]
	add r0, r1, #0
	b _08059A3C
_08059A38:
	.4byte gUnknown_0202E1E4
_08059A3C:
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08059A2C

	.byte 0x00
	.byte 0x00
