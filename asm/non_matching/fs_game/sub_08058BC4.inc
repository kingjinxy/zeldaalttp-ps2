	THUMB_FUNC_START sub_08058BC4
sub_08058BC4: @ 0x08058BC4
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _08058CB0
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
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #3
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #78
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #32
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #96
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	add r2, r0, #0
	lsl r1, r2, #1
	add r1, r1, r0
	lsl r0, r1, #1
	ldr r1, _08058CCC  @ =gUnknown_08428F04
	add r0, r1, r0
	str r0, [r7, #4]
	ldr r2, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r3, [r2, #50]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	ldrh r3, [r1]
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r2, #50]
	add r1, r1, #2
	str r1, [r0]
	ldr r2, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r3, [r2, #54]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	ldrh r3, [r1]
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r2, #54]
	add r1, r1, #2
	str r1, [r0]
_08058CB0:
	ldr r0, [r7]
	ldr r1, _08058CD0  @ =gUnknown_03000948
	ldrh r2, [r1]
	mov r3, #16
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	cmp r1, #0
	beq _08058CD4
	mov r1, #2
	b _08058CD6
	.byte 0x00
	.byte 0x00
_08058CCC:
	.4byte gUnknown_08428F04
_08058CD0:
	.4byte gUnknown_03000948
_08058CD4:
	mov r1, #0
_08058CD6:
	mov r2, #3
	and r1, r1, r2
	ldrb r2, [r0, #28]
	mov r3, #252
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, _08058D00  @ =gUnknown_02016D60
	ldrb r1, [r0, #8]
	cmp r1, #0
	beq _08058CF8
	ldr r0, [r7]
	bl DeleteThisEntity
_08058CF8:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
_08058D00:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08058BC4

