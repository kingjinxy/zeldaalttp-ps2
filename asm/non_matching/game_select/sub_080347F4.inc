	THUMB_FUNC_START sub_080347F4
sub_080347F4: @ 0x080347F4
	push {r4,lr}
	add r4, r0, #0
	bl sub_080036F8
	lsl r0, r0, #24
	cmp r0, #0
	beq _08034808
	add r0, r4, #0
	bl sub_0804C9C8
_08034808:
	mov r0, #155
	lsl r0, r0, #1
	ldr r1, [r4, #104]
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r2, r4, #0
	add r2, r2, #80
	ldrh r2, [r2]
	bl sub_080144F0
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080347F4

	.byte 0x00
	.byte 0x00
