	THUMB_FUNC_START sub_080D73E8
sub_080D73E8: @ 0x080D73E8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C59CC
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080D749C
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D741A
	ldr r0, _080D74A4  @ =gRam
	ldr r1, _080D74A8  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
_080D741A:
	ldr r7, _080D74A4  @ =gRam
	ldr r2, _080D74A8  @ =0x00000F52
	add r0, r7, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bne _080D7434
	add r0, r4, #0
	bl sub_080D0820
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D749C
_080D7434:
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080D74AC  @ =0x00001152
	add r0, r7, r1
	add r5, r4, r0
	ldrb r0, [r5]
	sub r0, r0, #1
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r2, _080D74B0  @ =0x00001142
	add r0, r7, r2
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D7484
	ldr r1, _080D74B4  @ =0x00000F12
	add r0, r7, r1
	add r0, r4, r0
	strb r6, [r0]
	strb r6, [r2]
	ldrb r0, [r5]
	mvn r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, #1
	asr r0, r0, #2
	strb r0, [r5]
	mov r1, #254
	and r0, r0, r1
	cmp r0, #0
	beq _080D7484
	add r0, r4, #0
	mov r1, #19
	bl sub_080CF140
_080D7484:
	ldr r1, _080D74B8  @ =gUnknown_08175670
	ldr r0, _080D74A4  @ =gRam
	ldr r2, _080D74A8  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080D749C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D74A4:
	.4byte gRam
_080D74A8:
	.4byte 0x00000F52
_080D74AC:
	.4byte 0x00001152
_080D74B0:
	.4byte 0x00001142
_080D74B4:
	.4byte 0x00000F12
_080D74B8:
	.4byte gUnknown_08175670
	THUMB_FUNC_END sub_080D73E8

