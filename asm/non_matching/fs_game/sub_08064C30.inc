	THUMB_FUNC_START sub_08064C30
sub_08064C30: @ 0x08064C30
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	bl sub_0803D8AC
	ldr r0, _08064CB0  @ =gUnknown_0202A4F8
	ldr r1, [r0]
	mov r2, #16
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08064CA8
	ldr r0, _08064CB4  @ =gUnknown_03006A30
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
	strh r2, [r0, #8]
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
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
_08064CA8:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08064CB0:
	.4byte gUnknown_0202A4F8
_08064CB4:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08064C30

