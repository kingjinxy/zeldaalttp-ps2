	THUMB_FUNC_START sub_0812A85C
sub_0812A85C: @ 0x0812A85C
	push {r4,r5,lr}
	ldr r2, _0812A8D8  @ =0x04000100
	ldr r0, _0812A8DC  @ =gUnknown_03000150
	ldrh r0, [r0]
	mov r1, #128
	lsl r1, r1, #16
	orr r0, r0, r1
	str r0, [r2]
	ldr r0, _0812A8E0  @ =gUnknown_03000153
	ldrb r0, [r0]
	cmp r0, #0
	beq _0812A8D0
	ldr r4, _0812A8E4  @ =0x040000BC
	ldrh r1, [r4, #10]
	ldr r2, _0812A8E8  @ =0x0000C5FF
	add r0, r2, #0
	and r0, r0, r1
	strh r0, [r4, #10]
	ldrh r3, [r4, #10]
	ldr r1, _0812A8EC  @ =0x00007FFF
	add r0, r1, #0
	and r0, r0, r3
	strh r0, [r4, #10]
	ldrh r0, [r4, #10]
	ldr r3, _0812A8F0  @ =0x040000C8
	ldrh r0, [r3, #10]
	and r2, r2, r0
	strh r2, [r3, #10]
	ldrh r0, [r3, #10]
	and r1, r1, r0
	strh r1, [r3, #10]
	ldrh r0, [r3, #10]
	ldr r1, _0812A8F4  @ =gUnknown_03000140
	ldr r2, _0812A8F8  @ =gUnknown_03000152
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	str r0, [r4]
	ldr r0, _0812A8FC  @ =0x040000A0
	str r0, [r4, #4]
	ldr r5, _0812A900  @ =0xB6400004
	str r5, [r4, #8]
	ldr r0, [r4, #8]
	ldr r1, _0812A904  @ =gUnknown_03000148
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	str r0, [r3]
	ldr r0, _0812A908  @ =0x040000A4
	str r0, [r3, #4]
	str r5, [r3, #8]
	ldr r0, [r3, #8]
	ldrb r1, [r2]
	mov r0, #1
	sub r0, r0, r1
	strb r0, [r2]
_0812A8D0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812A8D8:
	.4byte 0x04000100
_0812A8DC:
	.4byte gUnknown_03000150
_0812A8E0:
	.4byte gUnknown_03000153
_0812A8E4:
	.4byte 0x040000BC
_0812A8E8:
	.4byte 0x0000C5FF
_0812A8EC:
	.4byte 0x00007FFF
_0812A8F0:
	.4byte 0x040000C8
_0812A8F4:
	.4byte gUnknown_03000140
_0812A8F8:
	.4byte gUnknown_03000152
_0812A8FC:
	.4byte 0x040000A0
_0812A900:
	.4byte 0xB6400004
_0812A904:
	.4byte gUnknown_03000148
_0812A908:
	.4byte 0x040000A4
	THUMB_FUNC_END sub_0812A85C

