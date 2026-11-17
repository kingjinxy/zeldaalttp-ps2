	THUMB_FUNC_START sub_0812BA6C
sub_0812BA6C: @ 0x0812BA6C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #1]
	cmp r0, #0
	beq _0812BAF8
	ldrb r0, [r4]
	cmp r0, #4
	bhi _0812BAEC
	lsl r0, r0, #2
	ldr r1, _0812BA88  @ =0x0812BA8C
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_0812BA88:
	.4byte _0812BA88+0x4
	.4byte _0812BAA0
	.4byte _0812BABC
	.4byte _0812BACC
	.4byte _0812BAD4
	.4byte _0812BAE0
_0812BAA0:
	ldr r1, _0812BAB4  @ =gUnknown_03000168
	add r0, r4, #0
	bl sub_0812ADC0
	ldr r1, _0812BAB8  @ =gUnknown_0300016C
	add r0, r4, #0
	bl sub_0812ADDC
	b _0812BAEC
	.byte 0x00
	.byte 0x00
_0812BAB4:
	.4byte gUnknown_03000168
_0812BAB8:
	.4byte gUnknown_0300016C
_0812BABC:
	ldr r1, _0812BAC8  @ =0x04000063
	mov r0, #8
	strb r0, [r1]
	add r1, r1, #2
	b _0812BAE8
	.byte 0x00
	.byte 0x00
_0812BAC8:
	.4byte 0x04000063
_0812BACC:
	ldr r1, _0812BAD0  @ =0x04000069
	b _0812BAE2
_0812BAD0:
	.4byte 0x04000069
_0812BAD4:
	ldr r1, _0812BADC  @ =0x04000070
	mov r0, #0
	b _0812BAEA
	.byte 0x00
	.byte 0x00
_0812BADC:
	.4byte 0x04000070
_0812BAE0:
	ldr r1, _0812BB00  @ =0x04000079
_0812BAE2:
	mov r0, #8
	strb r0, [r1]
	add r1, r1, #4
_0812BAE8:
	mov r0, #192
_0812BAEA:
	strb r0, [r1]
_0812BAEC:
	ldr r0, [r4, #4]
	add r1, r4, #0
	bl sub_0812C2E0
	mov r0, #0
	strb r0, [r4, #1]
_0812BAF8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812BB00:
	.4byte 0x04000079
	THUMB_FUNC_END sub_0812BA6C

