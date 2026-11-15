	THUMB_FUNC_START sub_08013C04
sub_08013C04: @ 0x08013C04
	push {r4,lr}
	add r4, r0, #0
	mov r0, #15
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r3, r0, #0
	cmp r3, #0
	beq _08013C48
	ldrh r1, [r4]
	mov r0, #63
	and r0, r0, r1
	lsl r0, r0, #4
	mov r2, #8
	orr r0, r0, r2
	strh r0, [r3, #50]
	ldrh r1, [r4]
	mov r0, #252
	lsl r0, r0, #4
	and r0, r0, r1
	lsr r0, r0, #2
	orr r0, r0, r2
	strh r0, [r3, #54]
	ldrh r1, [r4]
	mov r0, #192
	lsl r0, r0, #8
	and r0, r0, r1
	add r1, r3, #0
	add r1, r1, #80
	strh r0, [r1]
	add r0, r3, #0
	bl 0x08008DD8
_08013C48:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08013C04

	.byte 0x00
	.byte 0x00
