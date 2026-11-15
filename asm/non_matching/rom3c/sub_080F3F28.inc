	THUMB_FUNC_START sub_080F3F28
sub_080F3F28: @ 0x080F3F28
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r3, r4, #0
	ldr r6, _080F3F44  @ =gRam
	ldr r1, _080F3F48  @ =0x00000FC2
	add r0, r6, r1
	add r7, r4, r0
	ldrb r2, [r7]
	cmp r2, #0
	beq _080F3F50
	ldr r0, _080F3F4C  @ =0x00000F92
	add r2, r6, r0
	b _080F3FA6
_080F3F44:
	.4byte gRam
_080F3F48:
	.4byte 0x00000FC2
_080F3F4C:
	.4byte 0x00000F92
_080F3F50:
	ldr r1, _080F3FB8  @ =0x00000F62
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #3
	bhi _080F3FE4
	ldr r1, _080F3FBC  @ =gUnknown_081795A4
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r7]
	ldr r0, _080F3FC0  @ =0x00001082
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080F3FC4  @ =gUnknown_081795A8
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080F3FC8  @ =0x00000FB2
	add r3, r6, r1
	add r3, r4, r3
	strb r0, [r3]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r0, _080F3FCC  @ =0x00000F22
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080F3FD0  @ =gUnknown_08179570
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F3FD4  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080F3FD8  @ =gUnknown_08179574
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080F3FDC  @ =0x00000F92
	add r2, r6, r1
_080F3FA6:
	add r2, r4, r2
	ldr r1, _080F3FE0  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	b _080F4010
_080F3FB8:
	.4byte 0x00000F62
_080F3FBC:
	.4byte gUnknown_081795A4
_080F3FC0:
	.4byte 0x00001082
_080F3FC4:
	.4byte gUnknown_081795A8
_080F3FC8:
	.4byte 0x00000FB2
_080F3FCC:
	.4byte 0x00000F22
_080F3FD0:
	.4byte gUnknown_08179570
_080F3FD4:
	.4byte 0x00000F12
_080F3FD8:
	.4byte gUnknown_08179574
_080F3FDC:
	.4byte 0x00000F92
_080F3FE0:
	.4byte 0x00000996
_080F3FE4:
	ldr r0, _080F4018  @ =0x00000F52
	add r1, r6, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F401C  @ =0x00000FB2
	add r0, r6, r1
	add r0, r3, r0
	strb r2, [r0]
	add r1, r1, #208
	add r0, r6, r1
	add r0, r3, r0
	strb r2, [r0]
	ldr r1, _080F4020  @ =0x00000F22
	add r0, r6, r1
	add r0, r3, r0
	strb r2, [r0]
	sub r1, r1, #16
	add r0, r6, r1
	add r0, r3, r0
	strb r2, [r0]
_080F4010:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F4018:
	.4byte 0x00000F52
_080F401C:
	.4byte 0x00000FB2
_080F4020:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080F3F28

