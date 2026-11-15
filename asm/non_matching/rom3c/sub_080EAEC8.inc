	THUMB_FUNC_START sub_080EAEC8
sub_080EAEC8: @ 0x080EAEC8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080EAF30  @ =gRam
	ldr r1, _080EAF34  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080EAF28
	bl GetRandomInt
	ldr r2, _080EAF38  @ =gUnknown_08177D80
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r5]
	ldr r0, _080EAF3C  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EAF40  @ =0x00000FB2
	add r3, r6, r1
	add r3, r4, r3
	add r1, r1, #208
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r0, _080EAF44  @ =0x00000F22
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080EAF48  @ =gUnknown_08177D84
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EAF4C  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080EAF50  @ =gUnknown_08177D88
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080EAF28:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EAF30:
	.4byte gRam
_080EAF34:
	.4byte 0x00000FC2
_080EAF38:
	.4byte gUnknown_08177D80
_080EAF3C:
	.4byte 0x00000F52
_080EAF40:
	.4byte 0x00000FB2
_080EAF44:
	.4byte 0x00000F22
_080EAF48:
	.4byte gUnknown_08177D84
_080EAF4C:
	.4byte 0x00000F12
_080EAF50:
	.4byte gUnknown_08177D88
	THUMB_FUNC_END sub_080EAEC8

