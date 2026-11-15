	THUMB_FUNC_START sub_0803597C
sub_0803597C: @ 0x0803597C
	push {r4,lr}
	add r4, r0, #0
	mov r0, #1
	strb r0, [r4, #20]
	mov r0, #192
	lsl r0, r0, #1
	str r0, [r4, #12]
	add r1, r4, #0
	add r1, r1, #43
	mov r0, #16
	strb r0, [r1]
	mov r0, #252
	lsl r0, r0, #1
	strh r0, [r4, #50]
	sub r0, r0, #176
	strh r0, [r4, #54]
	ldr r0, _080359B4  @ =gUnknown_03000450
	str r4, [r0]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	add r0, r4, #0
	bl sub_080361C0
	pop {r4}
	pop {r0}
	bx r0
_080359B4:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_0803597C

