	THUMB_FUNC_START sub_08019690
sub_08019690: @ 0x08019690
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r5, r0, #0
	ldr r0, [r5, #124]
	ldr r1, [r5, #120]
	mov r12, r1
	ldrh r0, [r0, #50]
	ldrh r1, [r1, #50]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r4, r0, #16
	add r0, r5, #0
	add r0, r0, #117
	ldrb r2, [r0]
	mov r3, #3
	mov r8, r3
	mov r0, r8
	and r0, r0, r2
	mov r8, r0
	mov r0, #48
	and r0, r0, r2
	lsr r3, r0, #4
	ldr r1, _080196FC  @ =gUnknown_03006A30
	mov r9, r1
	mov r1, r8
	lsl r0, r1, #3
	add r0, r0, r8
	lsl r0, r0, #4
	mov r1, r9
	add r1, r1, #40
	add r0, r0, r1
	ldr r6, [r0]
	lsl r0, r3, #3
	add r0, r0, r3
	lsl r0, r0, #4
	add r0, r0, r1
	ldr r7, [r0]
	mov r0, #204
	and r0, r0, r2
	mov r1, r9
	cmp r0, #68
	bne _080196EA
	b _080197EC
_080196EA:
	cmp r0, #68
	bgt _08019706
	cmp r0, #12
	beq _08019724
	cmp r0, #12
	bgt _08019700
	cmp r0, #4
	beq _0801974A
	b _08019998
_080196FC:
	.4byte gUnknown_03006A30
_08019700:
	cmp r0, #64
	beq _080197AE
	b _08019998
_08019706:
	cmp r0, #192
	beq _08019788
	cmp r0, #192
	bgt _08019716
	cmp r0, #76
	bne _08019714
	b _08019836
_08019714:
	b _08019998
_08019716:
	cmp r0, #196
	bne _0801971C
	b _0801989C
_0801971C:
	cmp r0, #204
	bne _08019722
	b _08019928
_08019722:
	b _08019998
_08019724:
	lsl r0, r4, #16
	add r2, r0, #0
	cmp r2, #0
	bne _08019754
	ldrh r4, [r6, #50]
	add r0, r6, #0
	mov r1, #64
	mov r2, #24
	bl 0x08002E70
	ldrh r0, [r6, #50]
	lsl r1, r4, #16
	asr r1, r1, #16
	sub r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r2, [r5, #50]
	add r0, r0, r2
	b _08019910
_0801974A:
	lsl r0, r4, #16
	add r2, r0, #0
	cmp r2, #0
	bne _08019754
	b _08019998
_08019754:
	mov r3, r8
	lsl r0, r3, #3
	add r0, r0, r8
	lsl r0, r0, #4
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0, #5]
	add r1, r6, #0
	add r1, r1, #62
	mov r0, #24
	strb r0, [r1]
	ldr r1, _08019784  @ =gUnknown_081399A8
	asr r0, r2, #18
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r6, #0
	add r1, r1, #66
	strb r0, [r1]
	neg r0, r0
	sub r1, r1, #5
	strb r0, [r1]
	ldr r0, [r5, #120]
	ldrh r0, [r0, #50]
	b _08019910
_08019784:
	.4byte gUnknown_081399A8
_08019788:
	lsl r0, r4, #16
	add r2, r0, #0
	cmp r2, #0
	bne _080197B8
	ldrh r4, [r7, #50]
	add r0, r7, #0
	mov r1, #64
	mov r2, #8
	bl 0x08002E70
	ldrh r0, [r7, #50]
	lsl r1, r4, #16
	asr r1, r1, #16
	sub r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r1, [r5, #50]
	add r0, r0, r1
	b _08019910
_080197AE:
	lsl r0, r4, #16
	add r2, r0, #0
	cmp r2, #0
	bne _080197B8
	b _08019998
_080197B8:
	lsl r0, r3, #3
	add r0, r0, r3
	lsl r0, r0, #4
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0, #5]
	add r1, r7, #0
	add r1, r1, #62
	mov r0, #8
	strb r0, [r1]
	ldr r1, _080197E8  @ =gUnknown_081399A8
	asr r0, r2, #18
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r7, #0
	add r1, r1, #66
	strb r0, [r1]
	neg r0, r0
	sub r1, r1, #5
	strb r0, [r1]
	ldr r0, [r5, #124]
	ldrh r0, [r0, #50]
	b _08019910
	.byte 0x00
	.byte 0x00
_080197E8:
	.4byte gUnknown_081399A8
_080197EC:
	cmp r4, #0
	bne _080197F2
	b _08019998
_080197F2:
	mov r2, r12
	ldrh r4, [r2, #50]
	mov r0, r12
	mov r1, #32
	mov r2, #8
	bl 0x08002E70
	ldr r0, [r5, #120]
	ldrh r0, [r0, #50]
	lsl r1, r4, #16
	asr r1, r1, #16
	sub r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r3, [r6, #50]
	add r0, r0, r3
	strh r0, [r6, #50]
	ldr r0, [r5, #124]
	ldrh r4, [r0, #50]
	mov r1, #32
	mov r2, #24
	bl 0x08002E70
	ldr r0, [r5, #124]
	ldrh r0, [r0, #50]
	lsl r1, r4, #16
	asr r1, r1, #16
	sub r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r1, [r7, #50]
	add r0, r0, r1
	strh r0, [r7, #50]
	b _08019912
_08019836:
	ldrh r4, [r6, #50]
	add r0, r6, #0
	mov r1, #64
	mov r2, #24
	bl 0x08002E70
	ldrh r1, [r6, #50]
	lsl r0, r4, #16
	asr r0, r0, #16
	sub r1, r1, r0
	ldrh r0, [r7, #50]
	lsl r1, r1, #16
	asr r1, r1, #16
	add r0, r1, r0
	strh r0, [r7, #50]
	ldrh r0, [r5, #50]
	add r0, r1, r0
	strh r0, [r5, #50]
	ldr r2, [r5, #120]
	ldrh r0, [r2, #50]
	add r0, r1, r0
	strh r0, [r2, #50]
	ldr r2, [r5, #124]
	ldrh r0, [r2, #50]
	add r1, r1, r0
	strh r1, [r2, #50]
	ldr r2, [r5, #124]
	ldr r0, [r5, #120]
	mov r3, #50
	ldrsh r1, [r2, r3]
	mov r3, #50
	ldrsh r0, [r0, r3]
	cmp r1, r0
	beq _08019912
	ldrh r4, [r2, #50]
	add r0, r2, #0
	mov r1, #32
	mov r2, #24
	bl 0x08002E70
	ldr r0, [r5, #124]
	ldrh r0, [r0, #50]
	lsl r1, r4, #16
	asr r1, r1, #16
	sub r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r1, [r7, #50]
	add r0, r0, r1
	strh r0, [r7, #50]
	b _08019900
_0801989C:
	ldrh r4, [r7, #50]
	add r0, r7, #0
	mov r1, #64
	mov r2, #8
	bl 0x08002E70
	ldrh r1, [r7, #50]
	lsl r0, r4, #16
	asr r0, r0, #16
	sub r1, r1, r0
	ldrh r0, [r6, #50]
	lsl r1, r1, #16
	asr r1, r1, #16
	add r0, r1, r0
	strh r0, [r6, #50]
	ldrh r0, [r5, #50]
	add r0, r1, r0
	strh r0, [r5, #50]
	ldr r2, [r5, #120]
	ldrh r0, [r2, #50]
	add r0, r1, r0
	strh r0, [r2, #50]
	ldr r2, [r5, #124]
	ldrh r0, [r2, #50]
	add r1, r1, r0
	strh r1, [r2, #50]
	ldr r0, [r5, #124]
	ldr r2, [r5, #120]
	mov r3, #50
	ldrsh r1, [r0, r3]
	mov r3, #50
	ldrsh r0, [r2, r3]
	cmp r1, r0
	beq _08019912
	ldrh r4, [r2, #50]
	add r0, r2, #0
	mov r1, #32
	mov r2, #8
	bl 0x08002E70
	ldr r0, [r5, #120]
	ldrh r0, [r0, #50]
	lsl r1, r4, #16
	asr r1, r1, #16
	sub r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r1, [r6, #50]
	add r0, r0, r1
	strh r0, [r6, #50]
_08019900:
	ldr r0, [r5, #124]
	mov r2, #50
	ldrsh r0, [r0, r2]
	ldr r1, [r5, #120]
	mov r3, #50
	ldrsh r1, [r1, r3]
	add r0, r0, r1
	asr r0, r0, #1
_08019910:
	strh r0, [r5, #50]
_08019912:
	add r1, r5, #0
	add r1, r1, #112
	ldrb r0, [r1]
	cmp r0, #0
	beq _08019998
	mov r0, #0
	strb r0, [r1]
	mov r0, #150
	bl 0x08003DFC
	b _08019998
_08019928:
	ldrh r4, [r6, #50]
	add r0, r6, #0
	mov r1, #64
	mov r2, #24
	bl 0x08002E70
	ldrh r1, [r6, #50]
	lsl r0, r4, #16
	asr r0, r0, #16
	sub r1, r1, r0
	ldr r0, [r5, #120]
	lsl r1, r1, #16
	asr r1, r1, #16
	ldrh r2, [r0, #50]
	add r1, r1, r2
	strh r1, [r0, #50]
	ldrh r4, [r7, #50]
	add r0, r7, #0
	mov r1, #64
	mov r2, #8
	bl 0x08002E70
	ldrh r1, [r7, #50]
	lsl r0, r4, #16
	asr r0, r0, #16
	sub r1, r1, r0
	ldr r0, [r5, #124]
	lsl r1, r1, #16
	asr r1, r1, #16
	ldrh r3, [r0, #50]
	add r1, r1, r3
	strh r1, [r0, #50]
	ldr r0, [r5, #120]
	mov r1, #50
	ldrsh r0, [r0, r1]
	ldr r1, [r5, #124]
	mov r2, #50
	ldrsh r1, [r1, r2]
	add r0, r0, r1
	lsr r1, r0, #31
	add r0, r0, r1
	asr r0, r0, #1
	strh r0, [r5, #50]
	add r2, r5, #0
	add r2, r2, #112
	ldrb r1, [r2]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _08019998
	mov r0, #4
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #85
	bl 0x08003DFC
_08019998:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019690

