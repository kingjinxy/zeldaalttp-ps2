	THUMB_FUNC_START sub_080270C0
sub_080270C0: @ 0x080270C0
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _080270CE
	mov r0, #4
	b _080270E0
_080270CE:
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r0, [r4, #20]
	add r0, r0, #1
_080270E0:
	strb r0, [r4, #20]
	mov r2, #0
	mov r0, #30
	strb r0, [r4, #23]
	add r3, r4, #0
	add r3, r3, #94
	ldrb r1, [r3]
	sub r0, r0, #34
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r3]
	add r0, r4, #0
	add r0, r0, #46
	strb r2, [r0]
	ldr r0, _08027150  @ =gUnknown_0813CDF4
	str r0, [r4, #72]
	ldrb r0, [r4, #11]
	add r0, r0, #1
	lsl r0, r0, #6
	str r0, [r4, #12]
	ldrh r1, [r4, #50]
	add r0, r4, #0
	add r0, r0, #120
	strh r1, [r0]
	ldrh r0, [r4, #54]
	add r1, r4, #0
	add r1, r1, #122
	strh r0, [r1]
	ldr r3, _08027154  @ =gUnknown_0813CD4C
	ldr r2, _08027158  @ =gUnknown_03006C80
	ldrb r0, [r2, #1]
	lsl r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	mov r1, #15
	and r1, r1, r0
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r4, #30]
	ldrb r0, [r2, #1]
	lsl r0, r0, #2
	add r0, r0, r3
	ldrh r1, [r0]
	add r0, r4, #0
	bl sub_0802C070
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
_08027150:
	.4byte gUnknown_0813CDF4
_08027154:
	.4byte gUnknown_0813CD4C
_08027158:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_080270C0

