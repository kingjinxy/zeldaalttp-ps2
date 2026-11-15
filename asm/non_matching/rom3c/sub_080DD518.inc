	THUMB_FUNC_START sub_080DD518
sub_080DD518: @ 0x080DD518
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _080DD560  @ =gRam
	ldr r1, _080DD564  @ =0x00000FC2
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080DD58C
	ldr r1, _080DD568  @ =gUnknown_08176240
	ldr r2, _080DD56C  @ =0x00000F62
	add r0, r5, r2
	add r2, r4, r0
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080DD574
	add r0, r4, #0
	mov r1, #218
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080DD570  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080DD58C
	.byte 0x00
	.byte 0x00
_080DD560:
	.4byte gRam
_080DD564:
	.4byte 0x00000FC2
_080DD568:
	.4byte gUnknown_08176240
_080DD56C:
	.4byte 0x00000F62
_080DD570:
	.4byte 0x00000F52
_080DD574:
	ldr r4, _080DD594  @ =0x00000F92
	add r0, r5, r4
	add r0, r6, r0
	strb r1, [r0]
	ldr r1, _080DD598  @ =gUnknown_08176248
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r3]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_080DD58C:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080DD594:
	.4byte 0x00000F92
_080DD598:
	.4byte gUnknown_08176248
	THUMB_FUNC_END sub_080DD518

