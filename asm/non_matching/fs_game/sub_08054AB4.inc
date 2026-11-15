	THUMB_FUNC_START sub_08054AB4
sub_08054AB4: @ 0x08054AB4
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	add r0, r1, #0
	bl sub_08013D20
	ldr r1, [r7]
	str r0, [r1, #96]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #82
	ldrb r0, [r1]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #0
	bl sub_08012F84
	str r0, [r7, #8]
	ldr r0, [r7]
	ldr r2, [r7, #8]
	add r1, r2, #0
	mov r2, #255
	and r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #4
	ldr r2, _08054C00  @ =gUnknown_0201EFF8
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #82
	ldrb r3, [r4]
	add r4, r3, #0
	lsl r3, r4, #2
	add r2, r2, r3
	ldrh r2, [r2]
	add r1, r1, r2
	add r2, r0, #0
	add r0, r0, #104
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7, #8]
	lsr r1, r0, #8
	str r1, [r7, #8]
	ldr r0, [r7]
	ldr r2, [r7, #8]
	add r1, r2, #0
	mov r2, #255
	and r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #4
	ldr r2, _08054C00  @ =gUnknown_0201EFF8
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #82
	ldrb r3, [r4]
	add r4, r3, #0
	lsl r3, r4, #2
	add r2, r2, #2
	add r3, r2, r3
	ldrh r2, [r3]
	add r1, r1, r2
	add r2, r0, #0
	add r0, r0, #106
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7, #8]
	lsr r1, r0, #8
	str r1, [r7, #8]
	ldr r0, [r7]
	ldr r2, [r7, #8]
	add r1, r2, #0
	mov r2, #255
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #108
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7, #8]
	lsr r1, r0, #8
	str r1, [r7, #8]
	ldr r0, [r7]
	ldr r2, [r7, #8]
	add r1, r2, #0
	mov r2, #255
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #110
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	mov r2, #54
	ldrsh r1, [r0, r2]
	cmp r1, #0
	bne _08054BD2
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
_08054BD2:
	ldr r0, [r7]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	add r3, r1, #0
	lsl r2, r3, #4
	sub r2, r2, r1
	lsl r1, r2, #2
	add r2, r0, #0
	add r0, r0, #112
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08054C00:
	.4byte gUnknown_0201EFF8
	THUMB_FUNC_END sub_08054AB4

