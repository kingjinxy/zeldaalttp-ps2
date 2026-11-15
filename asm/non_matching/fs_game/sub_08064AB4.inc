	THUMB_FUNC_START sub_08064AB4
sub_08064AB4: @ 0x08064AB4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08064B30
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08064B22
	ldr r0, _08064B24  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _08064B28  @ =0x000001AD
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #8]
	mov r0, #28
	bl play_sound
	ldr r0, _08064B2C  @ =gUnknown_0202A4F8
	ldr r1, _08064B2C  @ =gUnknown_0202A4F8
	ldr r2, [r1]
	mov r1, #2
	orr r2, r2, r1
	str r2, [r0]
_08064B22:
	b _08064B86
_08064B24:
	.4byte gUnknown_03006A30
_08064B28:
	.4byte 0x000001AD
_08064B2C:
	.4byte gUnknown_0202A4F8
_08064B30:
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
	bne _08064B52
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	ldr r0, [r7]
	bl 0x080037EC
	b _08064B86
_08064B52:
	ldr r1, _08064B90  @ =0x80040008
	add r0, r1, #0
	bl play_sound
	mov r0, #32
	bl play_sound
	ldr r0, _08064B94  @ =gUnknown_0202A4F8
	ldr r1, _08064B94  @ =gUnknown_0202A4F8
	ldr r2, [r1]
	mov r1, #4
	orr r2, r2, r1
	str r2, [r0]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #21]
	add r1, r2, #1
	ldrb r2, [r0, #21]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #21]
_08064B86:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08064B90:
	.4byte 0x80040008
_08064B94:
	.4byte gUnknown_0202A4F8
	THUMB_FUNC_END sub_08064AB4

