	THUMB_FUNC_START sub_080458FC
sub_080458FC: @ 0x080458FC
	push {r4-r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	bl sub_0803DF84
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_080660BC
	ldr r0, [r7]
	ldr r1, [r0, #88]
	mov r2, #58
	ldrsh r0, [r1, r2]
	mov r1, #2
	cmn r0, r1
	bge _08045924
	b _08045AB4
_08045924:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #10
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #36
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_08045952:
	add r0, r7, #4
	ldr r1, _08045960  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08045964
	b _08045AB4
_08045960:
	.4byte gUnknown_03006C80
_08045964:
	ldr r0, _08045A88  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	ldr r0, _08045A88  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _08045A8C  @ =0x000001AB
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #8]
	ldr r0, _08045A88  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	add r1, r0, #0
	add r0, r0, #56
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #180
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08045A88  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	add r1, r0, #0
	add r0, r0, #57
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #252
	lsl r0, r0, #1
	mov r1, #224
	lsl r1, r1, #1
	ldr r2, _08045A88  @ =gUnknown_03006A30
	add r4, r7, #4
	ldrb r3, [r4]
	add r5, r3, #0
	lsl r4, r5, #3
	add r4, r4, r3
	lsl r3, r4, #4
	add r2, r2, #40
	add r3, r2, r3
	ldr r4, [r3]
	mov r3, #50
	ldrsh r2, [r4, r3]
	ldr r3, _08045A88  @ =gUnknown_03006A30
	add r5, r7, #4
	ldrb r4, [r5]
	add r6, r4, #0
	lsl r5, r6, #3
	add r5, r5, r4
	lsl r4, r5, #4
	add r3, r3, #40
	add r4, r3, r4
	ldr r5, [r4]
	mov r4, #54
	ldrsh r3, [r5, r4]
	bl 0x08003F54
	ldr r1, _08045A88  @ =gUnknown_03006A30
	add r3, r7, #4
	ldrb r2, [r3]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r0, _08045A88  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	ldr r1, _08045A88  @ =gUnknown_03006A30
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
	add r2, r2, #43
	ldrb r1, [r2]
	cmp r1, #15
	bhi _08045A90
	mov r1, #2
	b _08045A92
	.byte 0x00
	.byte 0x00
_08045A88:
	.4byte gUnknown_03006A30
_08045A8C:
	.4byte 0x000001AB
_08045A90:
	mov r1, #6
_08045A92:
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08045952
_08045AB4:
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080458FC

