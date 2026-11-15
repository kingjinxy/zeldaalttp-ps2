	THUMB_FUNC_START sub_080A2384
sub_080A2384: @ 0x080A2384
	push {r4-r6,lr}
	ldr r2, _080A23B0  @ =gRam
	ldr r1, _080A23B4  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A241E
	ldr r3, _080A23B8  @ =0x0000172C
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A23A2
	b _080A24A8
_080A23A2:
	ldr r6, _080A23BC  @ =0x000016F8
	add r0, r2, r6
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A23C0
	mov r0, #0
	b _080A23C4
_080A23B0:
	.4byte gRam
_080A23B4:
	.4byte 0x000016E8
_080A23B8:
	.4byte 0x0000172C
_080A23BC:
	.4byte 0x000016F8
_080A23C0:
	bl sub_080A1ADC
_080A23C4:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A24A8
	ldr r1, _080A24B0  @ =gUnknown_081690C6
	ldr r2, _080A24B4  @ =gRam
	ldr r3, _080A24B8  @ =0x000016D5
	add r0, r2, r3
	ldrb r0, [r0]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r1, _080A24BC  @ =gUnknown_0816909E
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r6, _080A24C0  @ =0x00001789
	add r0, r2, r6
	mov r4, #0
	strb r1, [r0]
	ldr r0, _080A24C4  @ =0x000016EB
	add r1, r2, r0
	mov r0, #3
	strb r0, [r1]
	ldr r1, _080A24C8  @ =0x00001796
	add r0, r2, r1
	strb r4, [r0]
	ldr r3, _080A24CC  @ =0x0000180C
	add r1, r2, r3
	mov r0, #16
	strb r0, [r1]
	sub r6, r6, #132
	add r3, r2, r6
	ldrb r1, [r3]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r3]
	ldr r0, _080A24D0  @ =0x000016D4
	add r2, r2, r0
	strb r4, [r2]
	mov r0, #23
	bl sub_0809E43C
	mov r0, #13
	mov r1, #1
	bl sub_080BEA28
_080A241E:
	bl sub_080A38AC
	ldr r4, _080A24B4  @ =gRam
	ldr r1, _080A24D4  @ =0x00001727
	add r2, r4, r1
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r5, #0
	strb r0, [r2]
	ldr r3, _080A24C4  @ =0x000016EB
	add r1, r4, r3
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080A24A8
	ldr r6, _080A24C8  @ =0x00001796
	add r3, r4, r6
	ldrb r2, [r3]
	add r2, r2, #1
	strb r2, [r3]
	mov r0, #3
	strb r0, [r1]
	ldr r1, _080A24B0  @ =gUnknown_081690C6
	sub r6, r6, #193
	add r0, r4, r6
	ldrb r0, [r0]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	add r0, r0, r2
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080A24BC  @ =gUnknown_0816909E
	add r0, r0, r1
	ldrb r0, [r0]
	add r6, r6, #180
	add r1, r4, r6
	strb r0, [r1]
	lsl r2, r2, #24
	lsr r2, r2, #24
	cmp r2, #10
	bne _080A24A8
	strb r5, [r3]
	strb r5, [r1]
	ldr r0, _080A24D8  @ =0x000016E8
	add r2, r4, r0
	ldrb r1, [r2]
	mov r3, #128
	add r0, r3, #0
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080A24CC  @ =0x0000180C
	add r0, r4, r1
	strb r5, [r0]
	sub r6, r6, #132
	add r2, r4, r6
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080A24DC  @ =0x000016F6
	add r0, r4, r1
	strb r3, [r0]
	sub r6, r6, #14
	add r0, r4, r6
	strb r3, [r0]
_080A24A8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A24B0:
	.4byte gUnknown_081690C6
_080A24B4:
	.4byte gRam
_080A24B8:
	.4byte 0x000016D5
_080A24BC:
	.4byte gUnknown_0816909E
_080A24C0:
	.4byte 0x00001789
_080A24C4:
	.4byte 0x000016EB
_080A24C8:
	.4byte 0x00001796
_080A24CC:
	.4byte 0x0000180C
_080A24D0:
	.4byte 0x000016D4
_080A24D4:
	.4byte 0x00001727
_080A24D8:
	.4byte 0x000016E8
_080A24DC:
	.4byte 0x000016F6
	THUMB_FUNC_END sub_080A2384

