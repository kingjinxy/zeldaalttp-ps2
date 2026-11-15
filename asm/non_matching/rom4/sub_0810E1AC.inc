	THUMB_FUNC_START sub_0810E1AC
sub_0810E1AC: @ 0x0810E1AC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r3, _0810E22C  @ =gRam
	ldr r0, _0810E230  @ =0x00001172
	add r1, r3, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0810E234  @ =0x00001012
	add r1, r3, r0
	add r1, r5, r1
	ldrb r0, [r1]
	mov r2, #2
	orr r0, r0, r2
	strb r0, [r1]
	ldr r0, _0810E238  @ =0x00001122
	add r1, r3, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #12
	orr r0, r0, r2
	strb r0, [r1]
	ldr r0, _0810E23C  @ =0x00001032
	add r1, r3, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #16
	orr r0, r0, r2
	strb r0, [r1]
	mov r4, #0
	ldr r2, _0810E240  @ =gUnknown_0817D020
	ldr r0, _0810E244  @ =0x000009DA
	add r1, r3, r0
	ldrb r0, [r2]
	ldr r3, _0810E248  @ =gUnknown_0817CFE8
	mov r12, r3
	ldrb r3, [r1]
	cmp r0, r3
	beq _0810E218
	add r7, r2, #0
	add r3, r1, #0
	mov r6, #255
_0810E204:
	add r4, r4, #1
	cmp r4, #13
	bgt _0810E218
	add r0, r4, r7
	ldrh r1, [r3]
	ldrb r2, [r0]
	add r0, r6, #0
	and r0, r0, r1
	cmp r2, r0
	bne _0810E204
_0810E218:
	lsl r0, r4, #2
	add r0, r0, r12
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810E22C:
	.4byte gRam
_0810E230:
	.4byte 0x00001172
_0810E234:
	.4byte 0x00001012
_0810E238:
	.4byte 0x00001122
_0810E23C:
	.4byte 0x00001032
_0810E240:
	.4byte gUnknown_0817D020
_0810E244:
	.4byte 0x000009DA
_0810E248:
	.4byte gUnknown_0817CFE8
	THUMB_FUNC_END sub_0810E1AC

