	THUMB_FUNC_START sub_080B0EB8
sub_080B0EB8: @ 0x080B0EB8
	push {r4-r6,lr}
	ldr r5, _080B0ED0  @ =gRam
	ldr r0, _080B0ED4  @ =0x00000A02
	add r1, r5, r0
	ldrb r0, [r1]
	add r4, r0, #0
	cmp r4, #0
	beq _080B0ED8
	sub r0, r0, #1
	strb r0, [r1]
	b _080B0F92
	.byte 0x00
	.byte 0x00
_080B0ED0:
	.4byte gRam
_080B0ED4:
	.4byte 0x00000A02
_080B0ED8:
	bl sub_08131BC4
	ldr r1, _080B0F38  @ =gUnknown_02000C00
	ldr r0, _080B0F3C  @ =gUnknown_02000C40
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _080B0F40  @ =0x00000CFA
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #255
	bne _080B0F92
	ldr r2, _080B0F44  @ =0x00000D02
	add r0, r5, r2
	mov r1, #0
	strh r4, [r0]
	ldr r2, _080B0F48  @ =0x00000BC5
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _080B0F4C  @ =0x000009CF
	add r1, r5, r0
	mov r0, #3
	strb r0, [r1]
	mov r2, #0
	ldr r0, _080B0F50  @ =gBottle1
	ldrb r0, [r0]
	cmp r0, #6
	beq _080B0F64
	mov r2, #1
	ldr r0, _080B0F54  @ =gBottle2
	ldrb r0, [r0]
	cmp r0, #6
	beq _080B0F64
	mov r2, #2
	ldr r0, _080B0F58  @ =gBottle3
	ldrb r0, [r0]
	cmp r0, #6
	beq _080B0F64
	mov r2, #3
	ldr r0, _080B0F5C  @ =gBottle4
	ldrb r0, [r0]
	cmp r0, #6
	beq _080B0F64
	ldr r2, _080B0F60  @ =0x000009AD
	add r1, r5, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080B0F92
_080B0F38:
	.4byte gUnknown_02000C00
_080B0F3C:
	.4byte gUnknown_02000C40
_080B0F40:
	.4byte 0x00000CFA
_080B0F44:
	.4byte 0x00000D02
_080B0F48:
	.4byte 0x00000BC5
_080B0F4C:
	.4byte 0x000009CF
_080B0F50:
	.4byte gBottle1
_080B0F54:
	.4byte gBottle2
_080B0F58:
	.4byte gBottle3
_080B0F5C:
	.4byte gBottle4
_080B0F60:
	.4byte 0x000009AD
_080B0F64:
	ldr r1, _080B0F98  @ =gUnknown_0817276C
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r1, [r0]
	mov r0, #2
	strb r0, [r1]
	ldr r4, _080B0F9C  @ =gRam
	ldr r0, _080B0FA0  @ =0x00000A02
	add r1, r4, r0
	mov r6, #0
	mov r0, #12
	strb r0, [r1]
	ldr r1, _080B0FA4  @ =0x00000CA2
	add r5, r4, r1
	mov r0, #15
	strh r0, [r5]
	bl sub_0812FA28
	strh r6, [r5]
	ldr r2, _080B0FA8  @ =0x000009AD
	add r4, r4, r2
	mov r0, #10
	strb r0, [r4]
_080B0F92:
	pop {r4-r6}
	pop {r0}
	bx r0
_080B0F98:
	.4byte gUnknown_0817276C
_080B0F9C:
	.4byte gRam
_080B0FA0:
	.4byte 0x00000A02
_080B0FA4:
	.4byte 0x00000CA2
_080B0FA8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080B0EB8

