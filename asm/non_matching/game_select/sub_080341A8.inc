	THUMB_FUNC_START sub_080341A8
sub_080341A8: @ 0x080341A8
	push {r4,r5,lr}
	add r4, r0, #0
	bl sub_0803CC20
	add r0, r4, #0
	bl GetNextFrame
	add r2, r4, #0
	add r2, r2, #96
	ldrh r0, [r2]
	ldrh r1, [r4, #50]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #12
	bhi _080341DA
	add r0, r4, #0
	add r0, r0, #98
	ldrh r0, [r0]
	ldrh r1, [r4, #54]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #12
	bls _08034210
_080341DA:
	mov r1, #50
	ldrsh r0, [r4, r1]
	mov r3, #54
	ldrsh r1, [r4, r3]
	mov r5, #0
	ldrsh r2, [r2, r5]
	add r3, r4, #0
	add r3, r3, #98
	mov r5, #0
	ldrsh r3, [r3, r5]
	bl 0x08003F54
	add r5, r4, #0
	add r5, r5, #43
	strb r0, [r5]
	bl sub_0800099C
	ldr r2, _08034230  @ =gUnknown_08427A94
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	ldrb r1, [r5]
	add r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	strb r0, [r5]
_08034210:
	ldr r1, _08034234  @ =gUnknown_0813E4CC
	ldrb r0, [r4, #23]
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r1
	mov r3, #0
	ldrsh r0, [r0, r3]
	asr r0, r0, #6
	sub r0, r0, #8
	strh r0, [r4, #58]
	ldrb r0, [r4, #23]
	add r0, r0, #1
	strb r0, [r4, #23]
	pop {r4,r5}
	pop {r0}
	bx r0
_08034230:
	.4byte gUnknown_08427A94
_08034234:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_080341A8

