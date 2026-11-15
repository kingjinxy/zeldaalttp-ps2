	THUMB_FUNC_START sub_0803DE94
sub_0803DE94: @ 0x0803DE94
	push {r4-r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strb r0, [r1]
	ldr r0, _0803DF80  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #7]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #7]
	ldr r0, _0803DF80  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _0803DF80  @ =gUnknown_03006A30
	add r3, r7, #0
	ldrb r2, [r3]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldr r2, _0803DF80  @ =gUnknown_03006A30
	add r4, r7, #0
	ldrb r3, [r4]
	add r5, r3, #0
	lsl r4, r5, #3
	add r4, r4, r3
	lsl r3, r4, #4
	add r2, r2, r3
	ldr r3, _0803DF80  @ =gUnknown_03006A30
	add r5, r7, #0
	ldrb r4, [r5]
	add r6, r4, #0
	lsl r5, r6, #3
	add r5, r5, r4
	lsl r4, r5, #4
	add r3, r3, r4
	ldrb r4, [r3, #26]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	mov r6, #1
	add r4, r5, #0
	orr r4, r4, r6
	add r5, r4, #0
	strb r5, [r3, #26]
	ldrb r3, [r2, #11]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	mov r5, #1
	add r3, r4, #0
	orr r3, r3, r5
	add r4, r3, #0
	strb r4, [r2, #11]
	ldrb r2, [r1, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #1
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1, #10]
	add r1, r0, #0
	add r0, r0, #39
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803DF80  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
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
	mov r3, #254
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803DF80:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_0803DE94

