	THUMB_FUNC_START sub_080F08AC
sub_080F08AC: @ 0x080F08AC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080F0954  @ =gRam
	ldr r1, _080F0958  @ =0x00001052
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r1, #0
	cmp r1, #0
	bne _080F08CA
	ldr r5, _080F095C  @ =0x00000FA2
	add r0, r3, r5
	add r0, r4, r0
	strb r1, [r0]
_080F08CA:
	cmp r2, #63
	bhi _080F08D6
	mov r0, #1
	and r2, r2, r0
	cmp r2, #0
	bne _080F08DC
_080F08D6:
	add r0, r4, #0
	bl sub_080C58F0
_080F08DC:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F094E
	add r0, r4, #0
	bl sub_080C841C
	cmp r0, #0
	bne _080F094E
	ldr r6, _080F0954  @ =gRam
	ldr r1, _080F0958  @ =0x00001052
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	sub r1, r1, #1
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _080F094E
	ldr r5, _080F0960  @ =0x00001152
	add r0, r6, r5
	add r5, r4, r0
	ldrb r0, [r5]
	sub r0, r0, #1
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r1, _080F0964  @ =0x00001142
	add r0, r6, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F0936
	strb r7, [r2]
	mov r0, #16
	strb r0, [r5]
_080F0936:
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C6F48
	add r0, r4, #0
	bl Sprite_WallInducedSpeedInversion
	add r0, r4, #0
	bl sub_080C5044
_080F094E:
	pop {r4-r7}
	pop {r0}
	bx r0
_080F0954:
	.4byte gRam
_080F0958:
	.4byte 0x00001052
_080F095C:
	.4byte 0x00000FA2
_080F0960:
	.4byte 0x00001152
_080F0964:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080F08AC

