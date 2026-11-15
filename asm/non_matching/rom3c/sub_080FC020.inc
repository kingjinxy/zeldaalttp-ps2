	THUMB_FUNC_START sub_080FC020
sub_080FC020: @ 0x080FC020
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080FC0D4  @ =gRam
	ldr r1, _080FC0D8  @ =0x000010C2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FC040
	ldr r2, _080FC0DC  @ =0x00000FC2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FC0CC
_080FC040:
	add r0, r4, #0
	bl sub_080FC198
	add r5, r0, #0
	cmp r5, #0
	bne _080FC0CC
	bl GetRandomInt
	mov r2, #7
	and r2, r2, r0
	ldr r0, _080FC0E0  @ =0x00000F22
	add r1, r6, r0
	add r1, r4, r1
	ldr r0, _080FC0E4  @ =gUnknown_0817A760
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080FC0E8  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r0, _080FC0EC  @ =gUnknown_0817A768
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _080FC0DC  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	ldr r2, _080FC0F0  @ =0x00000F62
	add r0, r6, r2
	add r0, r4, r0
	strb r5, [r0]
	ldr r1, _080FC0F4  @ =0x00000F82
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #2
	bls _080FC09A
	add r0, r4, #0
	bl sub_080FBFD4
	ldrb r0, [r5]
	cmp r0, #2
	bhi _080FC0BE
_080FC09A:
	mov r1, #0
	ldr r2, _080FC0F8  @ =0x000009DA
	add r0, r6, r2
	ldrh r0, [r0]
	cmp r0, #105
	bne _080FC0A8
	mov r1, #1
_080FC0A8:
	cmp r1, #0
	beq _080FC0BE
	ldr r1, _080FC0FC  @ =0x00001022
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #31
	bhi _080FC0BE
	add r0, r4, #0
	bl sub_080FBFD4
_080FC0BE:
	ldr r1, _080FC0D4  @ =gRam
	ldr r2, _080FC100  @ =0x00000F52
	add r1, r1, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080FC0CC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FC0D4:
	.4byte gRam
_080FC0D8:
	.4byte 0x000010C2
_080FC0DC:
	.4byte 0x00000FC2
_080FC0E0:
	.4byte 0x00000F22
_080FC0E4:
	.4byte gUnknown_0817A760
_080FC0E8:
	.4byte 0x00000F12
_080FC0EC:
	.4byte gUnknown_0817A768
_080FC0F0:
	.4byte 0x00000F62
_080FC0F4:
	.4byte 0x00000F82
_080FC0F8:
	.4byte 0x000009DA
_080FC0FC:
	.4byte 0x00001022
_080FC100:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FC020

