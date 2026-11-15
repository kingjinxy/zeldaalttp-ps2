	THUMB_FUNC_START sub_08058204
sub_08058204: @ 0x08058204
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	ldrb r0, [r1, #21]
	cmp r0, #0
	beq _08058220
	cmp r0, #1
	beq _08058270
	b _080582E8
_08058220:
	mov r0, #31
	mov r1, #63
	bl sub_0800CA84
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, [r7]
	mov r3, #54
	ldrsh r2, [r1, r3]
	add r1, r2, #0
	mov r2, #0
	bl sub_0800CAD4
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #96
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	mov r0, #2
	mov r1, #8
	bl sub_0800C0B0
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #21]
	add r1, r2, #1
	ldrb r2, [r0, #21]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #21]
	b _080582E8
_08058270:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #96
	ldrh r0, [r1]
	ldr r1, _080582B8  @ =0x0000012B
	cmp r0, r1
	bhi _080582BC
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #96
	ldrh r3, [r2]
	add r1, r3, #4
	add r2, r0, #0
	add r0, r0, #96
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #96
	ldrh r2, [r3]
	bl sub_0800CAD4
	b _080582E6
_080582B8:
	.4byte 0x0000012B
_080582BC:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #21]
	bl sub_0800CA3C
_080582E6:
	b _080582E8
_080582E8:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08058204

