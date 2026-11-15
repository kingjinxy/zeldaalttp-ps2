	THUMB_FUNC_START sub_080AD3CC
sub_080AD3CC: @ 0x080AD3CC
	push {r4-r6,lr}
	add r5, r0, #0
	lsl r1, r1, #24
	lsr r4, r1, #24
	lsl r2, r2, #24
	lsr r3, r2, #24
	ldr r2, _080AD408  @ =gRam
	ldrb r1, [r5]
	ldr r6, _080AD40C  @ =0x00001736
	add r0, r2, r6
	strb r1, [r0]
	mov r0, #5
	strb r0, [r5]
	ldr r0, _080AD410  @ =0x00000E15
	add r2, r2, r0
_080AD3EA:
	ldrb r1, [r5]
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r3, r0
	beq _080AD414
	sub r0, r1, #1
	strb r0, [r5]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080AD3EA
	mov r0, #0
_080AD400:
	cmp r0, #0
	beq _080AD418
	b _080AD508
	.byte 0x00
	.byte 0x00
_080AD408:
	.4byte gRam
_080AD40C:
	.4byte 0x00001736
_080AD410:
	.4byte 0x00000E15
_080AD414:
	mov r0, #1
	b _080AD400
_080AD418:
	add r0, r4, #0
	add r1, r3, #0
	add r2, r5, #0
	bl sub_080AB94C
	lsl r0, r0, #24
	asr r1, r0, #24
	cmp r1, #0
	bne _080AD508
	ldr r4, _080AD4C8  @ =gRam
	ldr r2, _080AD4CC  @ =0x0000185B
	add r0, r4, r2
	ldrb r6, [r5]
	add r0, r0, r6
	strb r1, [r0]
	ldr r1, _080AD4D0  @ =0x00000E29
	add r0, r4, r1
	ldrb r2, [r5]
	add r0, r0, r2
	mov r1, #8
	strb r1, [r0]
	ldr r6, _080AD4D4  @ =0x00001736
	add r0, r4, r6
	ldrb r3, [r0]
	lsr r3, r3, #1
	ldr r0, _080AD4D8  @ =0x00000E3D
	add r1, r4, r0
	ldrb r2, [r5]
	add r1, r1, r2
	mov r2, #4
	add r0, r3, #0
	orr r0, r0, r2
	strb r0, [r1]
	ldr r6, _080AD4DC  @ =0x00000DED
	add r1, r4, r6
	ldrb r0, [r5]
	add r1, r1, r0
	ldr r0, _080AD4E0  @ =gUnknown_0816E52A
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080AD4E4  @ =0x00000DF7
	add r1, r4, r2
	ldrb r6, [r5]
	add r1, r1, r6
	ldr r0, _080AD4E8  @ =gUnknown_0816E52E
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080AD4EC  @ =0x00001732
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080AD4F0  @ =0x00001733
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r0, _080AD4F4  @ =gUnknown_0816E532
	lsl r3, r3, #1
	add r0, r3, r0
	ldrh r0, [r0]
	add r0, r0, #8
	add r1, r1, r0
	mov r6, #150
	lsl r6, r6, #4
	add r0, r4, r6
	strh r1, [r0]
	ldr r1, _080AD4F8  @ =0x00001734
	add r0, r4, r1
	ldrb r2, [r0]
	ldr r6, _080AD4FC  @ =0x00001735
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	ldr r1, _080AD500  @ =gUnknown_0816E53A
	add r3, r3, r1
	orr r2, r2, r0
	ldrh r3, [r3]
	add r2, r2, r3
	ldr r0, _080AD504  @ =0x00000964
	add r4, r4, r0
	strh r2, [r4]
	ldrb r0, [r5]
	bl sub_080ABA78
	mov r0, #1
	b _080AD50A
	.byte 0x00
	.byte 0x00
_080AD4C8:
	.4byte gRam
_080AD4CC:
	.4byte 0x0000185B
_080AD4D0:
	.4byte 0x00000E29
_080AD4D4:
	.4byte 0x00001736
_080AD4D8:
	.4byte 0x00000E3D
_080AD4DC:
	.4byte 0x00000DED
_080AD4E0:
	.4byte gUnknown_0816E52A
_080AD4E4:
	.4byte 0x00000DF7
_080AD4E8:
	.4byte gUnknown_0816E52E
_080AD4EC:
	.4byte 0x00001732
_080AD4F0:
	.4byte 0x00001733
_080AD4F4:
	.4byte gUnknown_0816E532
_080AD4F8:
	.4byte 0x00001734
_080AD4FC:
	.4byte 0x00001735
_080AD500:
	.4byte gUnknown_0816E53A
_080AD504:
	.4byte 0x00000964
_080AD508:
	mov r0, #0
_080AD50A:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080AD3CC

