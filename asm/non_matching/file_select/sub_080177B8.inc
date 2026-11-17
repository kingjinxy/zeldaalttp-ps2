	THUMB_FUNC_START sub_080177B8
sub_080177B8: @ 0x080177B8
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080177FA
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	mov r0, #144
	lsl r0, r0, #9
	str r0, [r4, #16]
	ldr r0, _08017800  @ =0x0000FFF8
	strh r0, [r4, #58]
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl sub_08009EA4
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #2
	bl sub_08003870
	mov r0, #49
	bl sub_08003DFC
_080177FA:
	pop {r4}
	pop {r0}
	bx r0
_08017800:
	.4byte 0x0000FFF8
	THUMB_FUNC_END sub_080177B8

