	THUMB_FUNC_START sub_08060270
sub_08060270: @ 0x08060270
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #80
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
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
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #31]
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
	bl 0x08009308
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #206
	beq _0806032C
	cmp r0, #206
	bgt _080602EC
	cmp r0, #205
	beq _080602F6
	b _08060366
_080602EC:
	cmp r0, #207
	beq _08060348
	cmp r0, #208
	beq _08060364
	b _08060366
_080602F6:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	add r1, r2, #0
	add r1, r1, #16
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	add r1, r2, #0
	add r1, r1, #16
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _0806036E
_0806032C:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	add r1, r2, #0
	add r1, r1, #16
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _0806036E
_08060348:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	add r1, r2, #0
	add r1, r1, #16
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	b _0806036E
_08060364:
	b _0806036E
_08060366:
	ldr r0, [r7]
	bl DeleteThisEntity
	b _080603BC
_0806036E:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	mov r3, #15
	add r1, r2, #0
	bic r1, r1, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	mov r3, #15
	add r1, r2, #0
	bic r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	mov r1, #0
	bl 0x08003870
	ldr r0, [r7]
	mov r1, #209
	bl sub_0806041C
	ldr r0, [r7]
	bl sub_080603C4
_080603BC:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08060270

