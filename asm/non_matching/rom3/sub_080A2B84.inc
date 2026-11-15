	THUMB_FUNC_START sub_080A2B84
sub_080A2B84: @ 0x080A2B84
	push {r4,r5,lr}
	ldr r2, _080A2BB0  @ =gRam
	ldr r1, _080A2BB4  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A2C22
	ldr r3, _080A2BB8  @ =0x0000172C
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A2BA2
	b _080A2CB0
_080A2BA2:
	ldr r1, _080A2BBC  @ =0x000016F8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A2BC0
	mov r0, #0
	b _080A2BC4
_080A2BB0:
	.4byte gRam
_080A2BB4:
	.4byte 0x000016E8
_080A2BB8:
	.4byte 0x0000172C
_080A2BBC:
	.4byte 0x000016F8
_080A2BC0:
	bl sub_080A1ADC
_080A2BC4:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A2CB0
	ldr r0, _080A2BDC  @ =gMagicPowder
	ldrb r0, [r0]
	cmp r0, #2
	beq _080A2BE0
	mov r0, #64
	bl sub_0809E43C
	b _080A2C94
	.byte 0x00
	.byte 0x00
_080A2BDC:
	.4byte gMagicPowder
_080A2BE0:
	mov r0, #2
	bl sub_080A3B64
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A2C94
	mov r0, #4
	mov r1, #1
	bl sub_080BEA28
	ldr r1, _080A2CB8  @ =gRam
	ldr r0, _080A2CBC  @ =gUnknown_081690E5
	ldrb r2, [r0]
	ldr r3, _080A2CC0  @ =0x000016EB
	add r0, r1, r3
	mov r3, #0
	strb r2, [r0]
	ldr r2, _080A2CC4  @ =0x00001789
	add r0, r1, r2
	strb r3, [r0]
	sub r2, r2, #181
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _080A2CC8  @ =0x00001727
	add r3, r1, r0
	ldrb r2, [r3]
	mov r0, #240
	and r0, r0, r2
	strb r0, [r3]
	ldr r2, _080A2CCC  @ =0x0000178A
	add r1, r1, r2
	mov r0, #64
	strb r0, [r1]
_080A2C22:
	ldr r4, _080A2CB8  @ =gRam
	ldr r3, _080A2CD0  @ =0x000016D6
	add r0, r4, r3
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080A2CD4  @ =0x000016D7
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #81
	add r0, r4, r3
	strb r1, [r0]
	sub r2, r2, #7
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #86
	add r0, r4, r3
	strb r1, [r0]
	add r2, r2, #91
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080A2CC0  @ =0x000016EB
	add r3, r4, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080A2CB0
	ldr r1, _080A2CC4  @ =0x00001789
	add r5, r4, r1
	ldrb r1, [r5]
	add r1, r1, #1
	strb r1, [r5]
	ldr r2, _080A2CBC  @ =gUnknown_081690E5
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r3]
	lsl r1, r1, #24
	lsr r1, r1, #24
	cmp r1, #4
	bne _080A2C7E
	mov r0, #0
	mov r1, #26
	bl sub_08117E50
_080A2C7E:
	ldrb r0, [r5]
	cmp r0, #9
	bne _080A2CB0
	ldr r2, _080A2CD8  @ =0x000009AD
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A2C94
	mov r0, #1
	bl sub_0809EEB4
_080A2C94:
	ldr r1, _080A2CB8  @ =gRam
	ldr r3, _080A2CCC  @ =0x0000178A
	add r0, r1, r3
	mov r2, #0
	strb r2, [r0]
	sub r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _080A2CDC  @ =0x000016E8
	add r1, r1, r0
	ldrb r2, [r1]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r1]
_080A2CB0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A2CB8:
	.4byte gRam
_080A2CBC:
	.4byte gUnknown_081690E5
_080A2CC0:
	.4byte 0x000016EB
_080A2CC4:
	.4byte 0x00001789
_080A2CC8:
	.4byte 0x00001727
_080A2CCC:
	.4byte 0x0000178A
_080A2CD0:
	.4byte 0x000016D6
_080A2CD4:
	.4byte 0x000016D7
_080A2CD8:
	.4byte 0x000009AD
_080A2CDC:
	.4byte 0x000016E8
	THUMB_FUNC_END sub_080A2B84

