	THUMB_FUNC_START sub_080A2104
sub_080A2104: @ 0x080A2104
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r5, _080A21C8  @ =gRam
	ldr r0, _080A21CC  @ =0x0000178A
	add r7, r5, r0
	ldrb r1, [r7]
	mov r0, #16
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080A2218
	ldr r1, _080A21D0  @ =0x000016E8
	add r1, r1, r5
	mov r8, r1
	ldrb r1, [r1]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A2170
	ldr r2, _080A21D4  @ =0x0000172C
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A2218
	bl sub_080A1ADC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A2218
	ldr r0, _080A21D8  @ =gUnknown_08169098
	ldrb r1, [r0]
	ldr r2, _080A21DC  @ =0x000016EB
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _080A21E0  @ =0x00001705
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _080A21E4  @ =0x000016D4
	add r0, r5, r1
	strb r6, [r0]
	mov r0, #2
	strb r0, [r7]
	ldr r2, _080A21E8  @ =0x00001789
	add r0, r5, r2
	strb r6, [r0]
	mov r0, #11
	mov r1, #1
	bl sub_080BEA28
_080A2170:
	bl sub_080A38AC
	ldr r0, _080A21EC  @ =0x00001727
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080A21DC  @ =0x000016EB
	add r4, r5, r1
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080A2218
	ldr r2, _080A21E8  @ =0x00001789
	add r3, r5, r2
	ldrb r1, [r3]
	add r1, r1, #1
	strb r1, [r3]
	ldr r2, _080A21D8  @ =gUnknown_08169098
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r4]
	lsl r1, r1, #24
	lsr r1, r1, #24
	cmp r1, #1
	bne _080A21F0
	mov r0, #3
	bl sub_0809EEB4
	mov r0, #0
	mov r1, #22
	bl sub_080ADA94
	mov r0, #33
	bl sub_0809E43C
	bl sub_080A1F20
	b _080A2218
	.byte 0x00
	.byte 0x00
_080A21C8:
	.4byte gRam
_080A21CC:
	.4byte 0x0000178A
_080A21D0:
	.4byte 0x000016E8
_080A21D4:
	.4byte 0x0000172C
_080A21D8:
	.4byte gUnknown_08169098
_080A21DC:
	.4byte 0x000016EB
_080A21E0:
	.4byte 0x00001705
_080A21E4:
	.4byte 0x000016D4
_080A21E8:
	.4byte 0x00001789
_080A21EC:
	.4byte 0x00001727
_080A21F0:
	cmp r1, #3
	bne _080A2218
	strb r6, [r3]
	strb r6, [r4]
	mov r0, r8
	ldrb r1, [r0]
	mov r0, #191
	and r0, r0, r1
	mov r1, r8
	strb r0, [r1]
	ldr r0, _080A2224  @ =0x00001705
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r7]
	mov r0, #253
	and r0, r0, r1
	strb r0, [r7]
_080A2218:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A2224:
	.4byte 0x00001705
	THUMB_FUNC_END sub_080A2104

