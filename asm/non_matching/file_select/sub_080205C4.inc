	THUMB_FUNC_START sub_080205C4
sub_080205C4: @ 0x080205C4
	push {lr}
	mov r3, #1
	mov r1, #1
	strb r1, [r0, #20]
	ldrb r2, [r0, #28]
	sub r1, r1, #5
	and r1, r1, r2
	orr r1, r1, r3
	strb r1, [r0, #28]
	add r2, r0, #0
	add r2, r2, #46
	mov r1, #3
	strb r1, [r2]
	ldrb r2, [r0, #28]
	sub r1, r1, #52
	and r1, r1, r2
	mov r2, #16
	orr r1, r1, r2
	strb r1, [r0, #28]
	ldr r1, _08020608  @ =0x0000FFFE
	strh r1, [r0, #58]
	ldr r1, _0802060C  @ =gUnknown_0813B674
	str r1, [r0, #72]
	add r2, r0, #0
	add r2, r2, #126
	mov r1, #150
	lsl r1, r1, #1
	strh r1, [r2]
	mov r1, #1
	bl sub_08003870
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08020608:
	.4byte 0x0000FFFE
_0802060C:
	.4byte gUnknown_0813B674
	THUMB_FUNC_END sub_080205C4

