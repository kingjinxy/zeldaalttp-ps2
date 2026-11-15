	THUMB_FUNC_START sub_0804B300
sub_0804B300: @ 0x0804B300
	push {r4,r5,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	bl GetNextFrame
	mov r1, #128
	lsl r1, r1, #6
	ldr r0, [r7]
	bl 0x08003594
	cmp r0, #0
	beq _0804B330
	ldr r0, [r7]
	bl 0x08002E64
	b _0804B5F4
_0804B330:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	bne _0804B33E
	b _0804B5AC
_0804B33E:
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldrb r0, [r1, #20]
	cmp r0, #3
	bhi _0804B372
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #69
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	mov r1, #10
	bl sub_08003870
	b _0804B5F4
_0804B372:
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_0804B378:
	add r0, r7, #4
	ldr r1, _0804B388  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _0804B38C
	b _0804B47C
	.byte 0x00
	.byte 0x00
_0804B388:
	.4byte gUnknown_03006C80
_0804B38C:
	ldr r0, _0804B478  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #3]
	cmp r1, #0
	beq _0804B468
	ldr r0, _0804B478  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	ldr r1, [r7]
	mov r2, #11
	mov r3, #10
	bl 0x08003624
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804B468
	ldr r0, [r7]
	ldr r1, _0804B478  @ =gUnknown_03006A30
	add r3, r7, #4
	ldrb r2, [r3]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r3, [r2]
	add r1, r3, #0
	add r2, r3, #0
	add r2, r2, #42
	ldrb r1, [r2]
	mov r2, #6
	and r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #2
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, _0804B478  @ =gUnknown_03006A30
	add r3, r7, #4
	ldrb r2, [r3]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	ldr r2, [r1, #12]
	str r2, [r0, #12]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _0804B478  @ =gUnknown_03006A30
	add r4, r7, #4
	ldrb r3, [r4]
	add r5, r3, #0
	lsl r4, r5, #3
	add r4, r4, r3
	lsl r3, r4, #4
	add r2, r2, #40
	add r3, r2, r3
	ldr r4, [r3]
	add r2, r4, #0
	add r3, r4, #0
	add r3, r3, #42
	ldrb r2, [r3]
	lsr r3, r2, #1
	add r2, r3, #0
	lsl r3, r2, #24
	lsr r2, r3, #24
	mov r3, #1
	add r4, r3, #0
	lsl r4, r4, r2
	add r2, r4, #0
	ldrb r1, [r1, #24]
	orr r1, r1, r2
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	ldr r0, [r7]
	bl 0x08002E64
_0804B468:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0804B378
_0804B478:
	.4byte gUnknown_03006A30
_0804B47C:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	bne _0804B486
	b _0804B5A6
_0804B486:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #10
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #10
	bne _0804B4BC
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #69
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _0804B4B8  @ =gUnknown_0813F884
	add r0, r1, #0
	bl 0x08003184
	add r1, r7, #5
	strb r0, [r1]
	b _0804B56C
_0804B4B8:
	.4byte gUnknown_0813F884
_0804B4BC:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #5
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #5
	bne _0804B4F4
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #69
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _0804B4F0  @ =gUnknown_0813F884
	add r0, r1, #0
	bl 0x08003184
	add r1, r7, #5
	strb r0, [r1]
	b _0804B56C
	.byte 0x00
	.byte 0x00
_0804B4F0:
	.4byte gUnknown_0813F884
_0804B4F4:
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_0804B4FA:
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #3
	bls _0804B504
	b _0804B56C
_0804B504:
	ldr r1, [r7]
	ldrb r0, [r1, #24]
	add r1, r7, #4
	ldrb r2, [r1]
	asr r0, r0, r2
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0804B552
	ldr r0, [r7]
	ldr r1, _0804B564  @ =gUnknown_0813F878
	add r2, r7, #4
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrh r0, [r0, #44]
	ldrh r1, [r1]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0804B552
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #69
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _0804B568  @ =gUnknown_0813F888
	add r0, r1, #0
	bl 0x08003184
	add r1, r7, #5
	strb r0, [r1]
_0804B552:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0804B4FA
	.byte 0x00
	.byte 0x00
_0804B564:
	.4byte gUnknown_0813F878
_0804B568:
	.4byte gUnknown_0813F888
_0804B56C:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	bne _0804B5A6
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0804B5A8  @ =gUnknown_0813F880
	add r1, r7, #5
	ldrb r2, [r1]
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r0, [r7]
	bl sub_0804B708
	ldr r0, [r7]
	mov r1, #10
	bl sub_08003870
	mov r0, #172
	bl sub_08003DFC
_0804B5A6:
	b _0804B5F4
_0804B5A8:
	.4byte gUnknown_0813F880
_0804B5AC:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #35
	ldrb r0, [r1]
	cmp r0, #10
	bne _0804B5D6
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804B5D4
	ldr r0, [r7]
	bl DeleteThisEntity
_0804B5D4:
	b _0804B5F4
_0804B5D6:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	mov r1, #10
	bl sub_08003870
	mov r0, #172
	bl sub_08003DFC
_0804B5F4:
	add sp, sp, #8
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804B300

