	THUMB_FUNC_START sub_0800FD28
sub_0800FD28: @ 0x0800FD28
	push {r4-r6,lr}
	ldr r4, _0800FD9C  @ =gUnknown_0202D4D0
	mov r1, #136
	lsl r1, r1, #3
	add r0, r4, r1
	add r1, r4, #0
	mov r2, #64
	bl CpuFastSet
	add r4, r4, #10
	mov r6, #3
	add r5, r4, #0
	add r5, r5, #192
	add r3, r4, #0
	add r3, r3, #128
	add r2, r4, #0
	add r2, r2, #64
_0800FD4A:
	ldr r0, _0800FDA0  @ =gUnknown_02016D60
	ldrb r1, [r0, #31]
	mov r0, #16
	lsl r0, r0, r6
	and r1, r1, r0
	cmp r1, #0
	bne _0800FD78
	strh r1, [r5, #6]
	strh r1, [r5, #4]
	strh r1, [r5, #2]
	strh r1, [r5]
	strh r1, [r3, #6]
	strh r1, [r3, #4]
	strh r1, [r3, #2]
	strh r1, [r3]
	strh r1, [r2, #6]
	strh r1, [r2, #4]
	strh r1, [r2, #2]
	strh r1, [r2]
	strh r1, [r4, #6]
	strh r1, [r4, #4]
	strh r1, [r4, #2]
	strh r1, [r4]
_0800FD78:
	add r5, r5, #10
	add r3, r3, #10
	add r2, r2, #10
	add r4, r4, #10
	sub r6, r6, #1
	cmp r6, #0
	bge _0800FD4A
	ldr r0, _0800FDA4  @ =gUnknown_0202D4DA
	ldr r1, _0800FDA8  @ =gUnknown_030004A0
	ldr r2, _0800FDAC  @ =0xFFFFFC36
	add r0, r0, r2
	str r0, [r1, #16]
	mov r0, #1
	strh r0, [r1, #14]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800FD9C:
	.4byte gUnknown_0202D4D0
_0800FDA0:
	.4byte gUnknown_02016D60
_0800FDA4:
	.4byte gUnknown_0202D4DA
_0800FDA8:
	.4byte gUnknown_030004A0
_0800FDAC:
	.4byte 0xFFFFFC36
	THUMB_FUNC_END sub_0800FD28

