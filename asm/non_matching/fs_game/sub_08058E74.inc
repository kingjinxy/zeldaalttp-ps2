	THUMB_FUNC_START sub_08058E74
sub_08058E74: @ 0x08058E74
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _08058ECC
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
	ldr r1, [r7]
	ldr r2, [r7]
	ldrb r3, [r2, #31]
	mov r4, #63
	and r3, r3, r4
	add r4, r3, #0
	strb r4, [r2, #31]
	ldrb r2, [r1, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	strb r3, [r1, #29]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #30]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	ldr r0, [r7]
	bl sub_08003870
_08058ECC:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, _08058F5C  @ =gUnknown_03000200
	ldr r1, [r0]
	cmp r1, #0
	beq _08058F52
	ldr r1, _08058F5C  @ =gUnknown_03000200
	ldr r0, [r1]
	ldrb r1, [r0, #20]
	cmp r1, #3
	beq _08058F52
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r2, _08058F5C  @ =gUnknown_03000200
	ldr r1, [r2]
	mov r3, #50
	ldrsh r2, [r1, r3]
	asr r1, r2, #4
	add r2, r1, #0
	mov r3, #63
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #88
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r2, _08058F5C  @ =gUnknown_03000200
	ldr r1, [r2]
	mov r3, #54
	ldrsh r2, [r1, r3]
	asr r1, r2, #4
	add r2, r1, #0
	mov r3, #63
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #48
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_08058F52:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08058F5C:
	.4byte gUnknown_03000200
	THUMB_FUNC_END sub_08058E74

