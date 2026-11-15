	THUMB_FUNC_START sub_0801B0BC
sub_0801B0BC: @ 0x0801B0BC
	push {r4-r6,lr}
	add r5, r0, #0
	ldr r4, _0801B190  @ =gUnknown_08139F38
	add r6, r5, #0
	add r6, r6, #42
	ldrb r0, [r6]
	lsl r0, r0, #2
	add r1, r0, r4
	mov r2, #0
	ldrsb r2, [r1, r2]
	ldrh r1, [r5, #50]
	add r2, r2, r1
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r0, r0, #1
	add r0, r0, r4
	mov r3, #0
	ldrsb r3, [r0, r3]
	ldrh r0, [r5, #54]
	add r3, r3, r0
	lsl r3, r3, #16
	lsr r3, r3, #16
	add r0, r5, #0
	mov r1, #9
	bl 0x080017EC
	ldrb r1, [r6]
	lsl r1, r1, #2
	add r0, r1, #2
	add r0, r0, r4
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldrh r0, [r5, #50]
	add r2, r2, r0
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r1, r1, #3
	add r1, r1, r4
	mov r3, #0
	ldrsb r3, [r1, r3]
	ldrh r1, [r5, #54]
	add r3, r3, r1
	lsl r3, r3, #16
	lsr r3, r3, #16
	add r0, r5, #0
	mov r1, #9
	bl 0x080017EC
	add r2, r5, #0
	add r2, r2, #113
	ldrb r0, [r2]
	cmp r0, #0
	beq _0801B194
	mov r3, #0
	mov r1, #50
	ldrsh r0, [r5, r1]
	add r1, r5, #0
	add r1, r1, #116
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r0, #2
	cmp r0, #4
	bhi _0801B13E
	strh r1, [r5, #50]
	mov r3, #128
_0801B13E:
	mov r1, #54
	ldrsh r0, [r5, r1]
	add r1, r5, #0
	add r1, r1, #118
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r0, #2
	cmp r0, #4
	bhi _0801B158
	strh r1, [r5, #54]
	ldrb r0, [r2]
	orr r3, r3, r0
	strb r3, [r2]
_0801B158:
	ldrb r1, [r2]
	mov r4, #128
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0801B19A
	add r0, r5, #0
	bl 0x0800963C
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801B19A
	add r2, r5, #0
	add r2, r2, #114
	ldrb r1, [r2]
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0801B184
	mov r0, #2
	orr r0, r0, r1
	strb r0, [r2]
_0801B184:
	ldrb r1, [r2]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r2]
	b _0801B19A
	.byte 0x00
	.byte 0x00
_0801B190:
	.4byte gUnknown_08139F38
_0801B194:
	add r0, r5, #0
	bl 0x0800963C
_0801B19A:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801B0BC

