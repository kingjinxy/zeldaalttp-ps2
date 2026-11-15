	THUMB_FUNC_START sub_08064CB8
sub_08064CB8: @ 0x08064CB8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08064CDC  @ =gUnknown_0202A4F8
	ldr r1, [r0]
	mov r2, #32
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08064D6C
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	cmp r2, #1
	bhi _08064CE0
	mov r1, #6
	b _08064CE2
_08064CDC:
	.4byte gUnknown_0202A4F8
_08064CE0:
	mov r1, #2
_08064CE2:
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r3, [r2]
	lsl r1, r3, #2
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	mov r1, #128
	lsl r1, r1, #1
	str r1, [r0, #12]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #12
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
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
	ldr r0, _08064D74  @ =gUnknown_03006A30
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
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #8]
_08064D6C:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08064D74:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08064CB8

