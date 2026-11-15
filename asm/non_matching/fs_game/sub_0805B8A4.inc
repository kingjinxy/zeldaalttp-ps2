	THUMB_FUNC_START sub_0805B8A4
sub_0805B8A4: @ 0x0805B8A4
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #124
	ldrh r0, [r1]
	cmp r0, #7
	bhi _0805B8C8
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	b _0805BA10
_0805B8C8:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	add r0, r7, #4
	ldr r1, [r7]
	ldr r2, [r1, #84]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #8
	add r1, r2, #0
	mov r2, #7
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	cmp r0, #1
	beq _0805B938
	cmp r0, #1
	bgt _0805B908
	cmp r0, #0
	beq _0805B912
	b _0805B9AA
_0805B908:
	cmp r0, #2
	beq _0805B95E
	cmp r0, #3
	beq _0805B984
	b _0805B9AA
_0805B912:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	add r1, r7, #4
	ldrh r2, [r2, #54]
	ldrh r1, [r1]
	sub r2, r2, r1
	add r3, r2, #0
	add r1, r3, #0
	sub r1, r1, #16
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _0805B9AA
_0805B938:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	add r1, r7, #4
	ldrh r2, [r2, #50]
	ldrh r1, [r1]
	add r2, r2, r1
	add r3, r2, #0
	add r1, r3, #0
	add r1, r1, #17
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	b _0805B9AA
_0805B95E:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	add r1, r7, #4
	ldrh r2, [r2, #54]
	ldrh r1, [r1]
	add r2, r2, r1
	add r3, r2, #0
	add r1, r3, #0
	add r1, r1, #16
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _0805B9AA
_0805B984:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	add r1, r7, #4
	ldrh r2, [r2, #50]
	ldrh r1, [r1]
	sub r2, r2, r1
	add r3, r2, #0
	add r1, r3, #0
	sub r1, r1, #17
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	b _0805B9AA
_0805B9AA:
	add r0, r7, #4
	ldr r1, [r7]
	ldr r2, [r1, #84]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #8
	asr r1, r2, #4
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r3, [r2]
	add r1, r3, #0
	ldrh r0, [r0]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	beq _0805BA10
	ldr r1, [r7]
	add r0, r7, #4
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #42
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	add r0, r7, #4
	ldrh r1, [r0]
	add r0, r1, #0
	lsl r1, r0, #2
	ldr r0, [r7]
	ldrb r0, [r0, #10]
	add r1, r1, r0
	add r0, r1, #0
	add r1, r0, #0
	add r1, r1, #8
	add r2, r1, #0
	lsl r0, r2, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl sub_08003870
_0805BA10:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805B8A4

