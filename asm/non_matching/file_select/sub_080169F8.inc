	THUMB_FUNC_START sub_080169F8
sub_080169F8: @ 0x080169F8
	push {r4,lr}
	add r4, r0, #0
	bl sub_0800099C
	ldr r2, _08016A30  @ =gUnknown_08139138
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r4, #23]
	bl sub_0800099C
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #3
	sub r1, r1, #1
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08016A30:
	.4byte gUnknown_08139138
	THUMB_FUNC_END sub_080169F8

