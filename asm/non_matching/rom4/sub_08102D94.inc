	THUMB_FUNC_START sub_08102D94
sub_08102D94: @ 0x08102D94
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _08102DD0  @ =gRam
	ldr r2, _08102DD4  @ =0x00000FC2
	add r0, r1, r2
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _08102E1C
	sub r2, r2, #160
	add r0, r1, r2
	add r3, r4, r0
	ldr r2, _08102DD8  @ =0x00001152
	add r0, r1, r2
	add r0, r4, r0
	ldrb r2, [r3]
	ldrb r0, [r0]
	cmp r2, r0
	beq _08102DE0
	sub r0, r2, r0
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08102DDC
	sub r0, r2, #1
	b _08102DDE
_08102DD0:
	.4byte gRam
_08102DD4:
	.4byte 0x00000FC2
_08102DD8:
	.4byte 0x00001152
_08102DDC:
	add r0, r2, #1
_08102DDE:
	strb r0, [r3]
_08102DE0:
	ldr r0, _08102E04  @ =gRam
	ldr r2, _08102E08  @ =0x00000F12
	add r1, r0, r2
	add r3, r4, r1
	ldr r1, _08102E0C  @ =0x00001162
	add r0, r0, r1
	add r0, r4, r0
	ldrb r2, [r3]
	ldrb r0, [r0]
	cmp r2, r0
	beq _08102E14
	sub r0, r2, r0
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08102E10
	sub r0, r2, #1
	b _08102E12
_08102E04:
	.4byte gRam
_08102E08:
	.4byte 0x00000F12
_08102E0C:
	.4byte 0x00001162
_08102E10:
	add r0, r2, #1
_08102E12:
	strb r0, [r3]
_08102E14:
	add r0, r4, #0
	bl sub_08102E40
	b _08102E34
_08102E1C:
	ldr r2, _08102E3C  @ =0x00000F52
	add r1, r1, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #32
	strb r1, [r5]
_08102E34:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08102E3C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08102D94

