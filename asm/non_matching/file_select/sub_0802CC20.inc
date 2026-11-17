	THUMB_FUNC_START sub_0802CC20
sub_0802CC20: @ 0x0802CC20
	push {r4,lr}
	sub sp, sp, #4
	ldr r1, _0802CC94  @ =gUnknown_03000940
	ldr r0, _0802CC98  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #2
	and r0, r0, r1
	ldr r4, _0802CC9C  @ =gUnknown_03000420
	cmp r0, #0
	beq _0802CC62
	ldr r0, _0802CCA0  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #0
	bne _0802CC62
	ldr r0, _0802CCA4  @ =gUnknown_03000E20
	ldrb r0, [r0, #17]
	cmp r0, #0
	bne _0802CC62
	ldr r0, _0802CCA8  @ =gUnknown_03006C80
	add r0, r0, #110
	ldrb r0, [r0]
	cmp r0, #1
	bhi _0802CC62
	add r1, r4, #0
	ldrb r0, [r1]
	cmp r0, #1
	beq _0802CCBC
_0802CC62:
	mov r3, #0
	strb r3, [r4, #5]
	mov r0, #129
	strb r0, [r4, #4]
	ldr r1, _0802CCAC  @ =gUnknown_030004A0
	add r0, r1, #0
	add r0, r0, #102
	strh r3, [r0]
	ldrh r2, [r1]
	ldr r0, _0802CCB0  @ =0x0000BFFF
	and r0, r0, r2
	strh r0, [r1]
	str r3, [sp]
	ldrb r1, [r4, #3]
	lsl r1, r1, #11
	ldr r0, _0802CCB4  @ =gUnknown_0202D250
	add r1, r1, r0
	ldr r2, _0802CCB8  @ =0x010000A0
	mov r0, sp
	bl CpuFastSet
	bl sub_0802C934
	b _0802CD28
	.byte 0x00
	.byte 0x00
_0802CC94:
	.4byte gUnknown_03000940
_0802CC98:
	.4byte gLCDRegisterBuffer
_0802CC9C:
	.4byte gUnknown_03000420
_0802CCA0:
	.4byte gUnknown_02000010
_0802CCA4:
	.4byte gUnknown_03000E20
_0802CCA8:
	.4byte gUnknown_03006C80
_0802CCAC:
	.4byte gUnknown_030004A0
_0802CCB0:
	.4byte 0x0000BFFF
_0802CCB4:
	.4byte gUnknown_0202D250
_0802CCB8:
	.4byte 0x010000A0
_0802CCBC:
	ldrb r0, [r1, #5]
	cmp r0, #5
	bhi _0802CD0E
	lsl r0, r0, #2
	ldr r1, _0802CCCC  @ =0x0802CCD0
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0802CCCC:
	.4byte _0802CCCC+0x4
	.4byte _0802CD0E
	.4byte _0802CD06
	.4byte _0802CD06
	.4byte _0802CCE8
	.4byte _0802CCE8
	.4byte _0802CD02
_0802CCE8:
	mov r0, #11
	mov r1, #6
	mov r2, #8
	mov r3, #8
	bl sub_0802CAA8
	bl sub_0802D67C
	bl sub_0802D6F0
	bl sub_0802C934
	b _0802CD06
_0802CD02:
	bl sub_08058D04
_0802CD06:
	ldr r1, _0802CD30  @ =gUnknown_03000420
	ldrb r0, [r1, #5]
	add r0, r0, #1
	strb r0, [r1, #5]
_0802CD0E:
	ldr r2, _0802CD30  @ =gUnknown_03000420
	ldr r0, _0802CD34  @ =gUnknown_03006C80
	ldr r1, _0802CD38  @ =gLCDRegisterBuffer
	add r0, r0, #104
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r1, [r0]
	ldrb r0, [r2, #10]
	cmp r0, r1
	beq _0802CD28
	strb r1, [r2, #10]
	mov r0, #1
	strb r0, [r2, #2]
_0802CD28:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_0802CD30:
	.4byte gUnknown_03000420
_0802CD34:
	.4byte gUnknown_03006C80
_0802CD38:
	.4byte gLCDRegisterBuffer
	THUMB_FUNC_END sub_0802CC20

