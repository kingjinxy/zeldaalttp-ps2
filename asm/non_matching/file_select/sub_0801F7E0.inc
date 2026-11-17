	THUMB_FUNC_START sub_0801F7E0
sub_0801F7E0: @ 0x0801F7E0
	push {r4,r5,lr}
	add r5, r0, #0
	mov r4, #1
	mov r0, #1
	strb r0, [r5, #20]
	bl sub_0800099C
	strb r0, [r5, #24]
	ldrb r1, [r5, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r4
	strb r0, [r5, #28]
	ldr r0, _0801F82C  @ =gUnknown_0813B224
	str r0, [r5, #72]
	bl sub_0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	add r1, r1, #65
	ldrh r0, [r1]
	cmp r0, #0
	beq _0801F81C
	mov r0, #150
	lsl r0, r0, #2
	strh r0, [r1]
_0801F81C:
	add r0, r5, #0
	mov r1, #0
	bl sub_08003870
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801F82C:
	.4byte gUnknown_0813B224
	THUMB_FUNC_END sub_0801F7E0

