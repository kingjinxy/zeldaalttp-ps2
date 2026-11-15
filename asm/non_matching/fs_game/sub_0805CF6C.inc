	THUMB_FUNC_START sub_0805CF6C
sub_0805CF6C: @ 0x0805CF6C
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl 0x08003B64
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805CF84
	b _0805D0C0
_0805CF84:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	bl sub_0800932C
	add r1, r7, #0
	add r1, r1, #8
	strh r0, [r1]
	ldrh r0, [r1]
	ldr r1, _0805D078  @ =0x00004009
	cmp r0, r1
	bne _0805CFA8
	b _0805D0C0
_0805CFA8:
	add r0, r7, #0
	add r0, r0, #8
	ldrh r1, [r0]
	ldr r2, _0805D07C  @ =0xFFFFBFF6
	add r0, r1, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #3
	bhi _0805D0A0
	ldr r0, [r7]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r2, r1, #0
	sub r2, r2, #10
	add r1, r2, #0
	mov r2, #3
	and r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #3
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #32
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	mov r0, #21
	bl sub_08003DFC
	ldr r0, [r7]
	bl sub_0805D4B0
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldr r1, _0805D080  @ =gUnknown_08137B90
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #43
	ldrb r2, [r3]
	lsr r3, r2, #3
	add r2, r3, #0
	lsl r3, r2, #24
	lsr r2, r3, #24
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	bl sub_0800932C
	add r1, r7, #0
	add r1, r1, #8
	strh r0, [r1]
	add r0, r7, #0
	add r0, r0, #8
	ldrh r1, [r0]
	mov r0, #164
	lsl r0, r0, #1
	cmp r1, r0
	beq _0805D084
	add r0, r7, #0
	add r0, r0, #8
	ldrh r1, [r0]
	mov r0, #165
	lsl r0, r0, #1
	cmp r1, r0
	beq _0805D084
	b _0805D098
	.byte 0x00
	.byte 0x00
_0805D078:
	.4byte 0x00004009
_0805D07C:
	.4byte 0xFFFFBFF6
_0805D080:
	.4byte gUnknown_08137B90
_0805D084:
	ldr r0, [r7]
	ldrh r1, [r0, #58]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0805D09C  @ =0x0000FFFE
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #58]
_0805D098:
	b _0805D0C0
	.byte 0x00
	.byte 0x00
_0805D09C:
	.4byte 0x0000FFFE
_0805D0A0:
	mov r0, #15
	mov r1, #4
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0805D0BA
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_0805D0BA:
	ldr r0, [r7]
	bl DeleteThisEntity
_0805D0C0:
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805CF6C

