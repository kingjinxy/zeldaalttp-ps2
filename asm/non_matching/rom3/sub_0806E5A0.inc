	THUMB_FUNC_START sub_0806E5A0
sub_0806E5A0: @ 0x0806E5A0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r3, #0
	ldr r4, _0806E658  @ =gRam
	mov r1, #184
	lsl r1, r1, #5
	add r0, r4, r1
	mov r2, #0
	mov r8, r2
	strb r3, [r0]
	add r1, r1, #135
	add r0, r4, r1
	strb r3, [r0]
	ldr r2, _0806E65C  @ =0x00000B32
	add r0, r4, r2
	ldrh r6, [r0]
	cmp r6, #0
	bne _0806E5D6
	ldr r3, _0806E660  @ =0x00000B3A
	add r0, r4, r3
	ldrh r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	asr r3, r0, #31
	mov r0, #2
	and r3, r3, r0
_0806E5D6:
	ldr r1, _0806E664  @ =0x00000B0A
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0806E5EA
	add r0, r3, #4
	lsl r0, r0, #24
	lsr r3, r0, #24
_0806E5EA:
	ldr r0, _0806E668  @ =0x000016C4
	add r2, r4, r0
	ldr r0, _0806E66C  @ =gUnknown_0814CC6C
	lsr r1, r3, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r3, [r2]
	add r0, r0, r3
	strh r0, [r2]
	mov r0, #182
	lsl r0, r0, #5
	add r7, r4, r0
	ldr r0, _0806E670  @ =gUnknown_0814CC74
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r1, [r7]
	add r5, r0, r1
	strh r5, [r7]
	ldr r2, _0806E674  @ =0x000009B4
	add r3, r4, r2
	ldrb r2, [r3]
	mov r0, #16
	mov r12, r0
	mov r0, #16
	and r0, r0, r2
	cmp r0, #0
	beq _0806E67C
	cmp r6, #2
	bne _0806E652
	mov r0, #161
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #3
	strb r0, [r1]
	mov r0, #15
	and r0, r0, r2
	strb r0, [r3]
	ldr r2, _0806E678  @ =0x000009B5
	add r1, r4, r2
	ldrb r0, [r1]
	mov r3, r12
	orr r0, r0, r3
	strb r0, [r1]
	ldr r1, _0806E660  @ =0x00000B3A
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #2
	beq _0806E652
	add r0, r5, #0
	add r0, r0, #24
	strh r0, [r7]
_0806E652:
	bl sub_08114600
	b _0806E6A6
_0806E658:
	.4byte gRam
_0806E65C:
	.4byte 0x00000B32
_0806E660:
	.4byte 0x00000B3A
_0806E664:
	.4byte 0x00000B0A
_0806E668:
	.4byte 0x000016C4
_0806E66C:
	.4byte gUnknown_0814CC6C
_0806E670:
	.4byte gUnknown_0814CC74
_0806E674:
	.4byte 0x000009B4
_0806E678:
	.4byte 0x000009B5
_0806E67C:
	cmp r6, #2
	beq _0806E6A2
	mov r0, r12
	orr r0, r0, r2
	strb r0, [r3]
	ldr r3, _0806E6B0  @ =0x000009B5
	add r2, r4, r3
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _0806E6B4  @ =0x00000B3A
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #2
	beq _0806E6A2
	add r0, r5, #0
	sub r0, r0, #24
	strh r0, [r7]
_0806E6A2:
	bl sub_08114600
_0806E6A6:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0806E6B0:
	.4byte 0x000009B5
_0806E6B4:
	.4byte 0x00000B3A
	THUMB_FUNC_END sub_0806E5A0

