	THUMB_FUNC_START sub_080E004C
sub_080E004C: @ 0x080E004C
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r6, #0
	mov r5, #0
	ldr r2, _080E0088  @ =gRam
	ldr r0, _080E008C  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E0090  @ =0x0000165C
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _080E00CC
	ldr r1, _080E0094  @ =0x00000F92
	add r0, r2, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #58
	beq _080E00AC
	cmp r0, #2
	beq _080E0098
	cmp r0, #22
	bne _080E00E0
	b _080E00E8
	.byte 0x00
	.byte 0x00
_080E0088:
	.4byte gRam
_080E008C:
	.4byte 0x00000F52
_080E0090:
	.4byte 0x0000165C
_080E0094:
	.4byte 0x00000F92
_080E0098:
	mov r0, #3
	strb r0, [r1]
	ldr r1, _080E00A8  @ =0x00001082
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #5
	strb r1, [r0]
	b _080E0124
_080E00A8:
	.4byte 0x00001082
_080E00AC:
	mov r0, #59
	strb r0, [r1]
	ldr r1, _080E00C8  @ =0x00001082
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	mov r1, #169
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	b _080E0120
_080E00C8:
	.4byte 0x00001082
_080E00CC:
	ldr r1, _080E00E4  @ =0x00000F92
	add r0, r2, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #12
	beq _080E0110
	cmp r0, #4
	beq _080E00FC
	cmp r0, #22
	beq _080E00E8
_080E00E0:
	mov r5, #1
	b _080E0120
_080E00E4:
	.4byte 0x00000F92
_080E00E8:
	mov r0, #44
	strb r0, [r1]
	ldr r1, _080E00F8  @ =0x00001082
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	b _080E0124
_080E00F8:
	.4byte 0x00001082
_080E00FC:
	mov r0, #5
	strb r0, [r1]
	ldr r1, _080E010C  @ =0x00001082
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	b _080E0124
_080E010C:
	.4byte 0x00001082
_080E0110:
	mov r0, #42
	strb r0, [r1]
	ldr r1, _080E0148  @ =0x00001082
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	mov r6, #1
_080E0120:
	cmp r6, #0
	beq _080E012E
_080E0124:
	add r0, r4, #0
	mov r1, #143
	mov r2, sp
	bl sub_080C9564
_080E012E:
	cmp r5, #0
	beq _080E013E
	mov r1, #168
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
_080E013E:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E0148:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080E004C

