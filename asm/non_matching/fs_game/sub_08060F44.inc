	THUMB_FUNC_START sub_08060F44
sub_08060F44: @ 0x08060F44
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl 0x08008DD8
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
	mov r1, #0
	str r1, [r0, #124]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	beq _08060FB0
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
	bl sub_08061364
	b _080610E6
_08060FB0:
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #10]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	mov r3, #255
	orr r2, r2, r3
	add r3, r2, #0
	strb r3, [r1, #24]
	ldrb r1, [r0, #23]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	mov r2, #251
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0806101C
	ldr r0, [r7]
	ldr r1, _08061018  @ =gUnknown_08141DFC
	str r1, [r0, #72]
	b _08061022
	.byte 0x00
	.byte 0x00
_08061018:
	.4byte gUnknown_08141DFC
_0806101C:
	ldr r0, [r7]
	ldr r1, _080610DC  @ =gUnknown_08141E04
	str r1, [r0, #72]
_08061022:
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r0, #0
	add r0, r0, #112
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r0, #0
	add r0, r0, #114
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #54]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #42
	add r2, r0, #0
	add r0, r0, #120
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	bl 0x08009308
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #116
	ldrh r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strh r2, [r1]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl 0x08003870
	mov r0, #83
	mov r1, #0
	mov r2, #1
	bl sub_0804C8A8
	ldr r1, [r7]
	str r0, [r1, #88]
	cmp r0, #0
	beq _080610E0
	ldr r1, [r7]
	ldr r0, [r1, #88]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #42
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	ldr r0, [r7]
	str r0, [r1, #84]
	b _080610E6
	.byte 0x00
	.byte 0x00
_080610DC:
	.4byte gUnknown_08141E04
_080610E0:
	ldr r0, [r7]
	bl DeleteThisEntity
_080610E6:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08060F44

	.byte 0x00
	.byte 0x00
