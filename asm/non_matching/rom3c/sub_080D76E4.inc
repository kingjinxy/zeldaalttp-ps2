	THUMB_FUNC_START sub_080D76E4
sub_080D76E4: @ 0x080D76E4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	ldr r7, _080D778C  @ =gRam
	ldr r1, _080D7790  @ =0x00001012
	add r0, r7, r1
	add r0, r4, r0
	mov r1, #143
	strb r1, [r0]
	ldr r2, _080D7794  @ =0x00001132
	add r0, r7, r2
	add r0, r4, r0
	mov r1, #71
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080D7930
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080D7782
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D7734
	bl sub_080AF16C
	ldr r1, _080D7798  @ =0x00001719
	add r0, r7, r1
	strb r6, [r0]
	bl sub_0809945C
_080D7734:
	add r0, r4, #0
	bl Sprite3_Move
	ldr r2, _080D779C  @ =0x00001152
	add r0, r7, r2
	add r5, r4, r0
	ldrb r0, [r5]
	sub r0, r0, #1
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r1, _080D77A0  @ =0x00001142
	add r0, r7, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D776C
	strb r6, [r2]
	ldrb r0, [r5]
	mvn r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, #1
	asr r0, r0, #2
	strb r0, [r5]
_080D776C:
	ldr r1, _080D77A4  @ =gUnknown_08175694
	ldr r2, _080D77A8  @ =0x00000F52
	add r0, r7, r2
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	mov r0, r8
	bl _call_via_r1
_080D7782:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080D778C:
	.4byte gRam
_080D7790:
	.4byte 0x00001012
_080D7794:
	.4byte 0x00001132
_080D7798:
	.4byte 0x00001719
_080D779C:
	.4byte 0x00001152
_080D77A0:
	.4byte 0x00001142
_080D77A4:
	.4byte gUnknown_08175694
_080D77A8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D76E4

