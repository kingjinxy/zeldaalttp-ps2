	THUMB_FUNC_START sub_0800C658
sub_0800C658: @ 0x0800C658
	push {r4,r5,lr}
	mov r5, #0
	ldr r4, _0800C6A0  @ =gUnknown_02030790
	ldr r2, [r4, #28]
	ldrb r1, [r4, #11]
	strb r1, [r2]
	ldr r3, [r4, #28]
	ldrb r1, [r4, #2]
	ldrb r2, [r4, #3]
	eor r1, r1, r2
	strb r1, [r3, #1]
	ldr r1, [r4, #28]
	strh r5, [r1, #2]
	ldr r1, [r4, #28]
	add r1, r1, #4
	ldr r2, _0800C6A4  @ =0x04000005
	bl CpuSet
	mov r2, #0
	ldr r1, [r4, #28]
_0800C680:
	ldrh r0, [r1]
	add r5, r5, r0
	add r1, r1, #2
	add r2, r2, #1
	cmp r2, #11
	bls _0800C680
	ldr r0, [r4, #28]
	mvn r1, r5
	sub r1, r1, #14
	strh r1, [r0, #2]
	mov r0, #1
	strb r0, [r4, #4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800C6A0:
	.4byte gUnknown_02030790
_0800C6A4:
	.4byte 0x04000005
	THUMB_FUNC_END sub_0800C658

