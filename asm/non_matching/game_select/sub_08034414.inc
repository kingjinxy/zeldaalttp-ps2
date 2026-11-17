	THUMB_FUNC_START sub_08034414
sub_08034414: @ 0x08034414
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
	bhi _08034446
	add r0, r4, #0
	add r0, r0, #98
	ldrh r0, [r0]
	ldrh r1, [r4, #54]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #12
	bls _0803447C
_08034446:
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
	bl sub_08003F54
	add r5, r4, #0
	add r5, r5, #43
	strb r0, [r5]
	bl sub_0800099C
	ldr r2, _0803449C  @ =gUnknown_08427AD2
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	ldrb r1, [r5]
	add r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	strb r0, [r5]
_0803447C:
	ldr r1, _080344A0  @ =gUnknown_0813E4CC
	ldrb r0, [r4, #23]
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r1
	mov r3, #0
	ldrsh r0, [r0, r3]
	asr r0, r0, #6
	strh r0, [r4, #58]
	ldrb r0, [r4, #23]
	add r0, r0, #1
	strb r0, [r4, #23]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803449C:
	.4byte gUnknown_08427AD2
_080344A0:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_08034414

