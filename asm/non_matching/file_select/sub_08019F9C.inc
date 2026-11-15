	THUMB_FUNC_START sub_08019F9C
sub_08019F9C: @ 0x08019F9C
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08019FC2
	mov r0, #15
	strb r0, [r4, #20]
	mov r0, #240
	strb r0, [r4, #23]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
_08019FC2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019F9C

