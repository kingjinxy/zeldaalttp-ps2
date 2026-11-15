	THUMB_FUNC_START sub_0801AB54
sub_0801AB54: @ 0x0801AB54
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r7, r0, #0
	mov r0, #1
	strb r0, [r7, #20]
	add r1, r7, #0
	add r1, r1, #46
	mov r0, #14
	strb r0, [r1]
	ldr r0, _0801AC3C  @ =gUnknown_0813A09C
	str r0, [r7, #72]
	ldrb r0, [r7, #10]
	bl sub_08013D20
	str r0, [r7, #112]
	ldrh r0, [r7, #50]
	mov r3, #252
	lsl r3, r3, #4
	add r1, r3, #0
	and r1, r1, r0
	lsr r1, r1, #2
	ldr r4, _0801AC40  @ =gUnknown_03000450
	ldrh r5, [r4, #24]
	ldr r6, _0801AC44  @ =gUnknown_0201EFF8
	mov r0, #82
	add r0, r0, r7
	mov r12, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r6
	add r1, r5, r1
	ldrh r0, [r0]
	add r1, r1, r0
	add r0, r7, #0
	add r0, r0, #120
	strh r1, [r0]
	ldrh r1, [r7, #50]
	mov r2, #63
	add r0, r2, #0
	and r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, #32
	add r1, r7, #0
	add r1, r1, #124
	strh r0, [r1]
	ldrh r0, [r7, #54]
	and r3, r3, r0
	lsr r3, r3, #2
	ldrh r4, [r4, #26]
	mov r1, r12
	ldrb r0, [r1]
	lsl r0, r0, #2
	add r1, r6, #2
	mov r8, r1
	add r0, r0, r8
	add r3, r4, r3
	ldrh r0, [r0]
	add r3, r3, r0
	add r0, r7, #0
	add r0, r0, #122
	strh r3, [r0]
	ldrh r0, [r7, #54]
	and r2, r2, r0
	lsl r2, r2, #4
	add r2, r2, #32
	add r0, r7, #0
	add r0, r0, #126
	strh r2, [r0]
	ldrb r1, [r7, #11]
	lsl r1, r1, #4
	mov r2, r12
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r6
	add r5, r5, r1
	ldrh r0, [r0]
	add r5, r5, r0
	strh r5, [r7, #50]
	add r0, r7, #0
	add r0, r0, #116
	strh r5, [r0]
	ldrb r1, [r7, #23]
	lsl r1, r1, #4
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r8
	add r4, r4, r1
	ldrh r0, [r0]
	add r4, r4, r0
	strh r4, [r7, #54]
	add r0, r7, #0
	add r0, r0, #118
	strh r4, [r0]
	add r0, r7, #0
	bl 0x08008D90
	ldr r1, _0801AC48  @ =gUnknown_08427658
	ldr r0, _0801AC4C  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	add r0, r0, r1
	ldrb r0, [r0]
	bl sub_0802C2DC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #15
	and r1, r1, r0
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r7, #30]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0801AC3C:
	.4byte gUnknown_0813A09C
_0801AC40:
	.4byte gUnknown_03000450
_0801AC44:
	.4byte gUnknown_0201EFF8
_0801AC48:
	.4byte gUnknown_08427658
_0801AC4C:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0801AB54

