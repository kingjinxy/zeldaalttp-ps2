	THUMB_FUNC_START sub_08039D64
sub_08039D64: @ 0x08039D64
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	ldr r0, _08039D90  @ =gUnknown_03006C80
	ldrb r1, [r0, #2]
	cmp r1, #0
	bne _08039D74
	b _08039ED8
_08039D74:
	ldr r0, _08039D90  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #5]
	ldr r1, _08039D90  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #79
	ldrb r0, [r1]
	cmp r0, #239
	bls _08039D94
	mov r0, #1
	b _0803A028
_08039D90:
	.4byte gUnknown_03006C80
_08039D94:
	ldr r1, _08039DE4  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #79
	ldrb r0, [r1]
	mov r1, #16
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08039DBE
	ldr r0, _08039DE4  @ =gUnknown_03006C80
	ldrb r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #4]
_08039DBE:
	ldr r1, _08039DE4  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #79
	ldrb r0, [r1]
	mov r1, #32
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08039E98
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_08039DDA:
	add r0, r7, #0
	ldrb r1, [r0]
	cmp r1, #3
	bls _08039DE8
	b _08039E68
_08039DE4:
	.4byte gUnknown_03006C80
_08039DE8:
	ldr r0, _08039E64  @ =gUnknown_03006C80
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, #12
	add r1, r0, r2
	mov r0, #0
	str r0, [r1]
	ldr r0, _08039E64  @ =gUnknown_03006C80
	add r2, r7, #0
	ldrb r1, [r2]
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #104
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08039E64  @ =gUnknown_03006C80
	add r2, r7, #0
	ldrb r1, [r2]
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #88
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #9
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08039E64  @ =gUnknown_03006C80
	add r2, r7, #0
	ldrb r1, [r2]
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #96
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #40
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08039DDA
	.byte 0x00
	.byte 0x00
_08039E64:
	.4byte gUnknown_03006C80
_08039E68:
	ldr r0, _08039ECC  @ =gUnknown_03006C80
	ldr r1, _08039ECC  @ =gUnknown_03006C80
	ldr r2, _08039ECC  @ =gUnknown_03006C80
	add r3, r2, #0
	add r2, r2, #36
	ldrb r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	strb r4, [r2]
	ldrb r2, [r1, #4]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strb r3, [r1, #4]
	mov r1, #0
	str r1, [r0, #8]
	mov r0, #0
	str r0, [r7, #4]
	add r0, r7, #4
	ldr r1, _08039ED0  @ =gUnknown_03006A30
	ldr r2, _08039ED4  @ =0x05000090
	bl CpuSet
_08039E98:
	ldr r1, _08039ECC  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #79
	ldrb r0, [r1]
	mov r1, #64
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08039EC8
	ldr r1, _08039ECC  @ =gUnknown_03006C80
	ldr r0, _08039ECC  @ =gUnknown_03006C80
	ldr r1, _08039ECC  @ =gUnknown_03006C80
	ldrb r2, [r1, #4]
	add r1, r2, #1
	ldrb r2, [r0, #4]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #4]
_08039EC8:
	b _0803A024
	.byte 0x00
	.byte 0x00
_08039ECC:
	.4byte gUnknown_03006C80
_08039ED0:
	.4byte gUnknown_03006A30
_08039ED4:
	.4byte 0x05000090
_08039ED8:
	ldr r1, _08039F04  @ =gUnknown_03006C80
	ldr r0, _08039F04  @ =gUnknown_03006C80
	ldr r1, _08039F04  @ =gUnknown_03006C80
	ldrb r2, [r1, #4]
	add r1, r2, #1
	ldrb r2, [r0, #4]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #4]
	ldr r1, _08039F04  @ =gUnknown_03006C80
	ldrb r0, [r1, #3]
	cmp r0, #1
	beq _08039F28
	cmp r0, #1
	bgt _08039F08
	cmp r0, #0
	beq _08039F0E
	b _0803A024
_08039F04:
	.4byte gUnknown_03006C80
_08039F08:
	cmp r0, #2
	beq _08039F68
	b _0803A024
_08039F0E:
	ldr r0, _08039F1C  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	cmp r1, #0
	beq _08039F20
	mov r0, #1
	b _0803A028
	.byte 0x00
	.byte 0x00
_08039F1C:
	.4byte gUnknown_03006C80
_08039F20:
	bl sub_08039CD4
	mov r0, #0
	b _0803A028
_08039F28:
	ldr r0, _08039F34  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	cmp r1, #0
	beq _08039F38
	mov r0, #1
	b _0803A028
_08039F34:
	.4byte gUnknown_03006C80
_08039F38:
	bl sub_08039CD4
	ldr r0, _08039F5C  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	cmp r1, #0
	beq _08039F60
	ldr r0, _08039F5C  @ =gUnknown_03006C80
	ldrb r1, [r0, #1]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #1]
	b _08039F64
	.byte 0x00
	.byte 0x00
_08039F5C:
	.4byte gUnknown_03006C80
_08039F60:
	bl sub_08039D1C
_08039F64:
	mov r0, #0
	b _0803A028
_08039F68:
	ldr r0, _08039F7C  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	cmp r1, #0
	beq _08039F80
	ldr r0, _08039F7C  @ =gUnknown_03006C80
	ldrb r1, [r0, #1]
	cmp r1, #2
	bne _08039F80
	mov r0, #1
	b _0803A028
_08039F7C:
	.4byte gUnknown_03006C80
_08039F80:
	bl sub_08039D1C
	bl sub_08039CD4
	cmp r0, #0
	beq _0803A01C
	ldr r0, _08039FC0  @ =gUnknown_03006C80
	ldrb r1, [r0, #1]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #1]
	ldr r0, _08039FC0  @ =gUnknown_03006C80
	ldrb r1, [r0, #4]
	cmp r1, #11
	bne _08039FB4
	ldr r0, _08039FC0  @ =gUnknown_03006C80
	ldrb r1, [r0, #1]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #1]
_08039FB4:
	ldr r0, _08039FC0  @ =gUnknown_03006C80
	ldrb r1, [r0, #1]
	cmp r1, #2
	bne _08039FC4
	mov r0, #0
	b _0803A028
_08039FC0:
	.4byte gUnknown_03006C80
_08039FC4:
	bl sub_08039D1C
_08039FC8:
	ldr r0, _08039FE8  @ =gUnknown_03006C80
	ldrb r1, [r0, #1]
	cmp r1, #2
	beq _08039FEC
	ldr r1, _08039FE8  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #78
	ldrb r0, [r1]
	ldr r1, _08039FE8  @ =gUnknown_03006C80
	ldrb r2, [r1, #1]
	asr r0, r0, r2
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08039FEC
	b _08039FF2
_08039FE8:
	.4byte gUnknown_03006C80
_08039FEC:
	bl sub_08039D1C
	b _08039FC8
_08039FF2:
	ldr r0, _0803A020  @ =gUnknown_03006C80
	ldr r1, _0803A020  @ =gUnknown_03006C80
	add r2, r1, #0
	add r1, r1, #78
	ldr r2, _0803A020  @ =gUnknown_03006C80
	ldrb r3, [r2, #1]
	mov r4, #1
	add r2, r4, #0
	lsl r2, r2, r3
	ldrb r1, [r1]
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #78
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0803A01C:
	b _0803A024
	.byte 0x00
	.byte 0x00
_0803A020:
	.4byte gUnknown_03006C80
_0803A024:
	mov r0, #0
	b _0803A028
_0803A028:
	add sp, sp, #8
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08039D64

