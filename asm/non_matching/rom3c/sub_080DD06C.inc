	THUMB_FUNC_START sub_080DD06C
sub_080DD06C: @ 0x080DD06C
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	bl sub_080C5080
	ldr r3, _080DD0C8  @ =gRam
	ldr r1, _080DD0CC  @ =0x00000F52
	add r0, r3, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _080DD092
	ldr r0, _080DD0D0  @ =gHeartsFiller
	mov r1, #160
	strb r1, [r0]
	mov r0, #0
	strb r0, [r4]
_080DD092:
	mov r2, #2
	ldr r1, _080DD0D4  @ =0x0000165E
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080DD0A2
	ldr r0, _080DD0D8  @ =gMoonPearl
	ldrb r2, [r0]
_080DD0A2:
	ldr r1, _080DD0DC  @ =gUnknown_08176178
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r1, [r0]
	add r0, r5, #0
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DD0BE
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080DD0BE:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DD0C8:
	.4byte gRam
_080DD0CC:
	.4byte 0x00000F52
_080DD0D0:
	.4byte gHeartsFiller
_080DD0D4:
	.4byte 0x0000165E
_080DD0D8:
	.4byte gMoonPearl
_080DD0DC:
	.4byte gUnknown_08176178
	THUMB_FUNC_END sub_080DD06C

