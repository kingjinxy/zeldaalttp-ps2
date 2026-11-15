	THUMB_FUNC_START sub_080C4A70
sub_080C4A70: @ 0x080C4A70
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r1, r1, #24
	lsr r4, r1, #24
	add r1, r4, #0
	ldr r3, _080C4AA8  @ =gRam
	ldr r2, _080C4AAC  @ =0x00000FF2
	add r0, r3, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r2, r0, #0
	cmp r0, #123
	beq _080C4B36
	cmp r0, #9
	beq _080C4B0A
	cmp r0, #146
	beq _080C4B00
	cmp r0, #206
	bgt _080C4ABA
	cmp r0, #203
	bge _080C4AF0
	cmp r0, #19
	beq _080C4AD2
	cmp r0, #19
	bgt _080C4AB0
	cmp r0, #2
	beq _080C4ADC
	b _080C4AF8
_080C4AA8:
	.4byte gRam
_080C4AAC:
	.4byte 0x00000FF2
_080C4AB0:
	cmp r0, #38
	beq _080C4AC8
	cmp r0, #84
	beq _080C4AF0
	b _080C4AF8
_080C4ABA:
	cmp r2, #214
	blt _080C4AF8
	cmp r2, #215
	ble _080C4AF0
	cmp r2, #246
	beq _080C4AE6
	b _080C4AF8
_080C4AC8:
	add r0, r5, #0
	add r1, r4, #0
	bl sub_080C54B8
	b _080C4B56
_080C4AD2:
	add r0, r5, #0
	add r1, r4, #0
	bl sub_080C53E0
	b _080C4B56
_080C4ADC:
	add r0, r5, #0
	add r1, r4, #0
	bl sub_080C5488
	b _080C4B56
_080C4AE6:
	add r0, r5, #0
	add r1, r4, #0
	bl sub_080C5430
	b _080C4B56
_080C4AF0:
	add r0, r5, #0
	bl sub_080C54F8
	b _080C4B56
_080C4AF8:
	add r0, r5, #0
	bl sub_080C5394
	b _080C4B56
_080C4B00:
	add r0, r5, #0
	add r1, r4, #0
	bl sub_080C4B60
	b _080C4B56
_080C4B0A:
	ldr r1, _080C4B20  @ =0x00000F62
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C4B24
	add r0, r5, #0
	add r1, r4, #0
	bl sub_080C5394
	b _080C4B56
_080C4B20:
	.4byte 0x00000F62
_080C4B24:
	add r0, r5, #0
	add r1, r4, #0
	bl sub_080C55B8
	add r0, r5, #0
	add r1, r4, #0
	bl sub_080C555C
	b _080C4B56
_080C4B36:
	ldr r2, _080C4B4C  @ =0x000016EA
	add r0, r3, r2
	ldrb r0, [r0]
	sub r0, r0, #9
	lsl r0, r0, #24
	cmp r0, #0
	bge _080C4B50
	add r0, r5, #0
	bl sub_080C5394
	b _080C4B56
_080C4B4C:
	.4byte 0x000016EA
_080C4B50:
	add r0, r5, #0
	bl sub_080C53D8
_080C4B56:
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C4A70

