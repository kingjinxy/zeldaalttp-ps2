	THUMB_FUNC_START sub_0811130C
sub_0811130C: @ 0x0811130C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	bl sub_081114D0
	ldr r2, _08111358  @ =gRam
	ldr r1, _0811135C  @ =0x00000FD2
	add r0, r2, r1
	add r3, r7, r0
	ldrb r0, [r3]
	cmp r0, #1
	bne _08111336
	add r1, r1, #176
	add r0, r2, r1
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
_08111336:
	ldr r1, _08111360  @ =0x00001082
	add r0, r2, r1
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08111378
	ldrb r0, [r3]
	cmp r0, #0
	bne _08111378
	ldr r1, _08111364  @ =0x00000F62
	add r0, r2, r1
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #2
	bhi _08111368
	add r0, r0, #1
	b _0811136A
_08111358:
	.4byte gRam
_0811135C:
	.4byte 0x00000FD2
_08111360:
	.4byte 0x00001082
_08111364:
	.4byte 0x00000F62
_08111368:
	sub r0, r0, #1
_0811136A:
	strb r0, [r1]
	ldr r0, _08111488  @ =gRam
	ldr r1, _0811148C  @ =0x00000FD2
	add r0, r0, r1
	add r0, r7, r0
	mov r1, #64
	strb r1, [r0]
_08111378:
	add r0, r7, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	cmp r0, #0
	beq _0811138A
	b _081114C2
_0811138A:
	add r0, r7, #0
	bl sub_080C3138
	add r0, r7, #0
	bl sub_080C2C4C
	add r0, r7, #0
	bl Sprite3_Move
	ldr r0, _08111488  @ =gRam
	mov r8, r0
	ldr r0, _08111490  @ =0x000010B2
	add r0, r0, r8
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _081113B8
	add r0, r7, #0
	bl sub_080C6F48
	add r0, r7, #0
	bl Sprite_WallInducedSpeedInversion
_081113B8:
	ldr r0, _08111494  @ =0x00001152
	add r0, r0, r8
	add r0, r0, r7
	mov r12, r0
	ldrb r0, [r0]
	sub r0, r0, #2
	mov r1, r12
	strb r0, [r1]
	ldr r0, _08111498  @ =0x00001142
	add r0, r0, r8
	add r6, r7, r0
	mov r0, #0
	ldrsb r0, [r6, r0]
	cmp r0, #0
	bge _081114C2
	ldr r4, _0811149C  @ =0x00000F22
	add r4, r4, r8
	add r4, r7, r4
	ldrb r2, [r4]
	ldr r5, _081114A0  @ =0x00000F12
	add r5, r5, r8
	add r5, r7, r5
	ldrb r3, [r5]
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	neg r1, r1
	lsr r0, r1, #31
	add r1, r1, r0
	asr r1, r1, #1
	lsl r1, r1, #24
	mov r0, r9
	strb r0, [r6]
	mov r6, #128
	add r0, r2, #0
	and r0, r0, r6
	lsr r2, r2, #1
	orr r0, r0, r2
	strb r0, [r4]
	add r0, r3, #0
	and r0, r0, r6
	lsr r3, r3, #1
	orr r0, r0, r3
	strb r0, [r5]
	lsr r2, r1, #24
	asr r1, r1, #24
	cmp r1, #8
	ble _081114BC
	ldr r0, _081114A4  @ =0x000013B2
	add r0, r0, r8
	add r0, r7, r0
	ldrb r0, [r0]
	mov r1, r12
	strb r2, [r1]
	sub r0, r0, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _081114C2
	mov r0, r9
	strb r0, [r1]
	add r0, r7, #0
	bl sub_080C969C
	mov r12, r0
	cmp r0, #0
	blt _081114C2
	ldr r0, _081114A8  @ =0x00001032
	add r0, r0, r8
	add r0, r7, r0
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _081114C2
	ldr r6, _081114AC  @ =0x00000EE2
	add r6, r6, r8
	add r6, r6, r12
	ldrb r2, [r6]
	ldr r5, _081114B0  @ =0x00000F02
	add r5, r5, r8
	add r5, r5, r12
	ldrb r0, [r5]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r2, r2, #4
	ldr r4, _081114B4  @ =0x00000ED2
	add r4, r4, r8
	add r4, r4, r12
	ldrb r1, [r4]
	ldr r3, _081114B8  @ =0x00000EF2
	add r3, r3, r8
	add r3, r3, r12
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #4
	strb r2, [r6]
	lsr r2, r2, #8
	strb r2, [r5]
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r3]
	b _081114C2
_08111488:
	.4byte gRam
_0811148C:
	.4byte 0x00000FD2
_08111490:
	.4byte 0x000010B2
_08111494:
	.4byte 0x00001152
_08111498:
	.4byte 0x00001142
_0811149C:
	.4byte 0x00000F22
_081114A0:
	.4byte 0x00000F12
_081114A4:
	.4byte 0x000013B2
_081114A8:
	.4byte 0x00001032
_081114AC:
	.4byte 0x00000EE2
_081114B0:
	.4byte 0x00000F02
_081114B4:
	.4byte 0x00000ED2
_081114B8:
	.4byte 0x00000EF2
_081114BC:
	add r0, r7, #0
	bl sub_080C351C
_081114C2:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0811130C

	.byte 0x00
	.byte 0x00
