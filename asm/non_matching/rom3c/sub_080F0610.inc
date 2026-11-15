	THUMB_FUNC_START sub_080F0610
sub_080F0610: @ 0x080F0610
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F06D2
	ldr r5, _080F06DC  @ =gRam
	ldr r0, _080F06E0  @ =0x00001052
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F06E4  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080F06A6
	add r0, r4, #0
	mov r1, #4
	bl sub_080C2CB4
	ldr r2, _080F06E8  @ =0x00000F12
	add r0, r5, r2
	add r0, r4, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080F067C
	mov r2, #1
	neg r2, r2
	cmp r0, #0
	ble _080F0670
	mov r2, #1
_080F0670:
	ldr r0, _080F06EC  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, r2
	strb r0, [r1]
_080F067C:
	ldr r0, _080F06DC  @ =gRam
	ldr r2, _080F06E8  @ =0x00000F12
	add r1, r0, r2
	add r3, r4, r1
	mov r1, #150
	lsl r1, r1, #4
	add r0, r0, r1
	ldrb r2, [r3]
	ldrb r0, [r0]
	sub r0, r2, r0
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080F06A6
	mov r1, #1
	neg r1, r1
	cmp r0, #0
	ble _080F06A2
	mov r1, #1
_080F06A2:
	sub r0, r2, r1
	strb r0, [r3]
_080F06A6:
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F06BE
	add r0, r4, #0
	bl sub_080F09BC
_080F06BE:
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	add r0, r4, #0
	bl sub_080C6F48
	add r0, r4, #0
	bl Sprite_WallInducedSpeedInversion
_080F06D2:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F06DC:
	.4byte gRam
_080F06E0:
	.4byte 0x00001052
_080F06E4:
	.4byte 0x00000996
_080F06E8:
	.4byte 0x00000F12
_080F06EC:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080F0610

