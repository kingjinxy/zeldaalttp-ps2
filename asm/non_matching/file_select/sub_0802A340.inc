	THUMB_FUNC_START sub_0802A340
sub_0802A340: @ 0x0802A340
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #11]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #3
	bne _0802A35C
	mov r0, #128
	and r0, r0, r1
	ldr r1, _0802A3BC  @ =gUnknown_03006C80
	ldrb r1, [r1]
	sub r1, r1, #2
	orr r0, r0, r1
	strb r0, [r4, #11]
_0802A35C:
	mov r3, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r2, [r4, #28]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	orr r0, r0, r3
	strb r0, [r4, #28]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	and r1, r1, r0
	strb r1, [r2]
	ldr r0, _0802A3C0  @ =gUnknown_0813D4CC
	str r0, [r4, #72]
	add r0, r4, #0
	bl 0x08008DD8
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	ldrb r0, [r4, #11]
	lsr r0, r0, #7
	add r1, r4, #0
	add r1, r1, #124
	strh r0, [r1]
	ldrb r1, [r4, #11]
	mov r0, #3
	and r0, r0, r1
	strb r0, [r4, #11]
	ldr r1, _0802A3BC  @ =gUnknown_03006C80
	ldrb r0, [r1, #2]
	cmp r0, #0
	beq _0802A3C8
	ldr r0, _0802A3C4  @ =gUnknown_0813D480
	ldrb r1, [r4, #11]
	add r1, r1, #12
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r1, [r1]
	add r0, r4, #0
	bl sub_0802C070
	b _0802A3E0
	.byte 0x00
	.byte 0x00
_0802A3BC:
	.4byte gUnknown_03006C80
_0802A3C0:
	.4byte gUnknown_0813D4CC
_0802A3C4:
	.4byte gUnknown_0813D480
_0802A3C8:
	ldr r2, _0802A3E8  @ =gUnknown_0813D480
	ldrb r1, [r1, #1]
	lsl r0, r1, #1
	add r0, r0, r1
	ldrb r1, [r4, #11]
	add r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r1, [r0]
	add r0, r4, #0
	bl sub_0802C070
_0802A3E0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802A3E8:
	.4byte gUnknown_0813D480
	THUMB_FUNC_END sub_0802A340

