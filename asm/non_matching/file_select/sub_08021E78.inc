	THUMB_FUNC_START sub_08021E78
sub_08021E78: @ 0x08021E78
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	mov r0, #9
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #30
	bl sub_08003870
	add r0, r4, #0
	bl sub_08022764
	add r0, r4, #0
	bl sub_08022734
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08021E78

