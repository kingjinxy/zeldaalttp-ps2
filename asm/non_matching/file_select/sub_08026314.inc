	THUMB_FUNC_START sub_08026314
sub_08026314: @ 0x08026314
	push {r4,lr}
	add r3, r0, #0
	mov r2, #1
	mov r0, #1
	strb r0, [r3, #20]
	mov r0, #120
	strb r0, [r3, #23]
	ldrb r1, [r3, #28]
	sub r0, r0, #124
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r3, #28]
	add r1, r3, #0
	add r1, r1, #46
	mov r0, #4
	strb r0, [r1]
	ldrb r1, [r3, #28]
	sub r0, r0, #53
	and r0, r0, r1
	mov r1, #16
	orr r0, r0, r1
	strb r0, [r3, #28]
	add r0, r3, #0
	add r0, r0, #43
	ldrb r0, [r0]
	lsr r0, r0, #3
	add r2, r3, #0
	add r2, r2, #42
	strb r0, [r2]
	ldr r1, _08026388  @ =gUnknown_0813C684
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r4, [r3, #50]
	add r0, r0, r4
	strh r0, [r3, #50]
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r1, [r3, #54]
	add r0, r0, r1
	strh r0, [r3, #54]
	ldrh r0, [r3, #58]
	sub r0, r0, #4
	strh r0, [r3, #58]
	ldr r0, _0802638C  @ =gUnknown_0813C6EC
	str r0, [r3, #72]
	ldrb r1, [r2]
	add r0, r3, #0
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
_08026388:
	.4byte gUnknown_0813C684
_0802638C:
	.4byte gUnknown_0813C6EC
	THUMB_FUNC_END sub_08026314

