	THUMB_FUNC_START sub_080DF268
sub_080DF268: @ 0x080DF268
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DF2CC  @ =gRam
	ldr r1, _080DF2D0  @ =0x000010E2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080DF2C2
	ldr r1, _080DF2D4  @ =0x000009AC
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #26
	beq _080DF2C2
	ldr r2, _080DF2D8  @ =gUnknown_08176504
	ldr r0, _080DF2DC  @ =gMoonPearl
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r1, [r0]
	add r0, r4, #0
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DF2C2
	ldr r0, _080DF2E0  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	strb r0, [r1]
	ldr r0, _080DF2E4  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	strb r0, [r1]
	mov r0, #64
	strb r0, [r6]
_080DF2C2:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DF2CC:
	.4byte gRam
_080DF2D0:
	.4byte 0x000010E2
_080DF2D4:
	.4byte 0x000009AC
_080DF2D8:
	.4byte gUnknown_08176504
_080DF2DC:
	.4byte gMoonPearl
_080DF2E0:
	.4byte 0x00000F22
_080DF2E4:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080DF268

