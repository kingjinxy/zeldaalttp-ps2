	THUMB_FUNC_START sub_0804E50C
sub_0804E50C: @ 0x0804E50C
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
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r1, _0804E61C  @ =gUnknown_084289A0
	str r1, [r0, #72]
	ldr r0, [r7]
	mov r1, #128
	str r1, [r0, #12]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	sub r1, r2, #1
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldrb r1, [r0, #26]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #26]
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #11
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #192
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #32
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	mov r1, #5
	bl sub_08003870
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #4]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldr r3, [r7]
	mov r4, #50
	ldrsh r2, [r3, r4]
	ldr r3, _0804E620  @ =gUnknown_03000450
	ldrh r4, [r3, #24]
	sub r3, r2, r4
	asr r2, r3, #4
	ldr r4, [r7]
	mov r5, #54
	ldrsh r3, [r4, r5]
	ldr r4, _0804E620  @ =gUnknown_03000450
	ldrh r5, [r4, #26]
	sub r3, r3, r5
	asr r4, r3, #4
	lsl r3, r4, #6
	orr r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #1
	add r3, r1, #4
	add r1, r3, r2
	add r2, r0, #0
	add r0, r0, #104
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #104
	ldrh r0, [r1]
	ldr r1, _0804E624  @ =0x00004002
	cmp r0, r1
	bne _0804E628
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0804E6E8
	.byte 0x00
	.byte 0x00
_0804E61C:
	.4byte gUnknown_084289A0
_0804E620:
	.4byte gUnknown_03000450
_0804E624:
	.4byte 0x00004002
_0804E628:
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldr r3, [r7]
	mov r4, #50
	ldrsh r2, [r3, r4]
	ldr r3, _0804E6F0  @ =gUnknown_03000450
	ldrh r4, [r3, #24]
	sub r3, r2, r4
	asr r2, r3, #4
	ldr r4, [r7]
	mov r5, #54
	ldrsh r3, [r4, r5]
	ldr r4, _0804E6F0  @ =gUnknown_03000450
	ldrh r5, [r4, #26]
	sub r3, r3, r5
	asr r4, r3, #4
	lsl r3, r4, #6
	orr r2, r2, r3
	add r3, r1, #0
	ldr r3, _0804E6F4  @ =0x00002004
	add r4, r1, r3
	add r1, r4, r2
	add r2, r0, #0
	add r0, r0, #106
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r2, [r7]
	mov r4, #50
	ldrsh r1, [r2, r4]
	ldr r2, _0804E6F0  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r5, #54
	ldrsh r2, [r3, r5]
	ldr r3, _0804E6F0  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #4
	add r0, r2, r1
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0804E6F8  @ =0x00004002
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7, #4]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0804E6F0  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0804E6F0  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r0, #0
	ldr r5, _0804E6F4  @ =0x00002004
	add r3, r0, r5
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #29
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	bl 0x08008D90
_0804E6E8:
	add sp, sp, #8
	pop {r4,r5,r7}
	pop {r0}
	bx r0
_0804E6F0:
	.4byte gUnknown_03000450
_0804E6F4:
	.4byte 0x00002004
_0804E6F8:
	.4byte 0x00004002
	THUMB_FUNC_END sub_0804E50C

