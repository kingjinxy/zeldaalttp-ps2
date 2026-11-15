	THUMB_FUNC_START sub_08016C5C
sub_08016C5C: @ 0x08016C5C
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #128
	bne _08016C86
	mov r0, #1
	strb r0, [r4, #20]
	bl 0x0800099C
	mov r1, #56
	and r0, r0, r1
	add r0, r0, #20
	strb r0, [r4, #23]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
_08016C86:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08016C5C

