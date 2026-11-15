	THUMB_FUNC_START sub_080D5F24
sub_080D5F24: @ 0x080D5F24
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080D5FA4  @ =gRam
	ldr r1, _080D5FA8  @ =0x00001172
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C5044
	ldr r7, _080D5FAC  @ =0x00000FC2
	add r0, r6, r7
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080D5FCC
	cmp r0, #48
	bne _080D5F52
	add r0, r4, #0
	bl sub_080D647C
_080D5F52:
	ldr r0, _080D5FB0  @ =0x00000F92
	add r2, r6, r0
	add r2, r4, r2
	ldr r3, _080D5FB4  @ =gUnknown_081751E8
	ldrb r1, [r5]
	lsr r1, r1, #2
	mov r0, #252
	and r1, r1, r0
	ldr r7, _080D5FB8  @ =0x00000FB2
	add r0, r6, r7
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	add r1, r1, r3
	ldrb r0, [r1]
	strb r0, [r2]
	ldrb r2, [r5]
	lsr r2, r2, #2
	ldr r0, _080D5FBC  @ =0x00000F72
	add r1, r6, r0
	add r1, r4, r1
	ldr r0, _080D5FC0  @ =gUnknown_08175208
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	sub r7, r7, #48
	add r1, r6, r7
	add r1, r4, r1
	ldr r0, _080D5FC4  @ =gUnknown_08175228
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _080D5FC8  @ =0x00001032
	add r1, r6, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r1]
	b _080D5FDC
	.byte 0x00
	.byte 0x00
_080D5FA4:
	.4byte gRam
_080D5FA8:
	.4byte 0x00001172
_080D5FAC:
	.4byte 0x00000FC2
_080D5FB0:
	.4byte 0x00000F92
_080D5FB4:
	.4byte gUnknown_081751E8
_080D5FB8:
	.4byte 0x00000FB2
_080D5FBC:
	.4byte 0x00000F72
_080D5FC0:
	.4byte gUnknown_08175208
_080D5FC4:
	.4byte gUnknown_08175228
_080D5FC8:
	.4byte 0x00001032
_080D5FCC:
	ldr r1, _080D5FE4  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #64
	strb r0, [r5]
_080D5FDC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D5FE4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D5F24

