	THUMB_FUNC_START sub_08026ACC
sub_08026ACC: @ 0x08026ACC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r4, r0, #0
	mov r0, #1
	strb r0, [r4, #20]
	ldrh r0, [r4, #50]
	strb r0, [r4, #22]
	mov r0, #50
	ldrsh r1, [r4, r0]
	lsl r0, r1, #4
	sub r0, r0, r1
	lsl r0, r0, #2
	strh r0, [r4, #50]
	add r0, r4, #0
	add r0, r0, #82
	ldrb r0, [r0]
	mov r2, #54
	ldrsh r1, [r4, r2]
	bl sub_08012F84
	str r0, [r4, #112]
	add r5, r0, #0
	mov r7, #0
	ldrh r0, [r5]
	ldr r1, _08026B68  @ =0x0000FFFF
	cmp r0, r1
	beq _08026B4A
	mov r2, #252
	lsl r2, r2, #4
	mov r8, r2
	mov r9, r1
	mov r6, #63
_08026B10:
	lsr r0, r0, #13
	sub r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #1
	bhi _08026B3C
	ldrh r2, [r5, #4]
	mov r0, r8
	and r0, r0, r2
	lsr r0, r0, #6
	ldrh r3, [r5, #6]
	mov r1, r8
	and r1, r1, r3
	orr r0, r0, r1
	add r1, r6, #0
	and r1, r1, r2
	add r1, r1, #1
	add r2, r6, #0
	and r2, r2, r3
	add r2, r2, #1
	bl sub_08013754
_08026B3C:
	add r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r5, r5, #8
	ldrh r0, [r5]
	cmp r0, r9
	bne _08026B10
_08026B4A:
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08026B56
	ldrb r0, [r4, #23]
	cmp r7, r0
	bcs _08026B58
_08026B56:
	strb r7, [r4, #23]
_08026B58:
	ldrb r0, [r4, #10]
	cmp r0, #255
	beq _08026B6C
	bl sub_08013D20
	str r0, [r4, #104]
	b _08026B72
	.byte 0x00
	.byte 0x00
_08026B68:
	.4byte 0x0000FFFF
_08026B6C:
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
_08026B72:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08026ACC

	.byte 0x00
	.byte 0x00
