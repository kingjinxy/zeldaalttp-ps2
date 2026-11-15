	THUMB_FUNC_START sub_08043B94
sub_08043B94: @ 0x08043B94
	push {r4,r5,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #25]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08043BB4
	mov r0, #0
	b _08043E9A
_08043BB4:
	ldr r0, [r7]
	ldrb r1, [r0, #9]
	lsl r0, r1, #3
	add r1, r0, #0
	lsl r0, r1, #1
	ldr r1, _08043C58  @ =gUnknown_08138C20
	add r0, r1, r0
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _08043C5C  @ =0x0000FFFF
	cmp r1, r0
	bne _08043BEC
	ldr r0, _08043C60  @ =gUnknown_081390E0
	ldr r2, [r7, #4]
	add r1, r2, #2
	ldrh r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	lsl r1, r2, #3
	add r2, r1, #0
	lsl r1, r2, #1
	ldr r0, [r0]
	add r1, r0, r1
	str r1, [r7, #4]
_08043BEC:
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	cmp r1, #0
	beq _08043C7A
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	mov r2, #128
	lsl r2, r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08043C64
	ldr r1, [r7]
	ldr r0, [r7, #4]
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #32
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrh r2, [r1]
	mov r3, #192
	lsl r3, r3, #2
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	lsr r2, r1, #8
	add r1, r2, #0
	lsl r2, r1, #24
	lsr r1, r2, #24
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #28]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	b _08043C7A
	.byte 0x00
	.byte 0x00
_08043C58:
	.4byte gUnknown_08138C20
_08043C5C:
	.4byte 0x0000FFFF
_08043C60:
	.4byte gUnknown_081390E0
_08043C64:
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, [r7]
	bl sub_0802C070
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08043C7A
	mov r0, #1
	b _08043E9A
_08043C7A:
	ldr r0, [r7, #4]
	add r1, r0, #2
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	mov r2, #128
	lsl r2, r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08043CEC
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _08043CE8  @ =0x000080FF
	cmp r1, r0
	beq _08043CE6
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7, #4]
	ldrh r3, [r2]
	mov r4, #15
	add r2, r3, #0
	and r2, r2, r4
	add r4, r2, #0
	lsl r3, r4, #16
	lsr r2, r3, #16
	add r4, r2, #0
	lsl r3, r4, #4
	ldrb r4, [r1, #30]
	mov r5, #15
	and r4, r4, r5
	add r5, r4, #0
	add r4, r5, #0
	orr r4, r4, r3
	add r3, r4, #0
	strb r3, [r1, #30]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
_08043CE6:
	b _08043D38
_08043CE8:
	.4byte 0x000080FF
_08043CEC:
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	add r0, r1, #0
	lsl r2, r0, #24
	lsr r1, r2, #24
	add r0, r1, #0
	bl sub_0802C2DC
	add r2, r0, #0
	ldr r0, [r7]
	ldr r1, [r7]
	lsl r3, r2, #24
	lsr r2, r3, #24
	add r4, r2, #0
	lsl r3, r4, #4
	ldrb r4, [r1, #30]
	mov r5, #15
	and r4, r4, r5
	add r5, r4, #0
	add r4, r5, #0
	orr r4, r4, r3
	add r3, r4, #0
	strb r3, [r1, #30]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
_08043D38:
	ldr r0, [r7, #4]
	add r1, r0, #2
	str r1, [r7, #4]
	ldr r0, [r7]
	ldrb r1, [r0, #25]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #25]
	ldr r2, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r4, [r1]
	add r3, r4, #0
	ldrb r4, [r2, #27]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	orr r3, r3, r5
	add r4, r3, #0
	strb r4, [r2, #27]
	add r1, r1, #2
	str r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrh r2, [r1]
	mov r3, #128
	lsl r3, r3, #8
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	lsr r2, r1, #8
	add r1, r2, #0
	mov r2, #9
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	ldr r0, [r7, #4]
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #64
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r2, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r3, [r1]
	mov r4, #254
	lsl r4, r4, #7
	and r3, r3, r4
	add r5, r3, #0
	lsl r4, r5, #16
	lsr r3, r4, #16
	lsr r4, r3, #8
	add r3, r4, #0
	add r4, r2, #0
	add r2, r2, #70
	ldrb r4, [r2]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	orr r3, r3, r5
	add r4, r3, #0
	strb r4, [r2]
	add r1, r1, #2
	str r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrh r2, [r1]
	mov r3, #255
	lsl r3, r3, #8
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	lsr r2, r1, #8
	add r1, r2, #0
	add r2, r0, #0
	add r0, r0, #68
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r3, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r4, [r1]
	add r2, r4, #0
	add r4, r3, #0
	add r3, r3, #69
	ldrb r4, [r3]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	orr r2, r2, r5
	add r4, r2, #0
	strb r4, [r3]
	add r1, r1, #2
	str r1, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #12]
	cmp r1, #0
	bne _08043E40
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrh r2, [r1]
	str r2, [r0, #12]
_08043E40:
	ldr r0, [r7, #4]
	add r1, r0, #2
	str r1, [r7, #4]
	ldr r3, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r4, [r1]
	add r2, r4, #0
	add r4, r3, #0
	add r3, r3, #63
	ldrb r4, [r3]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	orr r2, r2, r5
	add r4, r2, #0
	strb r4, [r3]
	add r1, r1, #2
	str r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	add r2, r0, #0
	add r0, r0, #92
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #35
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	bl 0x08008DD8
	mov r0, #0
	b _08043E9A
_08043E9A:
	add sp, sp, #8
	pop {r4,r5,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08043B94

	.byte 0x00
	.byte 0x00
