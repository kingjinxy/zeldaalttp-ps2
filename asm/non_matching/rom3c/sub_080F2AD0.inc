	THUMB_FUNC_START sub_080F2AD0
sub_080F2AD0: @ 0x080F2AD0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r8, r5
	ldr r6, _080F2BEC  @ =gRam
	ldr r0, _080F2BF0  @ =0x00000FB2
	add r4, r6, r0
	add r4, r5, r4
	ldr r1, _080F2BF4  @ =0x00000F22
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsr r0, r0, #7
	strb r0, [r4]
	ldr r0, _080F2BF8  @ =0x00001122
	add r2, r6, r0
	add r2, r5, r2
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	ldr r3, _080F2BFC  @ =gUnknown_0817926C
	ldrb r0, [r4]
	add r0, r0, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	ldr r1, _080F2C00  @ =0x00001062
	add r0, r6, r1
	add r7, r5, r0
	ldrb r0, [r7]
	cmp r0, #0
	bne _080F2B22
	ldr r4, _080F2C04  @ =0x00000D94
	add r0, r6, r4
	add r0, r5, r0
	ldrb r1, [r0]
	mov r2, #48
	orr r1, r1, r2
	strb r1, [r0]
_080F2B22:
	add r0, r5, #0
	bl sub_080F2D7C
	ldr r1, _080F2C08  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _080F2C0C  @ =0x00001012
	add r4, r6, r0
	add r4, r5, r4
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C6240
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F2C46
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080F2C46
	ldrb r0, [r7]
	cmp r0, #0
	bne _080F2C30
	add r0, r5, #0
	bl sub_080C5044
	ldr r4, _080F2C10  @ =0x00001052
	add r1, r6, r4
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r5, #0
	bl Sprite3_Move
	ldr r1, _080F2C14  @ =0x00000996
	add r0, r6, r1
	ldrb r1, [r0]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080F2BC0
	add r4, r4, #80
	add r0, r6, r4
	add r3, r5, r0
	ldrb r0, [r3]
	and r2, r2, r0
	ldr r0, _080F2C18  @ =0x00001152
	add r1, r6, r0
	add r1, r5, r1
	ldr r0, _080F2C1C  @ =gUnknown_08179268
	add r0, r2, r0
	ldrb r0, [r0]
	ldrb r4, [r1]
	add r0, r0, r4
	strb r0, [r1]
	ldr r1, _080F2C20  @ =gUnknown_0817926E
	add r2, r2, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r2, [r2]
	cmp r0, r2
	bne _080F2BC0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_080F2BC0:
	mov r0, r8
	bl sub_080C2C4C
	ldr r2, _080F2BEC  @ =gRam
	ldr r1, _080F2C24  @ =0x00000F12
	add r0, r2, r1
	add r0, r0, r8
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080F2C28  @ =gUnknown_08179270
	ldr r4, _080F2C2C  @ =0x00000F52
	add r2, r2, r4
	add r2, r2, r8
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	mov r0, r8
	bl _call_via_r1
	b _080F2C46
	.byte 0x00
	.byte 0x00
_080F2BEC:
	.4byte gRam
_080F2BF0:
	.4byte 0x00000FB2
_080F2BF4:
	.4byte 0x00000F22
_080F2BF8:
	.4byte 0x00001122
_080F2BFC:
	.4byte gUnknown_0817926C
_080F2C00:
	.4byte 0x00001062
_080F2C04:
	.4byte 0x00000D94
_080F2C08:
	.4byte gUnknown_03003E74
_080F2C0C:
	.4byte 0x00001012
_080F2C10:
	.4byte 0x00001052
_080F2C14:
	.4byte 0x00000996
_080F2C18:
	.4byte 0x00001152
_080F2C1C:
	.4byte gUnknown_08179268
_080F2C20:
	.4byte gUnknown_0817926E
_080F2C24:
	.4byte 0x00000F12
_080F2C28:
	.4byte gUnknown_08179270
_080F2C2C:
	.4byte 0x00000F52
_080F2C30:
	ldr r0, _080F2C50  @ =0x00001142
	add r1, r6, r0
	add r1, r1, r8
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #12
	bne _080F2C46
	strb r2, [r7]
_080F2C46:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080F2C50:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080F2AD0

