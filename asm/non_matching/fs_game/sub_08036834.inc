	THUMB_FUNC_START sub_08036834
sub_08036834: @ 0x08036834
	push {r7,lr}
	mov r7, sp
	bl sub_0800C41C
	mov r0, #0
	bl sub_080366D0
	ldr r0, _08036860  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #3]
	ldr r0, _08036860  @ =gUnknown_03000FC0
	ldrb r1, [r0, #14]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #14]
	pop {r7}
	pop {r0}
	bx r0
_08036860:
	.4byte gUnknown_03000FC0
	THUMB_FUNC_END sub_08036834

