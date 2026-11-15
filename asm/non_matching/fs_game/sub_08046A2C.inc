	THUMB_FUNC_START sub_08046A2C
sub_08046A2C: @ 0x08046A2C
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #60
	ldrb r0, [r1]
	cmp r0, #0
	beq _08046A7A
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #180
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	bl sub_0802D970
	bl sub_0802C8E4
	ldr r1, _08046AC4  @ =0x80010000
	add r0, r1, #0
	bl play_sound
	mov r0, #46
	bl play_sound
_08046A7A:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #28]
	lsl r3, r2, #30
	lsr r1, r3, #30
	mov r2, #1
	eor r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #28]
	mov r3, #252
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08046AC8
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
	b _08046C74
_08046AC4:
	.4byte 0x80010000
_08046AC8:
	mov r0, #0
	str r0, [r7, #4]
_08046ACC:
	ldr r0, _08046AD8  @ =gUnknown_03006C80
	ldrb r1, [r0]
	ldr r0, [r7, #4]
	cmp r0, r1
	bcc _08046ADC
	b _08046B46
_08046AD8:
	.4byte gUnknown_03006C80
_08046ADC:
	ldr r0, _08046B38  @ =gUnknown_03006A30
	ldr r1, [r7, #4]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08046B3C
	ldr r0, _08046B38  @ =gUnknown_03006A30
	ldr r1, [r7, #4]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #60
	ldrb r0, [r1]
	cmp r0, #0
	bne _08046B3C
	ldr r0, _08046B38  @ =gUnknown_03006A30
	ldr r1, [r7, #4]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	bne _08046B3E
	b _08046B3C
	.byte 0x00
	.byte 0x00
_08046B38:
	.4byte gUnknown_03006A30
_08046B3C:
	b _08046C74
_08046B3E:
	ldr r0, [r7, #4]
	add r1, r0, #1
	str r1, [r7, #4]
	b _08046ACC
_08046B46:
	mov r0, #0
	str r0, [r7, #4]
_08046B4A:
	ldr r0, _08046B58  @ =gUnknown_03006C80
	ldrb r1, [r0]
	ldr r0, [r7, #4]
	cmp r0, r1
	bcc _08046B5C
	b _08046C34
	.byte 0x00
	.byte 0x00
_08046B58:
	.4byte gUnknown_03006C80
_08046B5C:
	ldr r0, _08046C2C  @ =gUnknown_03006A30
	ldr r1, [r7, #4]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	ldrh r1, [r0, #58]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #58]
	ldr r0, _08046C2C  @ =gUnknown_03006A30
	ldr r1, [r7, #4]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	mov r1, #0
	str r1, [r0, #16]
	ldr r0, _08046C2C  @ =gUnknown_03006A30
	ldr r1, [r7, #4]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08046C2C  @ =gUnknown_03006A30
	ldr r1, [r7, #4]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #136
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08046C2C  @ =gUnknown_03006A30
	ldr r1, [r7, #4]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _08046C2C  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _08046C30  @ =0x0000F3FF
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, _08046C2C  @ =gUnknown_03006A30
	ldr r1, [r7, #4]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	bl 0x080012F4
	ldr r0, [r7, #4]
	add r1, r0, #1
	str r1, [r7, #4]
	b _08046B4A
	.byte 0x00
	.byte 0x00
_08046C2C:
	.4byte gUnknown_03006A30
_08046C30:
	.4byte 0x0000F3FF
_08046C34:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #36
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #32
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	mov r0, #3
	mov r1, #16
	bl sub_0800C0B0
	bl sub_0800D644
	bl sub_080476DC
_08046C74:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08046A2C

