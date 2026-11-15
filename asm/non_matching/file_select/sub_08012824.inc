	THUMB_FUNC_START sub_08012824
sub_08012824: @ 0x08012824
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r8, r1
	lsl r2, r2, #24
	lsr r2, r2, #24
	mov r9, r2
	bl sub_080123E8
	add r6, r0, #0
	cmp r6, #0
	beq _080128D6
	mov r1, #0
	mov r0, #1
	strb r0, [r6, #8]
	strb r1, [r6, #9]
	strb r7, [r6, #10]
	ldrb r1, [r6, #31]
	mov r4, #63
	add r0, r4, #0
	and r0, r0, r1
	mov r5, #128
	orr r0, r0, r5
	strb r0, [r6, #31]
	lsl r1, r7, #5
	add r0, r6, #0
	add r0, r0, #32
	strb r1, [r0]
	add r1, r6, #0
	add r1, r1, #60
	add r0, r7, #0
	orr r0, r0, r5
	strb r0, [r1]
	add r1, r1, #10
	mov r0, #2
	strb r0, [r1]
	add r2, r7, #7
	mov r0, #15
	add r1, r2, #0
	and r1, r1, r0
	ldrb r3, [r6, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r3
	orr r0, r0, r1
	mov r1, #15
	and r2, r2, r1
	lsl r2, r2, #4
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r6, #30]
	ldrb r0, [r6, #29]
	and r4, r4, r0
	orr r4, r4, r5
	strb r4, [r6, #29]
	mov r1, r8
	lsl r0, r1, #4
	add r0, r0, #8
	strh r0, [r6, #50]
	mov r1, r9
	lsl r0, r1, #4
	add r0, r0, #8
	strh r0, [r6, #54]
	add r1, r6, #0
	add r1, r1, #42
	mov r0, #4
	strb r0, [r1]
	ldr r0, _080128E4  @ =gUnknown_03006C80
	add r0, r0, #96
	add r0, r7, r0
	ldrb r0, [r0]
	add r1, r1, #27
	strb r0, [r1]
	mov r0, #1
	add r1, r6, #0
	bl sub_08012728
	ldr r1, _080128E8  @ =gUnknown_03006A30
	lsl r0, r7, #3
	add r0, r0, r7
	lsl r0, r0, #4
	add r1, r1, #40
	add r0, r0, r1
	str r6, [r0]
_080128D6:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080128E4:
	.4byte gUnknown_03006C80
_080128E8:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08012824

