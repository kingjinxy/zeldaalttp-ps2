	THUMB_FUNC_START sub_08034690
sub_08034690: @ 0x08034690
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	add r0, r0, #1
	mov r5, #0
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r2, [r4, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r4, #31]
	ldrb r0, [r4, #29]
	and r1, r1, r0
	strb r1, [r4, #29]
	mov r0, #120
	strh r0, [r4, #50]
	mov r0, #192
	strh r0, [r4, #54]
	add r0, r4, #0
	bl 0x08003B94
	add r1, r4, #0
	add r1, r1, #112
	mov r0, #128
	lsl r0, r0, #1
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #114
	mov r2, #128
	lsl r2, r2, #4
	strh r2, [r0]
	ldr r0, _080346F4  @ =gUnknown_03000488
	ldrh r1, [r1]
	strh r1, [r0]
	strh r2, [r0, #2]
	strh r5, [r0, #4]
	add r1, r4, #0
	bl sub_0803D770
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080346F4:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_08034690

