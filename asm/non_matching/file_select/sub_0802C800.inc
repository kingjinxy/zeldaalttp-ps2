	THUMB_FUNC_START sub_0802C800
sub_0802C800: @ 0x0802C800
	push {r4,r5,lr}
	sub sp, sp, #4
	mov r4, #0
	str r4, [sp]
	ldr r5, _0802C880  @ =gUnknown_03000420
	ldr r2, _0802C884  @ =0x0500000B
	mov r0, sp
	add r1, r5, #0
	bl CpuSet
	mov r0, #1
	strb r0, [r5]
	strb r4, [r5, #3]
	strb r0, [r5, #2]
	ldr r1, _0802C888  @ =gUnknown_030004A0
	ldr r0, _0802C88C  @ =gUnknown_08142374
	ldrh r0, [r0, #36]
	strh r0, [r1, #8]
	bl sub_0802C9B8
	ldr r4, _0802C890  @ =gUnknown_02030A70
	add r0, r4, #0
	mov r1, #16
	bl zero_memory
	ldrh r1, [r4, #2]
	ldr r0, _0802C894  @ =0xFFFFFE00
	and r0, r0, r1
	mov r1, #212
	orr r0, r0, r1
	strh r0, [r4, #2]
	mov r0, #10
	strb r0, [r4]
	ldrb r1, [r4, #3]
	mov r0, #63
	and r0, r0, r1
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r4, #3]
	ldrh r1, [r4, #4]
	ldr r0, _0802C898  @ =0xFFFFFC00
	and r0, r0, r1
	mov r3, #186
	lsl r3, r3, #2
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r4, #4]
	ldrb r1, [r4, #5]
	mov r0, #15
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #5]
	mov r0, #255
	strb r0, [r5, #12]
	mov r0, #1
	neg r0, r0
	strb r0, [r5, #7]
	bl sub_0802C89C
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802C880:
	.4byte gUnknown_03000420
_0802C884:
	.4byte 0x0500000B
_0802C888:
	.4byte gUnknown_030004A0
_0802C88C:
	.4byte gUnknown_08142374
_0802C890:
	.4byte gUnknown_02030A70
_0802C894:
	.4byte 0xFFFFFE00
_0802C898:
	.4byte 0xFFFFFC00
	THUMB_FUNC_END sub_0802C800

