	THUMB_FUNC_START sub_08015888
sub_08015888: @ 0x08015888
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	add r4, r2, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r6, r1, #0
	lsl r4, r4, #24
	lsr r0, r4, #24
	mov r8, r0
	add r7, r5, #0
	add r7, r7, #80
	ldrh r0, [r7]
	bl sub_08015DC0
	ldr r1, _08015958  @ =gUnknown_08137B90
	lsr r4, r4, #27
	lsl r4, r4, #1
	add r4, r4, r1
	mov r2, #0
	ldrsh r1, [r4, r2]
	add r1, r6, r1
	ldr r2, _0801595C  @ =0x00002004
	add r0, r0, r2
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080158CC
	sub r0, r0, #32
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	bhi _0801594C
_080158CC:
	bl sub_080123E8
	add r2, r0, #0
	cmp r2, #0
	beq _0801594C
	mov r4, #0
	mov r0, #6
	strb r0, [r2, #8]
	mov r0, #7
	strb r0, [r2, #9]
	strb r4, [r2, #10]
	add r0, r2, #0
	add r0, r0, #43
	mov r1, r8
	strb r1, [r0]
	mov r0, #63
	and r0, r0, r6
	lsl r0, r0, #4
	add r0, r0, #8
	strh r0, [r2, #50]
	mov r0, #252
	lsl r0, r0, #4
	and r0, r0, r6
	lsr r0, r0, #2
	add r0, r0, #8
	strh r0, [r2, #54]
	ldrh r1, [r7]
	add r0, r2, #0
	add r0, r0, #80
	strh r1, [r0]
	mov r0, #6
	add r1, r2, #0
	bl sub_08012728
	ldr r2, _08015960  @ =gUnknown_03006A30
	ldrb r1, [r5, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	mov r1, #160
	strb r1, [r0, #6]
	ldrb r1, [r5, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	mov r1, #5
	strb r1, [r0, #12]
	ldrb r0, [r5, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	mov r0, #1
	orr r0, r0, r2
	strh r0, [r1, #54]
	strh r4, [r5, #48]
	strh r4, [r5, #52]
	add r0, r5, #0
	add r0, r0, #43
	mov r2, r8
	strb r2, [r0]
_0801594C:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08015958:
	.4byte gUnknown_08137B90
_0801595C:
	.4byte 0x00002004
_08015960:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08015888

