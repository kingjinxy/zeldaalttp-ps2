	THUMB_FUNC_START sub_08108C3C
sub_08108C3C: @ 0x08108C3C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r6, _08108CF0  @ =gRam
	ldr r1, _08108CF4  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	add r7, r6, #0
	cmp r0, #0
	beq _08108C5A
	b _08108E34
_08108C5A:
	ldr r2, _08108CF8  @ =0x000010E2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08108C7C
	ldr r3, _08108CFC  @ =0x00000F92
	add r1, r6, r3
	add r1, r4, r1
	ldr r2, _08108D00  @ =gUnknown_0817C246
	add r3, r3, #32
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_08108C7C:
	ldr r1, _08108D04  @ =0x00000B6D
	add r0, r6, r1
	ldrb r1, [r0]
	cmp r1, #2
	bne _08108C9C
	ldr r2, _08108D08  @ =0x00000E65
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r1, r0
	beq _08108C9C
	ldr r3, _08108D0C  @ =0x00000FD2
	add r0, r6, r3
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
_08108C9C:
	add r2, r7, #0
	ldr r1, _08108D08  @ =0x00000E65
	add r0, r2, r1
	add r0, r5, r0
	ldr r3, _08108D04  @ =0x00000B6D
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08108D10  @ =0x00001142
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08108CC6
	ldr r3, _08108D14  @ =0x00000D94
	add r0, r2, r3
	add r0, r5, r0
	ldrb r1, [r0]
	mov r2, #48
	orr r1, r1, r2
	strb r1, [r0]
_08108CC6:
	add r0, r5, #0
	bl sub_08109BB4
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _08108CDA
	b _08108E6E
_08108CDA:
	ldr r1, _08108D18  @ =0x00000FE2
	add r0, r7, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08108D24
	cmp r0, #16
	bne _08108D1C
	bl sub_0808A680
	b _08108D24
_08108CF0:
	.4byte gRam
_08108CF4:
	.4byte 0x00000F52
_08108CF8:
	.4byte 0x000010E2
_08108CFC:
	.4byte 0x00000F92
_08108D00:
	.4byte gUnknown_0817C246
_08108D04:
	.4byte 0x00000B6D
_08108D08:
	.4byte 0x00000E65
_08108D0C:
	.4byte 0x00000FD2
_08108D10:
	.4byte 0x00001142
_08108D14:
	.4byte 0x00000D94
_08108D18:
	.4byte 0x00000FE2
_08108D1C:
	cmp r0, #1
	bne _08108D24
	bl sub_0808A6A0
_08108D24:
	ldr r4, _08108D58  @ =gRam
	ldr r2, _08108D5C  @ =0x00000FD2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08108E18
	add r0, r5, #0
	bl sub_080C36D8
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _08108D60  @ =0x0000097D
	add r0, r4, r3
	ldrb r0, [r0]
	add r0, r0, #32
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #63
	bhi _08108D68
	ldr r1, _08108D64  @ =0x00001082
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #1
	b _08108D74
	.byte 0x00
	.byte 0x00
_08108D58:
	.4byte gRam
_08108D5C:
	.4byte 0x00000FD2
_08108D60:
	.4byte 0x0000097D
_08108D64:
	.4byte 0x00001082
_08108D68:
	ldr r3, _08108DCC  @ =0x00001082
	add r0, r4, r3
	add r0, r5, r0
	ldr r1, _08108DD0  @ =gUnknown_0817C244
	add r1, r2, r1
	ldrb r1, [r1]
_08108D74:
	strb r1, [r0]
	ldr r4, _08108DD4  @ =gRam
	ldr r1, _08108DD8  @ =0x000010E2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _08108DF0
	ldr r2, _08108DDC  @ =0x00001172
	add r0, r4, r2
	add r0, r5, r0
	ldr r3, _08108DE0  @ =0x00001770
	add r1, r4, r3
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _08108DA8
	ldr r1, _08108DE4  @ =0x00000B6D
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #2
	bne _08108DA8
	add r0, r5, #0
	bl sub_080C5044
_08108DA8:
	ldr r2, _08108DD4  @ =gRam
	ldr r3, _08108DDC  @ =0x00001172
	add r0, r2, r3
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _08108DE8  @ =gUnknown_0817C248
	ldr r0, _08108DEC  @ =0x00000F52
	add r2, r2, r0
	add r2, r5, r2
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	b _08108E6E
_08108DCC:
	.4byte 0x00001082
_08108DD0:
	.4byte gUnknown_0817C244
_08108DD4:
	.4byte gRam
_08108DD8:
	.4byte 0x000010E2
_08108DDC:
	.4byte 0x00001172
_08108DE0:
	.4byte 0x00001770
_08108DE4:
	.4byte 0x00000B6D
_08108DE8:
	.4byte gUnknown_0817C248
_08108DEC:
	.4byte 0x00000F52
_08108DF0:
	ldr r2, _08108E10  @ =0x00001172
	add r0, r4, r2
	add r0, r5, r0
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _08108E6E
	ldr r3, _08108E14  @ =0x00000FC2
	add r0, r4, r3
	add r0, r5, r0
	strb r1, [r0]
	b _08108E6E
_08108E10:
	.4byte 0x00001172
_08108E14:
	.4byte 0x00000FC2
_08108E18:
	ldr r1, _08108E30  @ =0x00000F92
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #15
	strb r1, [r0]
	add r0, r5, #0
	bl sub_0810A4B8
	add r0, r5, #0
	bl sub_080C5044
	b _08108E6E
_08108E30:
	.4byte 0x00000F92
_08108E34:
	ldr r2, _08108E74  @ =0x000010D2
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08108E6E
	ldr r3, _08108E78  @ =0x00000FC2
	add r0, r6, r3
	add r1, r4, r0
	ldrb r2, [r1]
	cmp r2, #0
	bne _08108E5E
	sub r3, r3, #32
	add r0, r6, r3
	add r0, r4, r0
	strb r2, [r0]
_08108E5E:
	ldrb r1, [r1]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08108E6E
	add r0, r5, #0
	bl sub_08109BB4
_08108E6E:
	pop {r4-r7}
	pop {r0}
	bx r0
_08108E74:
	.4byte 0x000010D2
_08108E78:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_08108C3C

