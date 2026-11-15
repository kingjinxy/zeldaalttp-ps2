	THUMB_FUNC_START sub_080AD510
sub_080AD510: @ 0x080AD510
	push {r4-r7,lr}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r3, sp, #4
	mov r0, #5
	strb r0, [r3]
	add r7, r3, #0
	ldr r4, _080AD534  @ =gUnknown_03003045
_080AD526:
	ldrb r2, [r3]
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r1, r0
	bne _080AD538
	mov r0, #1
	b _080AD544
_080AD534:
	.4byte gUnknown_03003045
_080AD538:
	sub r0, r2, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080AD526
	mov r0, #0
_080AD544:
	cmp r0, #0
	bne _080AD616
	add r5, r7, #0
	add r0, r6, #0
	add r2, r5, #0
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _080AD616
	ldr r4, _080AD620  @ =gRam
	ldr r1, _080AD624  @ =0x00000E29
	add r0, r4, r1
	ldrb r6, [r5]
	add r0, r0, r6
	mov r1, #16
	strb r1, [r0]
	ldr r1, _080AD628  @ =0x00001818
	add r0, r4, r1
	ldrb r6, [r5]
	add r0, r0, r6
	strb r2, [r0]
	ldrb r1, [r5]
	ldr r0, _080AD62C  @ =0x00000E3D
	add r3, r4, r0
	add r1, r1, r3
	ldr r2, _080AD630  @ =gUnknown_0816E542
	ldr r6, _080AD634  @ =0x000016D5
	add r0, r4, r6
	ldrb r0, [r0]
	lsr r0, r0, #1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r5]
	add r0, r0, r3
	ldrb r5, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldr r2, _080AD638  @ =0x00000958
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r6, _080AD63C  @ =0x00000964
	add r3, r4, r6
	strh r0, [r3]
	ldr r1, _080AD640  @ =0x000016C4
	add r0, r4, r1
	sub r2, r2, #6
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	sub r6, r6, #4
	add r1, r4, r6
	strh r0, [r1]
	mov r2, sp
	ldrb r0, [r1]
	strb r0, [r2]
	mov r1, sp
	ldr r2, _080AD644  @ =0x00000961
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1, #1]
	ldrb r0, [r3]
	strb r0, [r1, #2]
	add r6, r6, #5
	add r0, r4, r6
	ldrb r0, [r0]
	strb r0, [r1, #3]
	ldr r1, _080AD648  @ =gUnknown_0816E54A
	lsr r0, r5, #1
	add r0, r0, r1
	ldrb r0, [r0]
	add r2, r2, #11
	add r1, r4, r2
	strb r0, [r1]
	mov r6, sp
	add r0, r6, r5
	ldrb r2, [r0]
	mov r0, #0
	ldrsb r0, [r1, r0]
	mov r5, #2
	cmp r2, r0
	bge _080AD5F6
	mov r5, #0
_080AD5F6:
	ldr r0, _080AD64C  @ =0x00000DC5
	add r1, r4, r0
	ldrb r2, [r7]
	add r1, r1, r2
	ldr r2, _080AD650  @ =gUnknown_0816E546
	add r0, r5, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r6, _080AD654  @ =0x00000DD9
	add r1, r4, r6
	ldrb r7, [r7]
	add r1, r1, r7
	add r0, r5, #1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080AD616:
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AD620:
	.4byte gRam
_080AD624:
	.4byte 0x00000E29
_080AD628:
	.4byte 0x00001818
_080AD62C:
	.4byte 0x00000E3D
_080AD630:
	.4byte gUnknown_0816E542
_080AD634:
	.4byte 0x000016D5
_080AD638:
	.4byte 0x00000958
_080AD63C:
	.4byte 0x00000964
_080AD640:
	.4byte 0x000016C4
_080AD644:
	.4byte 0x00000961
_080AD648:
	.4byte gUnknown_0816E54A
_080AD64C:
	.4byte 0x00000DC5
_080AD650:
	.4byte gUnknown_0816E546
_080AD654:
	.4byte 0x00000DD9
	THUMB_FUNC_END sub_080AD510

