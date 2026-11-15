	THUMB_FUNC_START sub_0811A158
sub_0811A158: @ 0x0811A158
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r4, _0811A200  @ =gRam
	ldr r0, _0811A204  @ =0x00001719
	add r1, r4, r0
	mov r0, #12
	strb r0, [r1]
	ldr r1, _0811A208  @ =0x00000E47
	add r0, r4, r1
	add r0, r5, r0
	mov r2, #161
	lsl r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	mov r6, #195
	lsl r6, r6, #5
	add r0, r4, r6
	add r0, r5, r0
	ldr r2, _0811A20C  @ =0x00000B1E
	add r1, r4, r2
	ldrh r1, [r1]
	strb r1, [r0]
	ldr r6, _0811A210  @ =0x000016C8
	add r0, r4, r6
	ldrh r3, [r0]
	ldr r0, _0811A214  @ =0x0000FFFF
	cmp r3, r0
	bne _0811A198
	mov r3, #0
_0811A198:
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _0811A218  @ =gUnknown_0817F530
	ldr r6, _0811A21C  @ =0x000016D4
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r2
	sub r1, r1, r3
	ldrh r0, [r0]
	add r1, r1, r0
	add r1, r1, #18
	mov r0, #150
	lsl r0, r0, #4
	add r2, r4, r0
	strh r1, [r2]
	ldr r1, _0811A220  @ =0x000016C4
	add r0, r4, r1
	ldrh r0, [r0]
	add r0, r0, #8
	ldr r6, _0811A224  @ =0x00000964
	add r3, r4, r6
	strh r0, [r3]
	ldr r1, _0811A228  @ =0x00000DC5
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r2, _0811A22C  @ =0x00000DD9
	add r0, r4, r2
	add r0, r5, r0
	sub r6, r6, #3
	add r1, r4, r6
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0811A230  @ =0x00000DCF
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r3]
	strb r1, [r0]
	add r2, r2, #10
	add r0, r4, r2
	add r0, r5, r0
	add r6, r6, #4
	add r1, r4, r6
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_0811A200:
	.4byte gRam
_0811A204:
	.4byte 0x00001719
_0811A208:
	.4byte 0x00000E47
_0811A20C:
	.4byte 0x00000B1E
_0811A210:
	.4byte 0x000016C8
_0811A214:
	.4byte 0x0000FFFF
_0811A218:
	.4byte gUnknown_0817F530
_0811A21C:
	.4byte 0x000016D4
_0811A220:
	.4byte 0x000016C4
_0811A224:
	.4byte 0x00000964
_0811A228:
	.4byte 0x00000DC5
_0811A22C:
	.4byte 0x00000DD9
_0811A230:
	.4byte 0x00000DCF
	THUMB_FUNC_END sub_0811A158

