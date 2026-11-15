	THUMB_FUNC_START sub_080F49B4
sub_080F49B4: @ 0x080F49B4
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r6, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F49D0
	b _080F4B46
_080F49D0:
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F49DE
	b _080F4B46
_080F49DE:
	ldr r4, _080F4A98  @ =gRam
	ldr r1, _080F4A9C  @ =0x00001770
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F49EC
	b _080F4B46
_080F49EC:
	bl sub_0809E3CC
	cmp r0, #0
	beq _080F49F6
	b _080F4B46
_080F49F6:
	ldr r0, _080F4AA0  @ =0x0000180C
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #223
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080F4AA4  @ =0x000009C6
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #48
	bne _080F4AC4
	ldr r1, _080F4AA8  @ =0x000016D5
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F4A18
	b _080F4B46
_080F4A18:
	add r0, r6, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F4A26
	b _080F4B46
_080F4A26:
	mov r5, #1
	ldr r0, _080F4AAC  @ =gUnknown_03003E70
	strb r5, [r0]
	ldr r1, _080F4AB0  @ =0x00000A4E
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #17
	bne _080F4A48
	ldr r1, _080F4AB4  @ =0x00000547
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080F4A5A
_080F4A48:
	ldr r1, _080F4AB8  @ =0x00000546
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080F4B46
	mov r5, #0
_080F4A5A:
	mov r0, #1
	cmp r0, #0
	beq _080F4B46
	cmp r5, #1
	bne _080F4A7A
	ldr r1, _080F4A98  @ =gRam
	ldr r0, _080F4ABC  @ =0x00001789
	add r2, r1, r0
	mov r0, #0
	strb r0, [r2]
	ldr r0, _080F4AA0  @ =0x0000180C
	add r1, r1, r0
	mov r0, #32
	strb r0, [r1]
	bl sub_0809E550
_080F4A7A:
	cmp r5, #0
	beq _080F4A86
	mov r0, #14
	mov r1, #1
	bl sub_080BEA28
_080F4A86:
	ldr r0, _080F4AC0  @ =gUnknown_081796E0
	add r0, r5, r0
	ldrb r1, [r0]
	mov r2, sp
	add r2, r2, #2
	add r0, r6, #0
	bl sub_080C9564
	b _080F4B46
_080F4A98:
	.4byte gRam
_080F4A9C:
	.4byte 0x00001770
_080F4AA0:
	.4byte 0x0000180C
_080F4AA4:
	.4byte 0x000009C6
_080F4AA8:
	.4byte 0x000016D5
_080F4AAC:
	.4byte gUnknown_03003E70
_080F4AB0:
	.4byte 0x00000A4E
_080F4AB4:
	.4byte 0x00000547
_080F4AB8:
	.4byte 0x00000546
_080F4ABC:
	.4byte 0x00001789
_080F4AC0:
	.4byte gUnknown_081796E0
_080F4AC4:
	ldr r1, _080F4B50  @ =0x000016D5
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F4B46
	add r0, r6, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F4B46
	mov r5, #1
	ldr r0, _080F4B54  @ =gUnknown_03003E70
	strb r5, [r0]
	ldr r1, _080F4B58  @ =0x00000A4E
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #17
	bne _080F4AFC
	ldr r1, _080F4B5C  @ =0x00000547
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080F4B0E
_080F4AFC:
	ldr r1, _080F4B60  @ =0x00000546
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080F4B46
	mov r5, #0
_080F4B0E:
	mov r0, #1
	cmp r0, #0
	beq _080F4B46
	cmp r5, #1
	bne _080F4B2A
	ldr r1, _080F4B64  @ =gRam
	ldr r0, _080F4B68  @ =0x00001789
	add r2, r1, r0
	mov r0, #0
	strb r0, [r2]
	ldr r0, _080F4B6C  @ =0x0000180C
	add r1, r1, r0
	mov r0, #32
	strb r0, [r1]
_080F4B2A:
	cmp r5, #0
	beq _080F4B36
	mov r0, #14
	mov r1, #1
	bl sub_080BEA28
_080F4B36:
	ldr r0, _080F4B70  @ =gUnknown_081796E2
	add r0, r5, r0
	ldrb r1, [r0]
	mov r2, sp
	add r2, r2, #3
	add r0, r6, #0
	bl sub_080C9564
_080F4B46:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F4B50:
	.4byte 0x000016D5
_080F4B54:
	.4byte gUnknown_03003E70
_080F4B58:
	.4byte 0x00000A4E
_080F4B5C:
	.4byte 0x00000547
_080F4B60:
	.4byte 0x00000546
_080F4B64:
	.4byte gRam
_080F4B68:
	.4byte 0x00001789
_080F4B6C:
	.4byte 0x0000180C
_080F4B70:
	.4byte gUnknown_081796E2
	THUMB_FUNC_END sub_080F49B4

