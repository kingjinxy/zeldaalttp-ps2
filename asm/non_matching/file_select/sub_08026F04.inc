	THUMB_FUNC_START sub_08026F04
sub_08026F04: @ 0x08026F04
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r1, [r5, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r5, #28]
	add r0, r5, #0
	add r0, r0, #46
	mov r4, #0
	strb r4, [r0]
	add r1, r5, #0
	add r1, r1, #60
	mov r0, #216
	strb r0, [r1]
	add r1, r1, #10
	mov r0, #244
	strb r0, [r1]
	sub r1, r1, #6
	mov r0, #53
	strb r0, [r1]
	sub r1, r1, #1
	mov r0, #13
	strb r0, [r1]
	ldr r0, _08026F74  @ =gUnknown_0813CD2C
	str r0, [r5, #72]
	add r1, r1, #29
	ldr r0, _08026F78  @ =0x000007FF
	strh r0, [r1]
	ldrb r0, [r5, #20]
	add r0, r0, #1
	strb r0, [r5, #20]
	add r0, r5, #0
	bl sub_08003B94
	add r0, r5, #0
	mov r1, #0
	bl sub_08003870
	ldr r0, _08026F7C  @ =gUnknown_03000488
	mov r1, #128
	lsl r1, r1, #1
	strh r1, [r0]
	strh r1, [r0, #2]
	strh r4, [r0, #4]
	add r1, r5, #0
	bl sub_0803D770
	add r0, r5, #0
	bl sub_080005F0
	pop {r4,r5}
	pop {r0}
	bx r0
_08026F74:
	.4byte gUnknown_0813CD2C
_08026F78:
	.4byte 0x000007FF
_08026F7C:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_08026F04

