	THUMB_FUNC_START sub_0802DA30
sub_0802DA30: @ 0x0802DA30
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _0802DA94  @ =gUnknown_03000E20
	mov r1, #128
	add r0, r4, #0
	orr r0, r0, r1
	strb r0, [r2, #17]
	ldr r1, _0802DA98  @ =gUnknown_0201EF18
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #30
	strb r0, [r1, #2]
	ldr r0, _0802DA9C  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	cmp r4, r0
	bne _0802DAA8
	ldr r0, _0802DAA0  @ =0x00000406
	bl sub_0800D67C
	ldr r2, _0802DAA4  @ =gUnknown_02000010
	ldrb r0, [r2, #2]
	mov r1, #48
	orr r0, r0, r1
	mov r1, #63
	and r0, r0, r1
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r2, #2]
	ldrb r3, [r2, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r3
	mov r4, #8
	orr r0, r0, r4
	strb r0, [r2, #3]
	ldrb r3, [r2, #4]
	add r0, r1, #0
	and r0, r0, r3
	orr r0, r0, r4
	strb r0, [r2, #4]
	ldrb r0, [r2, #5]
	and r1, r1, r0
	mov r0, #12
	orr r1, r1, r0
	strb r1, [r2, #5]
	b _0802DAB4
_0802DA94:
	.4byte gUnknown_03000E20
_0802DA98:
	.4byte gUnknown_0201EF18
_0802DA9C:
	.4byte gLCDRegisterBuffer
_0802DAA0:
	.4byte 0x00000406
_0802DAA4:
	.4byte gUnknown_02000010
_0802DAA8:
	ldr r0, _0802DAD0  @ =0x0000800F
	bl sub_0800D6A4
	ldr r1, _0802DAD4  @ =gUnknown_0201ED90
	add r0, r4, #1
	str r0, [r1, #8]
_0802DAB4:
	mov r0, #0
	str r0, [sp]
	ldr r1, _0802DAD8  @ =0x06017E80
	ldr r2, _0802DADC  @ =0x01000030
	mov r0, sp
	bl CpuFastSet
	bl sub_0802DC2C
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802DAD0:
	.4byte 0x0000800F
_0802DAD4:
	.4byte gUnknown_0201ED90
_0802DAD8:
	.4byte 0x06017E80
_0802DADC:
	.4byte 0x01000030
	THUMB_FUNC_END sub_0802DA30

