	THUMB_FUNC_START sub_080D23D4
sub_080D23D4: @ 0x080D23D4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r4, _080D242C  @ =gRam
	ldr r1, _080D2430  @ =0x00000A4E
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #15
	bne _080D2424
	ldr r1, _080D2434  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080D2438  @ =0x00000545
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _080D2424
	ldr r0, _080D243C  @ =0x00000F52
	add r1, r4, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080D2440  @ =0x00000A3C
	add r1, r4, r0
	ldr r0, _080D2444  @ =0x0000FFF2
	strh r0, [r1]
	mov r0, #75
	mov r1, #0
	bl sub_0812A324
	ldr r0, _080D2448  @ =0x00001770
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D2424:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D242C:
	.4byte gRam
_080D2430:
	.4byte 0x00000A4E
_080D2434:
	.4byte gUnknown_03003E70
_080D2438:
	.4byte 0x00000545
_080D243C:
	.4byte 0x00000F52
_080D2440:
	.4byte 0x00000A3C
_080D2444:
	.4byte 0x0000FFF2
_080D2448:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080D23D4

