	THUMB_FUNC_START sub_080E4354
sub_080E4354: @ 0x080E4354
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r7, r0, #24
	str r7, [sp, #4]
	ldr r5, _080E4414  @ =gRam
	ldr r1, _080E4418  @ =0x00000F92
	add r0, r5, r1
	add r0, r0, r7
	mov r10, r0
	ldrb r0, [r0]
	str r0, [sp, #8]
	mov r0, #0
	mov r1, r10
	strb r0, [r1]
	ldr r0, _080E441C  @ =0x00001122
	add r2, r5, r0
	add r2, r7, r2
	ldrb r1, [r2]
	mov r9, r1
	mov r0, #241
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _080E4420  @ =0x00001624
	add r6, r5, r0
	ldrb r4, [r6]
	ldr r1, _080E4424  @ =0x00001625
	add r5, r5, r1
	ldrb r0, [r5]
	lsl r0, r0, #8
	add r4, r4, r0
	lsl r4, r4, #16
	lsr r0, r4, #16
	mov r8, r0
	add r0, r0, #8
	strb r0, [r6]
	asr r0, r0, #8
	strb r0, [r5]
	add r0, r7, #0
	str r2, [sp, #12]
	bl sub_080C6240
	mov r1, r8
	strb r1, [r6]
	lsr r4, r4, #24
	strb r4, [r5]
	ldr r2, [sp, #12]
	mov r0, r9
	strb r0, [r2]
	mov r1, sp
	ldrb r0, [r1, #8]
	mov r1, r10
	strb r0, [r1]
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r7, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E4402
	add r0, r7, #0
	mov r1, #16
	bl sub_080E2720
	add r0, r7, #0
	mov r1, #12
	bl sub_080E3024
	mov r1, r10
	ldrb r0, [r1]
	cmp r0, #19
	bhi _080E43FC
	add r0, r7, #0
	mov r1, #4
	bl sub_080E42C4
_080E43FC:
	ldr r0, [sp, #4]
	bl sub_080E2684
_080E4402:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E4414:
	.4byte gRam
_080E4418:
	.4byte 0x00000F92
_080E441C:
	.4byte 0x00001122
_080E4420:
	.4byte 0x00001624
_080E4424:
	.4byte 0x00001625
	THUMB_FUNC_END sub_080E4354

