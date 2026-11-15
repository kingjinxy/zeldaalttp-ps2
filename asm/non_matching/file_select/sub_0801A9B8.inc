	THUMB_FUNC_START sub_0801A9B8
sub_0801A9B8: @ 0x0801A9B8
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801A9F8
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #176
	lsl r0, r0, #9
	str r0, [r4, #16]
	bl sub_08044594
	add r1, r0, #0
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #3
	bl 0x08003870
	mov r0, #49
	bl 0x08003DFC
_0801A9F8:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A9B8

	.byte 0x00
	.byte 0x00
