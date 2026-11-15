	THUMB_FUNC_START sub_080E6FA8
sub_080E6FA8: @ 0x080E6FA8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r9, r4
	add r0, r4, #0
	bl sub_080E71D4
	ldr r6, _080E70F4  @ =gRam
	ldr r1, _080E70F8  @ =0x00001072
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E6FD0
	add r0, r4, #0
	bl sub_080E2614
_080E6FD0:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	beq _080E6FE0
	b _080E71AE
_080E6FE0:
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r2, _080E70FC  @ =0x00001152
	add r0, r6, r2
	add r0, r0, r4
	mov r8, r0
	ldrb r0, [r0]
	sub r0, r0, #2
	mov r3, r8
	strb r0, [r3]
	ldr r1, _080E7100  @ =0x00001142
	add r0, r6, r1
	add r7, r4, r0
	mov r0, #0
	ldrsb r0, [r7, r0]
	cmp r0, #0
	bge _080E700E
	strb r5, [r7]
	strb r5, [r3]
	add r0, r4, #0
	bl sub_080E2614
_080E700E:
	ldr r2, _080E7104  @ =0x00000F52
	add r0, r6, r2
	add r2, r4, r0
	ldrb r3, [r2]
	mov r12, r3
	cmp r3, #0
	beq _080E701E
	b _080E716C
_080E701E:
	ldr r5, _080E7108  @ =0x00001032
	add r0, r6, r5
	add r5, r4, r0
	ldrb r1, [r5]
	mov r0, #64
	orr r1, r1, r0
	mov r0, #0
	orr r1, r1, r0
	strb r1, [r5]
	ldr r3, _080E710C  @ =0x00000FC2
	add r0, r6, r3
	add r7, r4, r0
	ldrb r3, [r7]
	cmp r3, #1
	beq _080E7128
	ldr r5, _080E7110  @ =0x00000996
	add r0, r6, r5
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080E70C4
	ldr r1, _080E7114  @ =0x000016C4
	add r0, r6, r1
	ldrb r1, [r0]
	ldr r2, _080E7118  @ =0x000016C5
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r5, _080E711C  @ =0x00001622
	add r0, r6, r5
	ldrb r2, [r0]
	add r5, r5, #1
	add r0, r6, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	mov r0, #248
	lsl r0, r0, #13
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #61
	bhi _080E70C4
	mov r1, #182
	lsl r1, r1, #5
	add r0, r6, r1
	ldrb r1, [r0]
	ldr r2, _080E7120  @ =0x000016C1
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	add r5, r5, #1
	add r0, r6, r5
	ldrb r2, [r0]
	add r5, r5, #1
	add r0, r6, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	mov r0, #192
	lsl r0, r0, #14
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #87
	bhi _080E70C4
	cmp r3, #0
	bne _080E70C4
	mov r0, #48
	strb r0, [r7]
	add r0, r4, #0
	mov r1, #58
	bl sub_080CF0AC
_080E70C4:
	mov r0, r9
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E70D8
	bl sub_080AF16C
	bl sub_0809945C
_080E70D8:
	ldr r2, _080E70F4  @ =gRam
	ldr r1, _080E710C  @ =0x00000FC2
	add r0, r2, r1
	add r0, r0, r9
	ldrb r1, [r0]
	cmp r1, #0
	beq _080E71AE
	ldr r3, _080E7124  @ =0x000010C2
	add r0, r2, r3
	add r0, r0, r9
	add r1, r1, #20
	strb r1, [r0]
	b _080E71AE
	.byte 0x00
	.byte 0x00
_080E70F4:
	.4byte gRam
_080E70F8:
	.4byte 0x00001072
_080E70FC:
	.4byte 0x00001152
_080E7100:
	.4byte 0x00001142
_080E7104:
	.4byte 0x00000F52
_080E7108:
	.4byte 0x00001032
_080E710C:
	.4byte 0x00000FC2
_080E7110:
	.4byte 0x00000996
_080E7114:
	.4byte 0x000016C4
_080E7118:
	.4byte 0x000016C5
_080E711C:
	.4byte 0x00001622
_080E7120:
	.4byte 0x000016C1
_080E7124:
	.4byte 0x000010C2
_080E7128:
	mov r3, #191
	and r1, r1, r3
	strb r1, [r5]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _080E7160  @ =0x00001012
	add r1, r6, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #127
	and r0, r0, r2
	strb r0, [r1]
	ldrb r0, [r5]
	and r3, r3, r0
	strb r3, [r5]
	ldr r1, _080E7164  @ =0x00001122
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #11
	strb r1, [r0]
	ldr r2, _080E7168  @ =0x000010C2
	add r0, r6, r2
	add r0, r4, r0
	mov r3, r12
	strb r3, [r0]
	b _080E71AE
	.byte 0x00
	.byte 0x00
_080E7160:
	.4byte 0x00001012
_080E7164:
	.4byte 0x00001122
_080E7168:
	.4byte 0x000010C2
_080E716C:
	mov r0, r9
	bl sub_080C5044
	mov r0, r9
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E71AE
	mov r0, r9
	bl Sprite3_Move
	mov r0, r9
	bl sub_080C79F8
	ldr r5, _080E71BC  @ =0x00000FC2
	add r0, r6, r5
	mov r1, r9
	add r2, r1, r0
	ldrb r1, [r2]
	ldrb r0, [r7]
	orr r0, r0, r1
	cmp r0, #0
	bne _080E71AE
	mov r0, #8
	strb r0, [r2]
	mov r0, #16
	mov r2, r8
	strb r0, [r2]
	mov r0, r9
	mov r1, #12
	bl sub_080C35FC
_080E71AE:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E71BC:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E6FA8

