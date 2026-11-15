	THUMB_FUNC_START sub_080E80B4
sub_080E80B4: @ 0x080E80B4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r4, r5, #0
	ldr r0, _080E8140  @ =gRam
	mov r8, r0
	ldr r0, _080E8144  @ =0x00000FC2
	add r0, r0, r8
	add r0, r0, r5
	mov r9, r0
	ldrb r7, [r0]
	cmp r7, #0
	bne _080E8158
	mov r0, sp
	add r1, r5, #0
	bl sub_080C4948
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C7A20
	ldr r0, _080E8148  @ =0x00001142
	add r0, r0, r8
	add r6, r5, r0
	ldrb r4, [r6]
	add r0, r5, #0
	bl sub_080C2C4C
	ldr r0, _080E814C  @ =0x00001152
	add r0, r0, r8
	add r2, r5, r0
	ldrb r1, [r2]
	add r0, r1, #0
	add r0, r0, #64
	mov r3, #128
	and r0, r0, r3
	cmp r0, #0
	bne _080E8110
	sub r0, r1, #2
	strb r0, [r2]
_080E8110:
	ldrb r1, [r6]
	eor r4, r4, r1
	and r4, r4, r3
	cmp r4, #0
	beq _080E81B4
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080E81B4
	strb r7, [r2]
	strb r7, [r6]
	ldr r0, _080E8150  @ =0x00000F82
	add r0, r0, r8
	add r0, r5, r0
	strb r7, [r0]
	mov r0, #31
	mov r1, r9
	strb r0, [r1]
	ldr r0, _080E8154  @ =0x00001082
	add r0, r0, r8
	add r0, r5, r0
	mov r1, #8
	strb r1, [r0]
	b _080E81B4
_080E8140:
	.4byte gRam
_080E8144:
	.4byte 0x00000FC2
_080E8148:
	.4byte 0x00001142
_080E814C:
	.4byte 0x00001152
_080E8150:
	.4byte 0x00000F82
_080E8154:
	.4byte 0x00001082
_080E8158:
	mov r1, r9
	ldrb r0, [r1]
	cmp r0, #1
	bne _080E8184
	mov r2, #0
	mov r0, #32
	strb r0, [r1]
	ldr r1, _080E817C  @ =0x00000F52
	add r1, r1, r8
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080E8180  @ =0x00000F92
	add r0, r0, r8
	add r0, r5, r0
	strb r2, [r0]
	b _080E81B4
_080E817C:
	.4byte 0x00000F52
_080E8180:
	.4byte 0x00000F92
_080E8184:
	ldr r1, _080E81C4  @ =0x00000F92
	add r1, r1, r8
	add r1, r4, r1
	ldr r2, _080E81C8  @ =gUnknown_08177944
	lsr r0, r0, #4
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080E81CC  @ =0x00000F22
	add r2, r2, r8
	add r2, r4, r2
	ldr r3, _080E81D0  @ =gUnknown_08177946
	ldr r0, _080E81D4  @ =0x00000996
	add r0, r0, r8
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #1
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	add r0, r4, #0
	bl Sprite3_MoveHoriz
_080E81B4:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E81C4:
	.4byte 0x00000F92
_080E81C8:
	.4byte gUnknown_08177944
_080E81CC:
	.4byte 0x00000F22
_080E81D0:
	.4byte gUnknown_08177946
_080E81D4:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080E80B4

