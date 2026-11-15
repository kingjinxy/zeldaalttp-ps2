	THUMB_FUNC_START sub_080D2EE8
sub_080D2EE8: @ 0x080D2EE8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl Sprite3_Move
	ldr r3, _080D2F48  @ =gRam
	ldr r0, _080D2F4C  @ =0x00000F92
	add r2, r3, r0
	add r2, r4, r2
	ldr r1, _080D2F50  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080D2F54  @ =0x00000FC2
	add r0, r3, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080D2F8A
	sub r1, r1, #96
	add r0, r3, r1
	add r0, r4, r0
	ldrb r2, [r0]
	add r1, r2, #1
	strb r1, [r0]
	ldr r0, _080D2F58  @ =gUnknown_08174D54
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r5]
	ldr r0, _080D2F5C  @ =gUnknown_08174D56
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D2F64
	ldr r0, _080D2F60  @ =0x00000F52
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	b _080D2F88
	.byte 0x00
	.byte 0x00
_080D2F48:
	.4byte gRam
_080D2F4C:
	.4byte 0x00000F92
_080D2F50:
	.4byte 0x00000996
_080D2F54:
	.4byte 0x00000FC2
_080D2F58:
	.4byte gUnknown_08174D54
_080D2F5C:
	.4byte gUnknown_08174D56
_080D2F60:
	.4byte 0x00000F52
_080D2F64:
	ldr r4, _080D2F90  @ =0x00000FB2
	add r0, r3, r4
	add r0, r6, r0
	strb r1, [r0]
	ldr r0, _080D2F94  @ =0x00000F22
	add r1, r3, r0
	add r1, r6, r1
	ldr r0, _080D2F98  @ =gUnknown_08174D59
	ldrb r2, [r2]
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	sub r4, r4, #160
	add r1, r3, r4
	add r1, r6, r1
	ldr r0, _080D2F9C  @ =gUnknown_08174D5D
	add r2, r2, r0
	ldrb r0, [r2]
_080D2F88:
	strb r0, [r1]
_080D2F8A:
	pop {r4-r6}
	pop {r0}
	bx r0
_080D2F90:
	.4byte 0x00000FB2
_080D2F94:
	.4byte 0x00000F22
_080D2F98:
	.4byte gUnknown_08174D59
_080D2F9C:
	.4byte gUnknown_08174D5D
	THUMB_FUNC_END sub_080D2EE8

