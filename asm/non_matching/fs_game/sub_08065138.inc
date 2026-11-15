	THUMB_FUNC_START sub_08065138
sub_08065138: @ 0x08065138
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #120
	ldr r1, [r7]
	ldr r2, [r1, #124]
	ldrh r0, [r0]
	ldrh r1, [r2]
	cmp r0, r1
	bne _0806519C
	ldr r0, [r7]
	bl 0x08003828
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0806519A
	ldr r0, [r7]
	mov r1, #0
	bl 0x08003870
	bl 0x0800099C
	add r1, r0, #0
	ldr r0, [r7]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	add r1, r2, #1
	add r2, r0, #0
	add r0, r0, #40
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0806519A:
	b _0806521A
_0806519C:
	ldr r0, _08065224  @ =gUnknown_08142194
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r0, [r7]
	bl sub_0804CABC
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08065214
	ldr r0, [r7, #4]
	ldrb r1, [r0, #11]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #11]
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldrh r2, [r1, #54]
	add r1, r2, #0
	add r1, r1, #8
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldrh r2, [r1, #58]
	add r1, r2, #0
	sub r1, r1, #8
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #144
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08065214:
	ldr r0, [r7]
	bl DeleteThisEntity
_0806521A:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08065224:
	.4byte gUnknown_08142194
	THUMB_FUNC_END sub_08065138

