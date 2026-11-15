	THUMB_FUNC_START sub_080E210C
sub_080E210C: @ 0x080E210C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, #65
	add r1, r6, #0
	mov r2, #10
	bl sub_080C9AAC
	add r5, r0, #0
	cmp r5, #0
	blt _080E21CC
	ldr r3, _080E21D4  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldrh r1, [r0]
	add r1, r1, #8
	ldr r2, _080E21D8  @ =0x00000964
	add r0, r3, r2
	ldrh r2, [r0]
	add r2, r2, #4
	ldr r4, _080E21DC  @ =0x00000EE2
	add r0, r3, r4
	add r0, r5, r0
	strb r1, [r0]
	add r4, r4, #32
	add r0, r3, r4
	add r0, r5, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080E21E0  @ =0x00000ED2
	add r0, r3, r1
	add r0, r5, r0
	strb r2, [r0]
	sub r4, r4, #16
	add r0, r3, r4
	add r0, r5, r0
	lsr r2, r2, #8
	strb r2, [r0]
	add r1, r1, #224
	add r0, r3, r1
	add r0, r5, r0
	ldr r2, _080E21E4  @ =0x0000097D
	add r4, r3, r2
	ldrb r1, [r4]
	strb r1, [r0]
	ldr r0, _080E21E8  @ =0x00000F22
	add r1, r3, r0
	add r1, r5, r1
	ldr r2, _080E21EC  @ =gUnknown_081769D4
	mov r0, #0
	ldrsb r0, [r4, r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080E21F0  @ =0x00000F12
	add r1, r3, r2
	add r1, r5, r1
	ldr r2, _080E21F4  @ =gUnknown_08176A14
	mov r0, #0
	ldrsb r0, [r4, r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r4, _080E21F8  @ =0x00001012
	add r2, r3, r4
	add r2, r5, r2
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r1, #96
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _080E21FC  @ =0x00000F82
	add r0, r3, r1
	add r0, r5, r0
	add r1, r6, #1
	strb r1, [r0]
	ldr r2, _080E2200  @ =0x00001172
	add r0, r3, r2
	add r0, r5, r0
	strb r1, [r0]
	ldr r4, _080E2204  @ =0x00001132
	add r0, r3, r4
	add r0, r5, r0
	mov r1, #64
	strb r1, [r0]
	ldr r2, _080E2208  @ =0x00001032
	add r0, r3, r2
	add r0, r5, r0
	strb r1, [r0]
	ldr r4, _080E220C  @ =0x00000E75
	add r3, r3, r4
	add r3, r5, r3
	mov r0, #2
	strb r0, [r3]
_080E21CC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E21D4:
	.4byte gRam
_080E21D8:
	.4byte 0x00000964
_080E21DC:
	.4byte 0x00000EE2
_080E21E0:
	.4byte 0x00000ED2
_080E21E4:
	.4byte 0x0000097D
_080E21E8:
	.4byte 0x00000F22
_080E21EC:
	.4byte gUnknown_081769D4
_080E21F0:
	.4byte 0x00000F12
_080E21F4:
	.4byte gUnknown_08176A14
_080E21F8:
	.4byte 0x00001012
_080E21FC:
	.4byte 0x00000F82
_080E2200:
	.4byte 0x00001172
_080E2204:
	.4byte 0x00001132
_080E2208:
	.4byte 0x00001032
_080E220C:
	.4byte 0x00000E75
	THUMB_FUNC_END sub_080E210C

