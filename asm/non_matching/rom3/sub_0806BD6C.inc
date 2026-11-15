	THUMB_FUNC_START sub_0806BD6C
sub_0806BD6C: @ 0x0806BD6C
	push {r4,lr}
	ldr r2, _0806BD98  @ =gRam
	ldr r1, _0806BD9C  @ =0x0000050E
	add r4, r2, r1
	ldrh r3, [r4]
	mov r1, #16
	orr r1, r1, r3
	strh r1, [r4]
	mov r1, #162
	lsl r1, r1, #3
	add r4, r2, r1
	ldrh r3, [r4]
	mov r1, #2
	orr r1, r1, r3
	strh r1, [r4]
	ldr r1, _0806BDA0  @ =0x00000982
	add r2, r2, r1
	strb r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806BD98:
	.4byte gRam
_0806BD9C:
	.4byte 0x0000050E
_0806BDA0:
	.4byte 0x00000982
	THUMB_FUNC_END sub_0806BD6C

