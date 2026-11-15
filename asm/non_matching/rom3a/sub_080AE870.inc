	THUMB_FUNC_START sub_080AE870
sub_080AE870: @ 0x080AE870
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r4, r1, #24
	ldr r2, _080AE8B8  @ =gRam
	ldr r3, _080AE8BC  @ =0x0000097D
	add r1, r2, r3
	strb r0, [r1]
	add r0, r0, #1
	sub r3, r3, #1
	add r1, r2, r3
	strb r0, [r1]
	mov r3, #0
	mov r1, #4
	add r5, r2, #0
	ldr r0, _080AE8C0  @ =0x00000E15
	add r2, r5, r0
_080AE894:
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, r4
	bne _080AE89E
	add r3, r3, #1
_080AE89E:
	sub r1, r1, #1
	cmp r1, #0
	bge _080AE894
	ldr r1, _080AE8C4  @ =0x0000097C
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, r3
	bne _080AE8C8
	mov r0, #1
	neg r0, r0
	b _080AE910
_080AE8B8:
	.4byte gRam
_080AE8BC:
	.4byte 0x0000097D
_080AE8C0:
	.4byte 0x00000E15
_080AE8C4:
	.4byte 0x0000097C
_080AE8C8:
	cmp r4, #7
	blt _080AE8DE
	cmp r4, #8
	ble _080AE8D6
	cmp r4, #36
	beq _080AE8DA
	b _080AE8DE
_080AE8D6:
	mov r3, #1
	b _080AE8E0
_080AE8DA:
	mov r3, #3
	b _080AE8E0
_080AE8DE:
	mov r3, #4
_080AE8E0:
	add r1, r3, #0
_080AE8E2:
	ldr r2, _080AE918  @ =0x00000E15
	add r0, r5, r2
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080AE90C
	sub r3, r3, #1
	cmp r3, #0
	bge _080AE8E2
	add r3, r1, #0
	cmp r3, #0
	blt _080AE900
_080AE8FA:
	sub r3, r3, #1
	cmp r3, #0
	bge _080AE8FA
_080AE900:
	ldr r1, _080AE91C  @ =0x0000097D
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080AE920  @ =0x0000185A
	add r0, r5, r2
	strb r1, [r0]
_080AE90C:
	lsl r0, r3, #24
	asr r0, r0, #24
_080AE910:
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080AE918:
	.4byte 0x00000E15
_080AE91C:
	.4byte 0x0000097D
_080AE920:
	.4byte 0x0000185A
	THUMB_FUNC_END sub_080AE870

