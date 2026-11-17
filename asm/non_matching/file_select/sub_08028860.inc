	THUMB_FUNC_START sub_08028860
sub_08028860: @ 0x08028860
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	mov r2, #4
	neg r2, r2
	add r0, r2, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #94
	ldrb r0, [r1]
	and r2, r2, r0
	strb r2, [r1]
	add r2, r4, #0
	add r2, r2, #60
	mov r0, #9
	strb r0, [r2]
	sub r1, r1, #30
	mov r0, #56
	strb r0, [r1]
	sub r1, r1, #1
	mov r0, #1
	strb r0, [r1]
	ldr r0, _080288F0  @ =gUnknown_0813D0C0
	str r0, [r4, #72]
	add r1, r1, #29
	mov r0, #170
	strh r0, [r1]
	ldrb r0, [r4, #11]
	lsr r0, r0, #5
	add r5, r4, #0
	add r5, r5, #42
	strb r0, [r5]
	ldrb r1, [r4, #11]
	mov r0, #31
	and r0, r0, r1
	strb r0, [r4, #11]
	ldrb r0, [r5]
	cmp r0, #3
	bhi _080288C6
	mov r0, #3
	strb r0, [r4, #20]
	ldrb r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2]
_080288C6:
	ldrb r0, [r4, #10]
	bl sub_08013D20
	str r0, [r4, #96]
	ldrb r1, [r5]
	add r0, r4, #0
	bl sub_08003870
	ldr r1, _080288F4  @ =gUnknown_0813D008
	ldr r0, _080288F8  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	add r0, r4, #0
	bl sub_0802C070
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080288F0:
	.4byte gUnknown_0813D0C0
_080288F4:
	.4byte gUnknown_0813D008
_080288F8:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08028860

