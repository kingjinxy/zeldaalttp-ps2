	THUMB_FUNC_START sub_08102EC0
sub_08102EC0: @ 0x08102EC0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	add r0, r4, #0
	bl sub_080C5044
	ldr r5, _08102EF4  @ =gRam
	ldr r1, _08102EF8  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r1, [r6]
	cmp r1, #0
	beq _08102F34
	ldr r2, _08102EFC  @ =0x00000F22
	add r0, r5, r2
	add r1, r4, r0
	ldrb r2, [r1]
	cmp r2, #0
	beq _08102F04
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	bne _08102F00
	sub r0, r2, #1
	b _08102F02
_08102EF4:
	.4byte gRam
_08102EF8:
	.4byte 0x00000FC2
_08102EFC:
	.4byte 0x00000F22
_08102F00:
	add r0, r2, #1
_08102F02:
	strb r0, [r1]
_08102F04:
	ldr r0, _08102F20  @ =gRam
	ldr r3, _08102F24  @ =0x00000F12
	add r0, r0, r3
	add r2, r7, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _08102F2C
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08102F28
	sub r0, r1, #1
	b _08102F2A
	.byte 0x00
	.byte 0x00
_08102F20:
	.4byte gRam
_08102F24:
	.4byte 0x00000F12
_08102F28:
	add r0, r1, #1
_08102F2A:
	strb r0, [r2]
_08102F2C:
	add r0, r7, #0
	bl sub_08102E40
	b _08102F92
_08102F34:
	ldr r2, _08102F98  @ =0x00000F52
	add r0, r5, r2
	add r0, r7, r0
	strb r1, [r0]
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #96
	strb r1, [r6]
	bl GetRandomInt
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r2, #3
	and r2, r2, r0
	ldr r3, _08102F9C  @ =0x00001152
	add r1, r5, r3
	add r6, r7, r1
	ldr r1, _08102FA0  @ =gUnknown_0817B91C
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r6]
	add r3, r3, #16
	add r1, r5, r3
	add r4, r7, r1
	ldr r1, _08102FA4  @ =gUnknown_0817B920
	add r2, r2, r1
	ldrb r1, [r2]
	strb r1, [r4]
	mov r1, #28
	and r1, r1, r0
	cmp r1, #0
	bne _08102F92
	add r0, r7, #0
	mov r1, #24
	bl sub_080C2CB4
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	ldrb r0, [r0]
	strb r0, [r4]
	ldr r2, _08102FA8  @ =0x00000961
	add r0, r5, r2
	ldrb r0, [r0]
	strb r0, [r6]
_08102F92:
	pop {r4-r7}
	pop {r0}
	bx r0
_08102F98:
	.4byte 0x00000F52
_08102F9C:
	.4byte 0x00001152
_08102FA0:
	.4byte gUnknown_0817B91C
_08102FA4:
	.4byte gUnknown_0817B920
_08102FA8:
	.4byte 0x00000961
	THUMB_FUNC_END sub_08102EC0

