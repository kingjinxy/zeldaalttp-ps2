	THUMB_FUNC_START sub_080580E0
sub_080580E0: @ 0x080580E0
	push {r4,r5,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
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
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r1, [r7]
	ldrb r0, [r1, #11]
	add r2, r0, #0
	lsl r1, r2, #1
	add r1, r1, r0
	ldr r0, _08058174  @ =gUnknown_08428F88
	add r1, r0, r1
	str r1, [r7, #4]
	ldr r2, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	ldrb r4, [r1]
	add r3, r4, #0
	ldrh r4, [r2, #50]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	orr r3, r3, r5
	add r4, r3, #0
	strh r4, [r2, #50]
	add r1, r1, #1
	str r1, [r0]
	ldr r2, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	ldrb r4, [r1]
	add r3, r4, #0
	ldrh r4, [r2, #54]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	orr r3, r3, r5
	add r4, r3, #0
	strh r4, [r2, #54]
	add r1, r1, #1
	str r1, [r0]
	ldr r0, [r7, #4]
	ldrb r1, [r0]
	ldr r0, [r7]
	bl sub_08003870
	add sp, sp, #8
	pop {r4,r5,r7}
	pop {r0}
	bx r0
_08058174:
	.4byte gUnknown_08428F88
	THUMB_FUNC_END sub_080580E0

