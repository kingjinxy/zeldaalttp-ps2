	THUMB_FUNC_START sub_0802AE58
sub_0802AE58: @ 0x0802AE58
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r0, [r5, #20]
	add r0, r0, #1
	mov r2, #0
	strb r0, [r5, #20]
	ldrb r1, [r5, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r5, #28]
	add r0, r5, #0
	add r0, r0, #46
	strb r2, [r0]
	ldr r0, _0802AED0  @ =gUnknown_084276E4
	str r0, [r5, #72]
	add r1, r5, #0
	add r1, r1, #64
	mov r0, #56
	strb r0, [r1]
	sub r1, r1, #1
	mov r0, #31
	strb r0, [r1]
	sub r1, r1, #3
	mov r0, #201
	strb r0, [r1]
	add r1, r1, #32
	mov r4, #0
	mov r0, #85
	strh r0, [r1]
	bl sub_0800099C
	mov r1, #7
	and r0, r0, r1
	mov r1, #240
	sub r1, r1, r0
	add r0, r5, #0
	add r0, r0, #70
	strb r1, [r0]
	mov r1, #50
	ldrsh r0, [r5, r1]
	str r0, [r5, #96]
	mov r1, #54
	ldrsh r0, [r5, r1]
	str r0, [r5, #100]
	ldrb r1, [r5, #11]
	lsl r0, r1, #2
	add r0, r0, r1
	add r0, r0, #10
	str r0, [r5, #104]
	strb r4, [r5, #11]
	ldrb r1, [r5, #10]
	add r0, r5, #0
	bl sub_08003870
	pop {r4,r5}
	pop {r0}
	bx r0
_0802AED0:
	.4byte gUnknown_084276E4
	THUMB_FUNC_END sub_0802AE58

