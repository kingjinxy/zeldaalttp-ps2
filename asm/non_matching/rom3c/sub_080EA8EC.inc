	THUMB_FUNC_START sub_080EA8EC
sub_080EA8EC: @ 0x080EA8EC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080EAC14
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EA91E
	add r0, r4, #0
	bl Sprite_Invert_XY_Speeds
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl Sprite_Halve_XY_Speeds
	add r0, r4, #0
	bl Sprite_Halve_XY_Speeds
	add r0, r4, #0
	bl sub_080EAC54
_080EA91E:
	ldr r5, _080EA960  @ =gRam
	ldr r0, _080EA964  @ =0x00001152
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EA968  @ =0x00001142
	add r0, r5, r1
	add r1, r4, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	blt _080EA974
	ldr r2, _080EA96C  @ =0x00001052
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #4
	strb r0, [r1]
	ldr r1, _080EA970  @ =0x00000F92
	add r2, r5, r1
	add r2, r4, r2
	lsl r0, r0, #24
	lsr r0, r0, #28
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080C3094
	b _080EA9B6
	.byte 0x00
	.byte 0x00
_080EA960:
	.4byte gRam
_080EA964:
	.4byte 0x00001152
_080EA968:
	.4byte 0x00001142
_080EA96C:
	.4byte 0x00001052
_080EA970:
	.4byte 0x00000F92
_080EA974:
	mov r0, #0
	strb r0, [r1]
	ldr r2, _080EA9BC  @ =0x00000F52
	add r0, r5, r2
	add r0, r6, r0
	mov r1, #2
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #16
	bl sub_080C2CB4
	ldr r0, _080EA9C0  @ =0x00000F12
	add r1, r5, r0
	add r1, r6, r1
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	ldrb r0, [r0]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080EA9C4  @ =0x00000F22
	add r1, r5, r0
	add r1, r6, r1
	add r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	add r0, r6, #0
	bl sub_080EA81C
_080EA9B6:
	pop {r4-r6}
	pop {r0}
	bx r0
_080EA9BC:
	.4byte 0x00000F52
_080EA9C0:
	.4byte 0x00000F12
_080EA9C4:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080EA8EC

