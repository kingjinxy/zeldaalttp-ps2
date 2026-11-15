	THUMB_FUNC_START sub_08016DB8
sub_08016DB8: @ 0x08016DB8
	push {r4,lr}
	add r4, r0, #0
	bl 0x0800963C
	mov r1, #128
	lsl r1, r1, #6
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _08016DF2
	mov r0, #5
	strb r0, [r4, #20]
	ldr r0, [r4, #12]
	sub r0, r0, #64
	str r0, [r4, #12]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r1, [r2]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #4
	bl 0x08003870
_08016DF2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08016DB8

