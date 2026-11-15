	THUMB_FUNC_START sub_080C0B7C
sub_080C0B7C: @ 0x080C0B7C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsl r1, r1, #24
	lsr r4, r1, #24
	mov r0, #0
	mov r9, r0
	mov r3, #0
	mov r8, r3
	mov r10, r3
	ldr r2, _080C0BD4  @ =gRam
	ldr r1, _080C0BD8  @ =0x00000E75
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #0
	beq _080C0BF0
	ldr r2, _080C0BDC  @ =0x00000E3D
	add r0, r5, r2
	add r0, r6, r0
	ldrb r2, [r0]
	mov r1, #3
	and r1, r1, r2
	strb r1, [r0]
	ldr r7, _080C0BE0  @ =gUnknown_08171D0B
	mov r12, r7
	ldr r2, _080C0BE4  @ =0x00000FB2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r12
	ldrb r0, [r0]
	cmp r0, r1
	bne _080C0BE8
	mov r7, #1
	mov r10, r7
	b _080C0BEA
_080C0BD4:
	.4byte gRam
_080C0BD8:
	.4byte 0x00000E75
_080C0BDC:
	.4byte 0x00000E3D
_080C0BE0:
	.4byte gUnknown_08171D0B
_080C0BE4:
	.4byte 0x00000FB2
_080C0BE8:
	mov r3, #1
_080C0BEA:
	cmp r3, #0
	bne _080C0BF0
	b _080C0D08
_080C0BF0:
	mov r1, #0
	mov r3, #0
	mov r2, #0
	ldr r0, _080C0C10  @ =0x00000E15
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r6
	mov r7, r12
	ldrb r0, [r7]
	cmp r0, #5
	beq _080C0C32
	cmp r0, #31
	beq _080C0C14
	mov r3, #1
	b _080C0C2E
	.byte 0x00
	.byte 0x00
_080C0C10:
	.4byte 0x00000E15
_080C0C14:
	ldr r0, _080C0C28  @ =0x00000FF2
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	cmp r7, #141
	bne _080C0C2C
	mov r2, #1
	b _080C0C2E
_080C0C28:
	.4byte 0x00000FF2
_080C0C2C:
	mov r1, #1
_080C0C2E:
	cmp r1, #0
	beq _080C0C62
_080C0C32:
	ldr r1, _080C0C44  @ =0x000010C2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C0C48
	mov r7, #1
	mov r10, r7
	b _080C0C62
_080C0C44:
	.4byte 0x000010C2
_080C0C48:
	ldr r1, _080C0C5C  @ =0x00000E75
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080C0C60
	mov r3, #1
	b _080C0C62
_080C0C5C:
	.4byte 0x00000E75
_080C0C60:
	mov r2, #1
_080C0C62:
	cmp r2, #0
	beq _080C0C74
	ldr r2, _080C0CDC  @ =0x00000F72
	add r0, r5, r2
	add r0, r4, r0
	add r1, r6, #1
	strb r1, [r0]
	mov r7, #1
	mov r8, r7
_080C0C74:
	cmp r3, #0
	beq _080C0D08
	add r1, r5, #0
	ldr r2, _080C0CE0  @ =0x00001172
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C0D08
	ldr r7, _080C0CE4  @ =0x00000FF2
	add r0, r1, r7
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #146
	bne _080C0C9C
	add r0, r4, #0
	bl sub_080FCF08
	cmp r0, #0
	beq _080C0D04
_080C0C9C:
	ldr r1, _080C0CE8  @ =0x00000E3D
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	mov r2, #3
	and r2, r2, r0
	ldr r7, _080C0CEC  @ =0x00001112
	add r1, r5, r7
	add r1, r4, r1
	ldr r0, _080C0CF0  @ =gUnknown_08171D0F
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080C0CF4  @ =0x00001102
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080C0CF8  @ =gUnknown_08171D13
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _080C0CFC  @ =0x000015FA
	add r0, r5, r1
	strb r6, [r0]
	ldr r2, _080C0D00  @ =0x00000E15
	add r0, r5, r2
	add r0, r6, r0
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_080C4E94
	b _080C0D0E
	.byte 0x00
	.byte 0x00
_080C0CDC:
	.4byte 0x00000F72
_080C0CE0:
	.4byte 0x00001172
_080C0CE4:
	.4byte 0x00000FF2
_080C0CE8:
	.4byte 0x00000E3D
_080C0CEC:
	.4byte 0x00001112
_080C0CF0:
	.4byte gUnknown_08171D0F
_080C0CF4:
	.4byte 0x00001102
_080C0CF8:
	.4byte gUnknown_08171D13
_080C0CFC:
	.4byte 0x000015FA
_080C0D00:
	.4byte 0x00000E15
_080C0D04:
	mov r7, #1
	mov r10, r7
_080C0D08:
	mov r0, r8
	cmp r0, #0
	beq _080C0D24
_080C0D0E:
	ldr r0, _080C0D48  @ =gRam
	ldr r2, _080C0D4C  @ =0x00001182
	add r1, r0, r2
	add r1, r4, r1
	ldr r7, _080C0D50  @ =0x00000E15
	add r0, r0, r7
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, #1
	mov r10, r0
_080C0D24:
	mov r1, r10
	cmp r1, #0
	beq _080C0D38
	ldr r0, _080C0D48  @ =gRam
	ldr r2, _080C0D54  @ =0x00001626
	add r0, r0, r2
	mov r1, #3
	strb r1, [r0]
	mov r7, #1
	mov r9, r7
_080C0D38:
	mov r0, r9
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
_080C0D48:
	.4byte gRam
_080C0D4C:
	.4byte 0x00001182
_080C0D50:
	.4byte 0x00000E15
_080C0D54:
	.4byte 0x00001626
	THUMB_FUNC_END sub_080C0B7C

