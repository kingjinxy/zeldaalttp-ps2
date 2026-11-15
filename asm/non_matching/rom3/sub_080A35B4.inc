	THUMB_FUNC_START sub_080A35B4
sub_080A35B4: @ 0x080A35B4
	push {r4-r6,lr}
	ldr r2, _080A35EC  @ =gRam
	ldr r1, _080A35F0  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A366A
	ldr r1, _080A35F4  @ =0x00001783
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A35D2
	b _080A36D4
_080A35D2:
	sub r1, r1, #87
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A36D4
	sub r1, r1, #52
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A35F8
	mov r0, #0
	b _080A35FC
	.byte 0x00
	.byte 0x00
_080A35EC:
	.4byte gRam
_080A35F0:
	.4byte 0x000016E8
_080A35F4:
	.4byte 0x00001783
_080A35F8:
	bl sub_080A1ADC
_080A35FC:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A36D4
	mov r1, #4
	ldr r5, _080A36DC  @ =gRam
	ldr r0, _080A36E0  @ =0x00000E15
	add r2, r5, r0
_080A360A:
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #44
	beq _080A3628
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080A360A
	mov r0, #4
	bl sub_080A3B64
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A36D4
_080A3628:
	mov r2, #191
	lsl r2, r2, #5
	add r1, r5, r2
	mov r4, #0
	mov r0, #1
	strb r0, [r1]
	mov r1, #44
	bl sub_0811D994
	mov r0, #16
	mov r1, #1
	bl sub_080BEA28
	ldr r0, _080A36E4  @ =gUnknown_0816909B
	ldrb r1, [r0]
	ldr r2, _080A36E8  @ =0x000016EB
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080A36EC  @ =0x000016D4
	add r0, r5, r1
	strb r4, [r0]
	add r2, r2, #158
	add r0, r5, r2
	strb r4, [r0]
	add r1, r1, #182
	add r0, r5, r1
	strb r4, [r0]
	ldr r0, _080A36F0  @ =0x0000180C
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #8
	orr r0, r0, r1
	strb r0, [r2]
_080A366A:
	bl sub_080A38AC
	ldr r4, _080A36DC  @ =gRam
	ldr r1, _080A36F4  @ =0x00001727
	add r2, r4, r1
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r6, #0
	strb r0, [r2]
	ldr r2, _080A36E8  @ =0x000016EB
	add r5, r4, r2
	ldrb r0, [r5]
	sub r0, r0, #1
	strb r0, [r5]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080A36D4
	ldr r0, _080A36F8  @ =0x00001789
	add r3, r4, r0
	ldrb r1, [r3]
	add r1, r1, #1
	strb r1, [r3]
	ldr r2, _080A36E4  @ =gUnknown_0816909B
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r5]
	lsl r1, r1, #24
	lsr r1, r1, #24
	cmp r1, #3
	bne _080A36D4
	ldr r1, _080A36FC  @ =0x00001719
	add r0, r4, r1
	strb r6, [r0]
	strb r6, [r3]
	strb r6, [r5]
	mov r2, #191
	lsl r2, r2, #5
	add r0, r4, r2
	strb r6, [r0]
	ldr r0, _080A3700  @ =0x000016E8
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080A36F0  @ =0x0000180C
	add r2, r4, r1
	ldrb r1, [r2]
	mov r0, #247
	and r0, r0, r1
	strb r0, [r2]
_080A36D4:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A36DC:
	.4byte gRam
_080A36E0:
	.4byte 0x00000E15
_080A36E4:
	.4byte gUnknown_0816909B
_080A36E8:
	.4byte 0x000016EB
_080A36EC:
	.4byte 0x000016D4
_080A36F0:
	.4byte 0x0000180C
_080A36F4:
	.4byte 0x00001727
_080A36F8:
	.4byte 0x00001789
_080A36FC:
	.4byte 0x00001719
_080A3700:
	.4byte 0x000016E8
	THUMB_FUNC_END sub_080A35B4

