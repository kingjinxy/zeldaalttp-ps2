	THUMB_FUNC_START sub_0805B678
sub_0805B678: @ 0x0805B678
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805B73C  @ =gUnknown_03006A30
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
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #117
	ldrb r0, [r1]
	cmp r0, #0
	beq _0805B6A4
	b _0805B7A0
_0805B6A4:
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	lsl r0, r1, #1
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	cmp r0, r1
	bne _0805B774
	add r0, r7, #0
	add r0, r0, #10
	ldr r1, [r7]
	ldr r2, _0805B740  @ =gUnknown_08140F5C
	ldr r4, [r7, #4]
	add r3, r4, #0
	add r4, r4, #42
	ldrb r3, [r4]
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r1, [r1, #50]
	add r2, r1, r2
	add r1, r2, #0
	strh r1, [r0]
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, [r7]
	ldr r2, _0805B740  @ =gUnknown_08140F5C
	ldr r4, [r7, #4]
	add r3, r4, #0
	add r4, r4, #42
	ldrb r3, [r4]
	add r4, r3, #1
	add r2, r2, r4
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r1, [r1, #54]
	add r2, r1, r2
	add r1, r2, #0
	strh r1, [r0]
	add r1, r7, #0
	add r1, r1, #10
	mov r2, #0
	ldrsh r0, [r1, r2]
	add r2, r7, #0
	add r2, r2, #12
	mov r3, #0
	ldrsh r1, [r2, r3]
	ldr r3, [r7, #4]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl 0x080093AC
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	cmp r1, #0
	beq _0805B744
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	add r0, r1, #0
	sub r0, r0, #15
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #16
	bhi _0805B744
	b _0805B774
	.byte 0x00
	.byte 0x00
_0805B73C:
	.4byte gUnknown_03006A30
_0805B740:
	.4byte gUnknown_08140F5C
_0805B744:
	ldr r0, [r7, #4]
	add r1, r7, #0
	add r1, r1, #10
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	add r1, r7, #0
	add r1, r1, #12
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_0805B774:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #117
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
_0805B7A0:
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	lsr r1, r0, #1
	ldr r0, [r7]
	lsl r2, r1, #24
	lsr r1, r2, #24
	ldrb r0, [r0, #10]
	cmp r1, r0
	bne _0805B7F2
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	cmp r0, #0
	beq _0805B7F2
	ldr r0, [r7]
	bl sub_0805BA68
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #117
	ldrb r0, [r1]
	cmp r0, #1
	bne _0805B7F2
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #117
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #164
	bl sub_08003DFC
_0805B7F2:
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805B678

	.byte 0x00
	.byte 0x00
