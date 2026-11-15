	THUMB_FUNC_START sub_08036770
sub_08036770: @ 0x08036770
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _080367B0  @ =gUnknown_03000FC0
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _080367B0  @ =gUnknown_03000FC0
	ldrb r1, [r0, #1]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #1]
	ldr r0, _080367B0  @ =gUnknown_03000FC0
	mov r1, #0
	str r1, [r0, #4]
	ldr r0, _080367B0  @ =gUnknown_03000FC0
	ldr r1, [r7]
	str r1, [r0, #8]
	ldr r0, _080367B0  @ =gUnknown_03000FC0
	ldrh r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #12]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_080367B0:
	.4byte gUnknown_03000FC0
	THUMB_FUNC_END sub_08036770

