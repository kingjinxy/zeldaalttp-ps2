	THUMB_FUNC_START sub_0812B980
sub_0812B980: @ 0x0812B980
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #1]
	cmp r0, #1
	bne _0812BA5E
	ldr r0, [r4, #4]
	add r0, r0, #73
	ldrb r0, [r0]
	cmp r0, #0
	bne _0812BA5E
	ldrb r3, [r4]
	cmp r3, #0
	bne _0812B9B4
	ldr r1, _0812B9B0  @ =gUnknown_03000168
	add r0, r4, #0
	bl sub_0812ADC0
	mov r0, #2
	strb r0, [r4, #1]
	add r0, r4, #0
	bl sub_0812ADF4
	b _0812BA46
	.byte 0x00
	.byte 0x00
_0812B9B0:
	.4byte gUnknown_03000168
_0812B9B4:
	ldrh r2, [r4, #16]
	add r0, r4, #0
	add r0, r0, #88
	ldrb r1, [r0]
	cmp r3, #3
	bne _0812B9C4
	mov r0, #2
	b _0812BA44
_0812B9C4:
	lsr r1, r1, #5
	cmp r1, #0
	bne _0812B9CE
	mov r1, #0
	b _0812B9D8
_0812B9CE:
	ldr r0, [r4, #20]
	lsl r0, r0, #4
	orr r1, r1, r0
	lsl r0, r1, #24
	lsr r1, r0, #24
_0812B9D8:
	ldrb r0, [r4]
	cmp r0, #2
	beq _0812BA10
	cmp r0, #2
	bgt _0812B9E8
	cmp r0, #1
	beq _0812B9EE
	b _0812BA42
_0812B9E8:
	cmp r0, #4
	beq _0812BA38
	b _0812BA42
_0812B9EE:
	ldr r0, _0812BA04  @ =0x04000063
	strb r1, [r0]
	ldr r1, _0812BA08  @ =0x04000064
	mov r3, #128
	lsl r3, r3, #8
	add r0, r3, #0
	orr r2, r2, r0
	strh r2, [r1]
	ldr r2, _0812BA0C  @ =0x04000062
	b _0812BA22
	.byte 0x00
	.byte 0x00
_0812BA04:
	.4byte 0x04000063
_0812BA08:
	.4byte 0x04000064
_0812BA0C:
	.4byte 0x04000062
_0812BA10:
	ldr r0, _0812BA2C  @ =0x04000069
	strb r1, [r0]
	ldr r1, _0812BA30  @ =0x0400006C
	mov r3, #128
	lsl r3, r3, #8
	add r0, r3, #0
	orr r2, r2, r0
	strh r2, [r1]
	ldr r2, _0812BA34  @ =0x04000068
_0812BA22:
	ldrb r1, [r2]
	mov r0, #192
	and r0, r0, r1
	strb r0, [r2]
	b _0812BA42
_0812BA2C:
	.4byte 0x04000069
_0812BA30:
	.4byte 0x0400006C
_0812BA34:
	.4byte 0x04000068
_0812BA38:
	ldr r0, _0812BA64  @ =0x04000079
	strb r1, [r0]
	ldr r1, _0812BA68  @ =0x0400007D
	mov r0, #128
	strb r0, [r1]
_0812BA42:
	mov r0, #0
_0812BA44:
	strb r0, [r4, #1]
_0812BA46:
	ldrb r0, [r4, #27]
	ldr r1, [r4, #4]
	cmp r0, #0
	bne _0812BA56
	add r0, r1, #0
	add r0, r0, #75
	ldrb r0, [r0]
	strb r0, [r4, #28]
_0812BA56:
	add r0, r1, #0
	add r1, r4, #0
	bl sub_0812C2E0
_0812BA5E:
	pop {r4}
	pop {r0}
	bx r0
_0812BA64:
	.4byte 0x04000079
_0812BA68:
	.4byte 0x0400007D
	THUMB_FUNC_END sub_0812B980

