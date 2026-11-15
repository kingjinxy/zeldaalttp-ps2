	THUMB_FUNC_START sub_080F3E24
sub_080F3E24: @ 0x080F3E24
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F3E7E
	ldr r2, _080F3E84  @ =gRam
	ldr r0, _080F3E88  @ =0x00000F52
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F3E8C  @ =0x00001770
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F3E90  @ =0x00000F22
	add r1, r2, r0
	add r1, r5, r1
	ldr r4, _080F3E94  @ =gUnknown_08179570
	ldr r0, _080F3E98  @ =0x00001082
	add r3, r2, r0
	add r3, r5, r3
	ldrb r0, [r3]
	add r0, r0, r4
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F3E9C  @ =0x00000F12
	add r1, r2, r0
	add r1, r5, r1
	ldr r4, _080F3EA0  @ =gUnknown_08179574
	ldrb r0, [r3]
	add r0, r0, r4
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F3EA4  @ =0x00000FC2
	add r2, r2, r0
	add r2, r5, r2
	mov r0, #16
	strb r0, [r2]
_080F3E7E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080F3E84:
	.4byte gRam
_080F3E88:
	.4byte 0x00000F52
_080F3E8C:
	.4byte 0x00001770
_080F3E90:
	.4byte 0x00000F22
_080F3E94:
	.4byte gUnknown_08179570
_080F3E98:
	.4byte 0x00001082
_080F3E9C:
	.4byte 0x00000F12
_080F3EA0:
	.4byte gUnknown_08179574
_080F3EA4:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080F3E24

