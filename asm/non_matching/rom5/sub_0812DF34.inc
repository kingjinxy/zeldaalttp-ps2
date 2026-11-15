	THUMB_FUNC_START sub_0812DF34
sub_0812DF34: @ 0x0812DF34
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _0812E07C  @ =gRam
	ldr r2, _0812E080  @ =0x00000A05
	add r0, r1, r2
	ldrb r7, [r0]
	mov r12, r1
	cmp r7, #6
	ble _0812DF4E
	b _0812E06E
_0812DF4E:
	ldr r3, _0812E084  @ =0x00000A07
	add r3, r3, r12
	mov r10, r3
	ldrb r4, [r3]
	cmp r4, #79
	ble _0812DF5C
	mov r4, #79
_0812DF5C:
	ldr r0, _0812E088  @ =0x00000A0C
	add r0, r0, r12
	mov r1, #0
	ldrsh r0, [r0, r1]
	add r6, r4, r0
	add r4, r6, #0
	add r4, r4, #38
	mov r2, #26
	neg r2, r2
	add r2, r2, r6
	mov r8, r2
	mov r5, #1
	cmp r2, #31
	bhi _0812DF7A
	mov r5, #2
_0812DF7A:
	lsl r0, r7, #1
	ldr r3, _0812E08C  @ =gUnknown_0822B130
	add r0, r0, r3
	ldrh r3, [r0]
	mov r2, #232
	lsl r2, r2, #3
	add r2, r2, r12
	ldrh r1, [r2, #2]
	ldr r0, _0812E090  @ =0xFFFFFE00
	and r0, r0, r1
	mov r1, #66
	orr r0, r0, r1
	strh r0, [r2, #2]
	strb r4, [r2]
	ldr r0, _0812E094  @ =0x000003FF
	and r3, r3, r0
	ldrh r1, [r2, #4]
	ldr r0, _0812E098  @ =0xFFFFFC00
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #4]
	ldrb r0, [r2, #5]
	mov r1, #15
	and r1, r1, r0
	mov r3, #16
	orr r1, r1, r3
	ldrb r3, [r2, #3]
	mov r0, #17
	neg r0, r0
	and r0, r0, r3
	mov r3, #33
	neg r3, r3
	and r0, r0, r3
	mov r3, #63
	and r0, r0, r3
	strb r0, [r2, #3]
	mov r0, #0
	strb r0, [r2, #1]
	mov r0, #3
	mov r9, r0
	lsl r0, r5, #2
	sub r3, r3, #76
	and r1, r1, r3
	orr r1, r1, r0
	strb r1, [r2, #5]
	mov r5, #1
	mov r0, r8
	cmp r0, #31
	bhi _0812DFDE
	mov r5, #2
_0812DFDE:
	add r0, r7, #1
	lsl r0, r0, #1
	ldr r1, _0812E08C  @ =gUnknown_0822B130
	add r0, r0, r1
	ldrh r3, [r0]
	add r4, r6, #0
	add r4, r4, #46
	mov r2, #233
	lsl r2, r2, #3
	add r2, r2, r12
	ldrh r1, [r2, #2]
	ldr r0, _0812E090  @ =0xFFFFFE00
	and r0, r0, r1
	mov r1, #66
	orr r0, r0, r1
	strh r0, [r2, #2]
	strb r4, [r2]
	ldr r0, _0812E094  @ =0x000003FF
	and r3, r3, r0
	ldrh r1, [r2, #4]
	ldr r0, _0812E098  @ =0xFFFFFC00
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #4]
	ldrb r0, [r2, #5]
	mov r1, #15
	and r1, r1, r0
	mov r3, #16
	orr r1, r1, r3
	ldrb r3, [r2, #3]
	mov r0, #17
	neg r0, r0
	and r0, r0, r3
	mov r3, #33
	neg r3, r3
	and r0, r0, r3
	mov r3, #63
	and r0, r0, r3
	strb r0, [r2, #3]
	mov r0, #0
	strb r0, [r2, #1]
	mov r0, r9
	and r5, r5, r0
	lsl r0, r5, #2
	sub r3, r3, #76
	and r1, r1, r3
	orr r1, r1, r0
	strb r1, [r2, #5]
	ldr r0, _0812E09C  @ =0x00000A04
	add r0, r0, r12
	ldrb r0, [r0]
	cmp r0, #0
	bne _0812E06E
	mov r1, r10
	ldrb r0, [r1]
	add r0, r0, #4
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	beq _0812E064
	cmp r0, #72
	beq _0812E064
	cmp r0, #76
	beq _0812E064
	cmp r0, #88
	bne _0812E06E
_0812E064:
	ldr r1, _0812E080  @ =0x00000A05
	add r1, r1, r12
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
_0812E06E:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0812E07C:
	.4byte gRam
_0812E080:
	.4byte 0x00000A05
_0812E084:
	.4byte 0x00000A07
_0812E088:
	.4byte 0x00000A0C
_0812E08C:
	.4byte gUnknown_0822B130
_0812E090:
	.4byte 0xFFFFFE00
_0812E094:
	.4byte 0x000003FF
_0812E098:
	.4byte 0xFFFFFC00
_0812E09C:
	.4byte 0x00000A04
	THUMB_FUNC_END sub_0812DF34

