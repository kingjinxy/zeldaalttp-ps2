	THUMB_FUNC_START sub_0805BA68
sub_0805BA68: @ 0x0805BA68
	push {r4,r5,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805BAF8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #11]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #4]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _0805BAFC  @ =gUnknown_08140F6C
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r1, r1, r3
	ldrb r2, [r1]
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #118
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r0, [r0]
	ldrh r1, [r2]
	cmp r0, r1
	bhi _0805BAAC
	b _0805BC3C
_0805BAAC:
	add r0, r7, #0
	add r0, r0, #10
	ldr r1, [r7, #4]
	ldrh r2, [r1, #50]
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, [r7, #4]
	ldrh r2, [r1, #54]
	strh r2, [r0]
	ldr r0, [r7, #4]
	ldr r2, [r7]
	ldr r1, [r2, #12]
	add r3, r7, #0
	add r3, r3, #8
	ldrb r2, [r3]
	bl 0x08002E70
	add r0, r7, #0
	add r0, r0, #10
	ldr r1, [r7, #4]
	mov r2, #0
	ldrsh r0, [r0, r2]
	mov r3, #50
	ldrsh r1, [r1, r3]
	cmp r0, r1
	bne _0805BB00
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, [r7, #4]
	mov r4, #0
	ldrsh r0, [r0, r4]
	mov r5, #54
	ldrsh r1, [r1, r5]
	cmp r0, r1
	bne _0805BB00
	b _0805BC3C
	.byte 0x00
	.byte 0x00
_0805BAF8:
	.4byte gUnknown_03006A30
_0805BAFC:
	.4byte gUnknown_08140F6C
_0805BB00:
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	cmp r0, #1
	beq _0805BB32
	cmp r0, #1
	bgt _0805BB12
	cmp r0, #0
	beq _0805BB1C
	b _0805BB74
_0805BB12:
	cmp r0, #2
	beq _0805BB48
	cmp r0, #3
	beq _0805BB5E
	b _0805BB74
_0805BB1C:
	add r0, r7, #0
	add r0, r0, #14
	ldr r1, [r7, #4]
	add r2, r7, #0
	add r2, r2, #12
	ldrh r1, [r1, #54]
	ldrh r2, [r2]
	sub r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	b _0805BB74
_0805BB32:
	add r0, r7, #0
	add r0, r0, #14
	add r1, r7, #0
	add r1, r1, #10
	ldr r2, [r7, #4]
	ldrh r1, [r1]
	ldrh r2, [r2, #50]
	sub r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	b _0805BB74
_0805BB48:
	add r0, r7, #0
	add r0, r0, #14
	add r1, r7, #0
	add r1, r1, #12
	ldr r2, [r7, #4]
	ldrh r1, [r1]
	ldrh r2, [r2, #54]
	sub r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	b _0805BB74
_0805BB5E:
	add r0, r7, #0
	add r0, r0, #14
	ldr r1, [r7, #4]
	add r2, r7, #0
	add r2, r2, #10
	ldrh r1, [r1, #50]
	ldrh r2, [r2]
	sub r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	b _0805BB74
_0805BB74:
	add r0, r7, #0
	add r0, r0, #14
	add r1, r7, #0
	add r1, r1, #14
	ldrh r2, [r1]
	lsl r1, r2, #8
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _0805BBFC  @ =gUnknown_0813E4CC
	add r3, r7, #0
	add r3, r3, #8
	ldrb r4, [r3]
	lsl r3, r4, #3
	add r4, r3, #0
	lsl r3, r4, #1
	add r4, r2, r3
	mov r3, #0
	ldrsh r2, [r4, r3]
	add r3, r7, #0
	add r3, r3, #14
	mov r5, #0
	ldrsh r4, [r3, r5]
	mul r2, r4, r2
	ldr r1, [r1, #48]
	add r2, r1, r2
	str r2, [r0, #48]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _0805BBFC  @ =gUnknown_0813E4CC
	add r3, r7, #0
	add r3, r3, #8
	ldrb r4, [r3]
	lsl r3, r4, #3
	add r4, r3, #0
	add r4, r4, #64
	add r3, r4, #0
	lsl r4, r3, #1
	add r3, r2, r4
	mov r4, #0
	ldrsh r2, [r3, r4]
	add r3, r7, #0
	add r3, r3, #14
	mov r5, #0
	ldrsh r4, [r3, r5]
	mul r2, r4, r2
	ldr r1, [r1, #52]
	sub r2, r1, r2
	str r2, [r0, #52]
	ldr r0, [r7]
	bl sub_0805BC44
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #118
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r0, [r0]
	ldrh r1, [r2]
	cmp r0, r1
	bhi _0805BC00
	mov r0, #18
	bl sub_08003DFC
	b _0805BC3C
	.byte 0x00
	.byte 0x00
_0805BBFC:
	.4byte gUnknown_0813E4CC
_0805BC00:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	sub r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	bne _0805BC3C
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	mov r0, #139
	bl sub_08003DFC
_0805BC3C:
	add sp, sp, #16
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805BA68

