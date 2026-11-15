	THUMB_FUNC_START sub_080C7A80
sub_080C7A80: @ 0x080C7A80
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r4, #1
_080C7A88:
	lsl r1, r4, #24
	lsr r1, r1, #24
	add r0, r5, #0
	bl sub_080C7384
	sub r4, r4, #1
	cmp r4, #0
	bge _080C7A88
	mov r4, #3
_080C7A9A:
	lsl r1, r4, #24
	lsr r1, r1, #24
	add r0, r5, #0
	bl sub_080C7278
	sub r4, r4, #1
	cmp r4, #1
	bne _080C7A9A
	add r0, r5, #0
	bl sub_080C70E8
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C7A80

	.byte 0x00
	.byte 0x00
