	THUMB_FUNC_START sub_0812DE74
sub_0812DE74: @ 0x0812DE74
	push {r4,r5,lr}
	ldr r1, _0812DEA4  @ =gRam
	ldr r0, _0812DEA8  @ =0x00000A05
	add r3, r1, r0
	ldrb r2, [r3]
	sub r0, r0, #1
	add r4, r1, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _0812DEB8
	sub r2, r2, #1
	strb r2, [r3]
	cmp r2, #0
	bge _0812DEB0
	mov r2, #0
	strb r2, [r3]
	mov r0, #2
	strb r0, [r4]
	ldr r0, _0812DEAC  @ =0x00000A06
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _0812DEB8
_0812DEA4:
	.4byte gRam
_0812DEA8:
	.4byte 0x00000A05
_0812DEAC:
	.4byte 0x00000A06
_0812DEB0:
	ldr r0, _0812DF1C  @ =gUnknown_0822B11A
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r4]
_0812DEB8:
	ldr r1, _0812DF20  @ =gUnknown_0822B122
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r2, [r0]
	mov r5, #46
	ldr r3, _0812DF24  @ =gUnknown_03002780
	mov r1, #252
	lsl r1, r1, #1
	add r3, r3, r1
	mov r4, #68
	ldrh r1, [r3, #2]
	ldr r0, _0812DF28  @ =0xFFFFFE00
	and r0, r0, r1
	orr r0, r0, r4
	strh r0, [r3, #2]
	strb r5, [r3]
	ldr r1, _0812DF2C  @ =0x000003FF
	add r0, r1, #0
	and r2, r2, r0
	ldrh r1, [r3, #4]
	ldr r0, _0812DF30  @ =0xFFFFFC00
	and r0, r0, r1
	orr r0, r0, r2
	strh r0, [r3, #4]
	ldrb r0, [r3, #5]
	mov r2, #15
	and r2, r2, r0
	mov r0, #32
	orr r2, r2, r0
	ldrb r1, [r3, #3]
	mov r0, #17
	neg r0, r0
	and r0, r0, r1
	mov r1, #33
	neg r1, r1
	and r0, r0, r1
	mov r1, #63
	and r0, r0, r1
	strb r0, [r3, #3]
	sub r1, r1, #76
	mov r0, #0
	strb r0, [r3, #1]
	and r2, r2, r1
	mov r0, #4
	orr r2, r2, r0
	strb r2, [r3, #5]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812DF1C:
	.4byte gUnknown_0822B11A
_0812DF20:
	.4byte gUnknown_0822B122
_0812DF24:
	.4byte gUnknown_03002780
_0812DF28:
	.4byte 0xFFFFFE00
_0812DF2C:
	.4byte 0x000003FF
_0812DF30:
	.4byte 0xFFFFFC00
	THUMB_FUNC_END sub_0812DE74

