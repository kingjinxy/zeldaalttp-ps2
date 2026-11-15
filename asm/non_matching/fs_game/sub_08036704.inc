	THUMB_FUNC_START sub_08036704
sub_08036704: @ 0x08036704
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strb r0, [r1]
	ldr r0, _0803675C  @ =gUnknown_03000FC0
	add r1, r7, #0
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, _0803675C  @ =gUnknown_03000FC0
	ldrb r1, [r0, #1]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #1]
	ldr r0, _0803675C  @ =gUnknown_03000FC0
	mov r1, #1
	str r1, [r0, #4]
	ldr r0, _0803675C  @ =gUnknown_03000FC0
	mov r1, #0
	str r1, [r0, #8]
	ldr r0, _0803675C  @ =gUnknown_03000FC0
	ldrh r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #12]
	ldr r0, _0803675C  @ =gUnknown_03000FC0
	ldrb r1, [r0, #14]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #14]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0803675C:
	.4byte gUnknown_03000FC0
	THUMB_FUNC_END sub_08036704

