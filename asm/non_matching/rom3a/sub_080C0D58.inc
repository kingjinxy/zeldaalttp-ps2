	THUMB_FUNC_START sub_080C0D58
sub_080C0D58: @ 0x080C0D58
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	ldr r5, _080C0E04  @ =gRam
	ldr r0, _080C0E08  @ =0x00000971
	add r7, r5, r0
	mov r0, #0
	strb r0, [r7]
	ldr r1, _080C0E0C  @ =0x00000E3D
	add r0, r5, r1
	add r0, r4, r0
	ldrb r6, [r0]
	ldr r2, _080C0E10  @ =0x00000E15
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #12
	bne _080C0D88
	mov r0, #1
	neg r0, r0
	strb r0, [r7]
	mov r0, #8
	orr r6, r6, r0
_080C0D88:
	ldr r3, _080C0E14  @ =0x00000DCF
	add r0, r5, r3
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r0, _080C0E18  @ =gUnknown_08171D17
	add r0, r6, r0
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r1, _080C0E1C  @ =0x00000DE3
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r3, #0
	ldrsb r3, [r7, r3]
	add r0, r0, r3
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, #30
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r0, _080C0E20  @ =gUnknown_08171D2F
	add r0, r6, r0
	ldrb r0, [r0]
	add r1, r1, r0
	mov r12, r1
	ldr r1, _080C0E24  @ =0x00000DD9
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r3
	lsl r0, r0, #8
	mov r3, r12
	add r1, r3, r0
	mov r3, #150
	lsl r3, r3, #4
	add r0, r5, r3
	strb r2, [r0]
	lsr r2, r2, #8
	add r3, r3, #16
	add r0, r5, r3
	strb r2, [r0]
	ldr r2, _080C0E28  @ =0x00000961
	add r0, r5, r2
	strb r1, [r0]
	lsr r1, r1, #8
	strb r1, [r7]
	ldr r0, _080C0E2C  @ =gUnknown_08171D23
	add r0, r6, r0
	ldrb r1, [r0]
	sub r3, r3, #12
	add r0, r5, r3
	strb r1, [r0]
	ldr r0, _080C0E30  @ =gUnknown_08171D3B
	add r0, r6, r0
	ldrb r1, [r0]
	add r2, r2, #4
	add r0, r5, r2
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
_080C0E04:
	.4byte gRam
_080C0E08:
	.4byte 0x00000971
_080C0E0C:
	.4byte 0x00000E3D
_080C0E10:
	.4byte 0x00000E15
_080C0E14:
	.4byte 0x00000DCF
_080C0E18:
	.4byte gUnknown_08171D17
_080C0E1C:
	.4byte 0x00000DE3
_080C0E20:
	.4byte gUnknown_08171D2F
_080C0E24:
	.4byte 0x00000DD9
_080C0E28:
	.4byte 0x00000961
_080C0E2C:
	.4byte gUnknown_08171D23
_080C0E30:
	.4byte gUnknown_08171D3B
	THUMB_FUNC_END sub_080C0D58

