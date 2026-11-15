	THUMB_FUNC_START sub_08045C18
sub_08045C18: @ 0x08045C18
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_080660BC
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08045C50
	b _08045DB8
_08045C50:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #13
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	mov r1, #128
	lsl r1, r1, #1
	str r1, [r0, #12]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08045CEC  @ =gUnknown_03000450
	ldr r1, _08045CF0  @ =gUnknown_03006A30
	ldr r3, _08045CF4  @ =gLCDRegisterBuffer
	ldrb r2, [r3]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	str r1, [r0]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_08045CDE:
	add r0, r7, #4
	ldr r1, _08045CF8  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08045CFC
	b _08045D94
_08045CEC:
	.4byte gUnknown_03000450
_08045CF0:
	.4byte gUnknown_03006A30
_08045CF4:
	.4byte gLCDRegisterBuffer
_08045CF8:
	.4byte gUnknown_03006C80
_08045CFC:
	ldr r0, _08045D90  @ =gUnknown_03006A30
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
	mov r3, #12
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #8]
	ldr r0, _08045D90  @ =gUnknown_03006A30
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
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08045D90  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #65
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #2]
	ldr r0, _08045D90  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	mov r1, #128
	lsl r1, r1, #10
	str r1, [r0, #16]
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08045CDE
_08045D90:
	.4byte gUnknown_03006A30
_08045D94:
	ldr r1, _08045DC0  @ =0x000001AF
	add r0, r1, #0
	bl play_sound
	ldr r0, _08045DC4  @ =gUnknown_03000420
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	bl sub_0802D97C
	bl sub_0802C8F8
_08045DB8:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
_08045DC0:
	.4byte 0x000001AF
_08045DC4:
	.4byte gUnknown_03000420
	THUMB_FUNC_END sub_08045C18

