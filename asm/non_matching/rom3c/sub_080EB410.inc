	THUMB_FUNC_START sub_080EB410
sub_080EB410: @ 0x080EB410
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r6, _080EB43C  @ =gRam
	ldr r1, _080EB440  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r1, [r5]
	cmp r1, #0
	beq _080EB448
	mov r0, #24
	and r0, r0, r1
	cmp r0, #0
	beq _080EB4CA
	ldr r2, _080EB444  @ =0x00000F72
	add r1, r6, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080EB4CA
_080EB43C:
	.4byte gRam
_080EB440:
	.4byte 0x00000FC2
_080EB444:
	.4byte 0x00000F72
_080EB448:
	ldr r0, _080EB48C  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl GetRandomInt
	ldr r2, _080EB490  @ =gUnknown_08177F58
	mov r1, #12
	and r1, r1, r0
	lsr r1, r1, #2
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r5]
	ldr r1, _080EB494  @ =0x00000F62
	add r0, r6, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080EB49C
	bl GetRandomInt
	ldr r1, _080EB498  @ =0x00000FB2
	add r2, r6, r1
	add r2, r4, r2
	mov r1, #3
	and r1, r1, r0
	strb r1, [r2]
	b _080EB4CA
_080EB48C:
	.4byte 0x00000F52
_080EB490:
	.4byte gUnknown_08177F58
_080EB494:
	.4byte 0x00000F62
_080EB498:
	.4byte 0x00000FB2
_080EB49C:
	mov r0, #3
	strb r0, [r2]
	mov r0, #96
	strb r0, [r5]
	ldr r2, _080EB4D0  @ =0x00000F82
	add r1, r6, r2
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r7, #0
	bl sub_080C3028
	add r4, r0, #0
	add r0, r7, #0
	bl sub_080C36D8
	ldr r2, _080EB4D4  @ =0x00000FB2
	add r1, r6, r2
	add r1, r7, r1
	lsl r4, r4, #1
	orr r4, r4, r0
	strb r4, [r1]
_080EB4CA:
	pop {r4-r7}
	pop {r0}
	bx r0
_080EB4D0:
	.4byte 0x00000F82
_080EB4D4:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080EB410

