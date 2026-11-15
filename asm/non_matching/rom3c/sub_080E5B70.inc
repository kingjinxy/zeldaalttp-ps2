	THUMB_FUNC_START sub_080E5B70
sub_080E5B70: @ 0x080E5B70
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	ldr r7, _080E5C40  @ =gRam
	ldr r1, _080E5C44  @ =0x00000FD2
	add r0, r7, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _080E5B9E
	ldr r0, _080E5C48  @ =0x00000D94
	add r2, r7, r0
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #241
	and r0, r0, r1
	ldr r1, _080E5C4C  @ =gUnknown_0817756C
	ldrb r1, [r1, #2]
	orr r0, r0, r1
	strb r0, [r2]
_080E5B9E:
	add r0, r4, #0
	bl sub_080E5D6C
	add r0, r4, #0
	bl sub_080E5C64
	ldr r2, _080E5C50  @ =gUnknown_08177568
	ldr r1, _080E5C54  @ =0x00001052
	add r0, r7, r1
	add r5, r4, r0
	ldrb r0, [r5]
	lsr r0, r0, #3
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r2
	ldrb r1, [r0]
	ldrb r0, [r6]
	cmp r0, #0
	beq _080E5BCA
	add r0, r1, #3
	lsl r0, r0, #24
	lsr r1, r0, #24
_080E5BCA:
	ldr r2, _080E5C58  @ =0x00000F92
	add r0, r7, r2
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E5C36
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E5C36
	ldr r1, _080E5C5C  @ =0x00001082
	add r0, r7, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E5C00
	add r0, r4, #0
	bl sub_080C841C
	cmp r0, #0
	bne _080E5C36
_080E5C00:
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r2, _080E5C60  @ =0x00000FC2
	add r0, r7, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E5C18
	add r0, r4, #0
	bl sub_080E5EA0
_080E5C18:
	ldrb r0, [r6]
	cmp r0, #0
	bne _080E5C24
	add r0, r4, #0
	bl Sprite3_Move
_080E5C24:
	mov r0, r8
	bl sub_080C6F48
	mov r0, r8
	bl Sprite_WallInducedSpeedInversion
	mov r0, r8
	bl sub_080C5044
_080E5C36:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080E5C40:
	.4byte gRam
_080E5C44:
	.4byte 0x00000FD2
_080E5C48:
	.4byte 0x00000D94
_080E5C4C:
	.4byte gUnknown_0817756C
_080E5C50:
	.4byte gUnknown_08177568
_080E5C54:
	.4byte 0x00001052
_080E5C58:
	.4byte 0x00000F92
_080E5C5C:
	.4byte 0x00001082
_080E5C60:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E5B70

