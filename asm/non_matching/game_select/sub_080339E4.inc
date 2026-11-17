	THUMB_FUNC_START sub_080339E4
sub_080339E4: @ 0x080339E4
	push {r4,r5,lr}
	add r4, r0, #0
	bl sub_08034238
	add r3, r4, #0
	add r3, r3, #94
	ldrb r2, [r3]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3]
	ldrb r0, [r4, #28]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r4, #28]
	ldrb r1, [r4, #29]
	mov r0, #13
	neg r0, r0
	and r0, r0, r1
	mov r1, #4
	orr r0, r0, r1
	strb r0, [r4, #29]
	ldr r0, _08033A50  @ =gUnknown_030059A0
	ldr r1, [r0]
	add r2, r1, #0
	add r2, r2, #102
	mov r5, #0
	mov r0, #244
	lsl r0, r0, #4
	strh r0, [r2]
	add r1, r1, #104
	ldr r0, _08033A54  @ =0x00000809
	strh r0, [r1]
	add r0, r4, #0
	bl sub_08003B94
	mov r1, #128
	lsl r1, r1, #3
	str r1, [r4, #12]
	ldr r0, _08033A58  @ =gUnknown_03000488
	strh r1, [r0]
	mov r1, #128
	lsl r1, r1, #1
	strh r1, [r0, #2]
	strh r5, [r0, #4]
	add r1, r4, #0
	bl sub_0803D770
	pop {r4,r5}
	pop {r0}
	bx r0
_08033A50:
	.4byte gUnknown_030059A0
_08033A54:
	.4byte 0x00000809
_08033A58:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_080339E4

