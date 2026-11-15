	THUMB_FUNC_START sub_08028BA8
sub_08028BA8: @ 0x08028BA8
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	add r1, r0, #1
	strb r1, [r4, #23]
	lsl r0, r1, #24
	lsr r0, r0, #24
	ldrb r2, [r4, #24]
	cmp r0, r2
	bcs _08028BCC
	mov r0, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08028BE0
	add r0, r4, #0
	bl sub_08029720
	b _08028BE0
_08028BCC:
	add r0, r4, #0
	bl sub_080291F8
	mov r0, #8
	mov r1, #0
	bl sub_080161F8
	add r0, r4, #0
	bl DeleteThisEntity
_08028BE0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08028BA8

	.byte 0x00
	.byte 0x00
