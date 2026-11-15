	THUMB_FUNC_START sub_080E81D8
sub_080E81D8: @ 0x080E81D8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	add r0, r4, #0
	bl sub_080C4F98
	ldr r6, _080E82C0  @ =gRam
	ldr r1, _080E82C4  @ =0x00000FD2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080E8230
	add r0, r4, #0
	mov r1, #48
	bl sub_080C35FC
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	mov r0, #96
	orr r1, r1, r0
	strb r1, [r5]
	ldr r2, _080E82C8  @ =0x00001122
	add r3, r6, r2
	add r3, r4, r3
	ldrb r1, [r3]
	lsl r0, r1, #2
	strb r0, [r3]
	ldr r2, _080E82CC  @ =0x00000F22
	add r0, r6, r2
	add r0, r4, r0
	ldrb r2, [r0]
	mov r0, #128
	and r0, r0, r2
	lsl r1, r1, #26
	lsr r1, r1, #25
	orr r0, r0, r1
	lsr r0, r0, #1
	strb r0, [r3]
_080E8230:
	ldr r3, _080E82D0  @ =0x00000FE2
	add r0, r6, r3
	add r0, r0, r4
	mov r8, r0
	ldrb r0, [r0]
	lsl r1, r0, #24
	cmp r1, #0
	bne _080E82E4
	ldr r1, _080E82D4  @ =0x00001052
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r5, #14
	and r5, r5, r1
	ldr r2, _080E82D8  @ =0x00001042
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	orr r5, r5, r0
	cmp r5, #0
	bne _080E829E
	add r0, r4, #0
	bl Sprite3_Move
	ldr r3, _080E82DC  @ =0x000010A2
	add r0, r6, r3
	add r2, r4, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	sub r3, r3, #32
	add r1, r6, r3
	add r6, r4, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r6]
	cmp r0, r1
	bne _080E829E
	strb r5, [r2]
	bl GetRandomInt
	mov r4, #31
	add r1, r4, #0
	and r1, r1, r0
	add r1, r1, #64
	mov r2, r8
	strb r1, [r2]
	bl GetRandomInt
	and r4, r4, r0
	mov r0, #16
	orr r4, r4, r0
	strb r4, [r6]
_080E829E:
	add r0, r7, #0
	bl sub_080C7A20
	ldr r0, _080E82C0  @ =gRam
	ldr r3, _080E82E0  @ =0x00000F92
	add r2, r0, r3
	add r2, r7, r2
	ldr r1, _080E82D4  @ =0x00001052
	add r0, r0, r1
	add r0, r7, r0
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #27
	strb r0, [r2]
	b _080E82F2
_080E82C0:
	.4byte gRam
_080E82C4:
	.4byte 0x00000FD2
_080E82C8:
	.4byte 0x00001122
_080E82CC:
	.4byte 0x00000F22
_080E82D0:
	.4byte 0x00000FE2
_080E82D4:
	.4byte 0x00001052
_080E82D8:
	.4byte 0x00001042
_080E82DC:
	.4byte 0x000010A2
_080E82E0:
	.4byte 0x00000F92
_080E82E4:
	ldr r2, _080E82FC  @ =0x00000F92
	add r0, r6, r2
	add r0, r7, r0
	lsr r1, r1, #28
	mov r2, #1
	and r1, r1, r2
	strb r1, [r0]
_080E82F2:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080E82FC:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080E81D8

