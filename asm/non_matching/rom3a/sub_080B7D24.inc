	THUMB_FUNC_START sub_080B7D24
sub_080B7D24: @ 0x080B7D24
	ldr r2, [r1, #8]
	lsl r0, r0, #8
	sub r6, r6, #116
	lsl r0, r0, #12
	mov r2, #48
	lsl r0, r0, #12
	ldr r1, [r1, #8]
	lsl r0, r0, #8
	lsl r3, r6, #10
	lsr r7, r2, #32
	lsl r0, r6, #10
	lsr r7, r2, #32
	lsl r7, r6, #10
	lsr r7, r2, #32
	lsl r5, r6, #10
	lsr r7, r2, #32
	lsl r1, r6, #10
	lsr r7, r2, #32
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsl r1, r1, #16
	lsl r2, r2, #16
	ldr r7, _080B7E14  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r3, r7, r0
	lsr r1, r1, #16
	ldrh r0, [r3]
	add r1, r1, r0
	mov r5, #0
	strh r1, [r3]
	ldr r1, _080B7E18  @ =0x00000964
	add r4, r7, r1
	lsr r2, r2, #16
	ldrh r0, [r4]
	add r2, r2, r0
	strh r2, [r4]
	ldr r1, _080B7E1C  @ =0x00000EE2
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r3]
	strb r1, [r0]
	ldr r2, _080B7E20  @ =0x00000F02
	add r0, r7, r2
	add r0, r6, r0
	ldr r3, _080B7E24  @ =0x00000961
	add r1, r7, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080B7E28  @ =0x00000ED2
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r4]
	strb r1, [r0]
	sub r2, r2, #16
	add r0, r7, r2
	add r0, r6, r0
	add r3, r3, #4
	add r1, r7, r3
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r6, #0
	bl sub_080C1F70
	ldr r0, _080B7E2C  @ =0x00000FB2
	add r3, r7, r0
	add r3, r6, r3
	ldr r2, _080B7E30  @ =0x00000968
	add r1, r7, r2
	ldrb r0, [r1]
	strb r0, [r3]
	ldr r2, _080B7E34  @ =0x00001082
	add r0, r7, r2
	add r0, r6, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080B7E38  @ =0x00000F92
	add r2, r7, r0
	add r2, r6, r2
	ldr r0, _080B7E3C  @ =gUnknown_081702B9
	ldrb r1, [r3]
	add r1, r1, r0
	ldr r3, _080B7E40  @ =0x0000096C
	add r0, r7, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	strb r0, [r2]
	ldr r1, _080B7E44  @ =0x00000D94
	add r0, r7, r1
	add r0, r6, r0
	strb r5, [r0]
	ldr r2, _080B7E48  @ =0x00001122
	add r1, r7, r2
	add r1, r6, r1
	sub r3, r3, #3
	add r0, r7, r3
	ldrb r2, [r0]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	ldr r0, _080B7E4C  @ =0x00001032
	add r1, r7, r0
	add r1, r6, r1
	mov r0, #16
	strb r0, [r1]
	ldr r2, _080B7E50  @ =0x00001142
	add r0, r7, r2
	add r0, r6, r0
	strb r5, [r0]
	ldrb r0, [r1]
	cmp r0, #57
	bne _080B7E58
	ldr r3, _080B7E54  @ =0x00000FF2
	add r0, r7, r3
	add r0, r6, r0
	mov r1, #65
	b _080B7E60
	.byte 0x00
	.byte 0x00
_080B7E14:
	.4byte gRam
_080B7E18:
	.4byte 0x00000964
_080B7E1C:
	.4byte 0x00000EE2
_080B7E20:
	.4byte 0x00000F02
_080B7E24:
	.4byte 0x00000961
_080B7E28:
	.4byte 0x00000ED2
_080B7E2C:
	.4byte 0x00000FB2
_080B7E30:
	.4byte 0x00000968
_080B7E34:
	.4byte 0x00001082
_080B7E38:
	.4byte 0x00000F92
_080B7E3C:
	.4byte gUnknown_081702B9
_080B7E40:
	.4byte 0x0000096C
_080B7E44:
	.4byte 0x00000D94
_080B7E48:
	.4byte 0x00001122
_080B7E4C:
	.4byte 0x00001032
_080B7E50:
	.4byte 0x00001142
_080B7E54:
	.4byte 0x00000FF2
_080B7E58:
	ldr r1, _080B7E8C  @ =0x00000FF2
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #67
_080B7E60:
	strb r1, [r0]
	ldr r0, _080B7E90  @ =gRam
	ldr r2, _080B7E94  @ =0x00001012
	add r0, r0, r2
	add r0, r6, r0
	mov r1, #7
	strb r1, [r0]
	ldr r2, _080B7E98  @ =gUnknown_03003E74
	ldr r1, _080B7E9C  @ =gUnknown_081702BE
	lsl r0, r6, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldr r3, _080B7EA0  @ =0xFFFFF800
	add r0, r0, r3
	asr r0, r0, #2
	strh r0, [r2]
	add r0, r6, #0
	bl sub_080E26E4
	pop {r4-r7}
	pop {r0}
	bx r0
_080B7E8C:
	.4byte 0x00000FF2
_080B7E90:
	.4byte gRam
_080B7E94:
	.4byte 0x00001012
_080B7E98:
	.4byte gUnknown_03003E74
_080B7E9C:
	.4byte gUnknown_081702BE
_080B7EA0:
	.4byte 0xFFFFF800
	THUMB_FUNC_END sub_080B7D24

