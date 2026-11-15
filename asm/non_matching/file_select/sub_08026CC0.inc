	THUMB_FUNC_START sub_08026CC0
sub_08026CC0: @ 0x08026CC0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r5, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r9, r1
	add r7, r5, #0
	add r7, r7, #100
	ldrh r0, [r7]
	bl 0x08000A70
	lsl r0, r0, #24
	lsr r6, r0, #24
	bl sub_080123E8
	add r4, r0, #0
	cmp r4, #0
	beq _08026D50
	lsl r0, r6, #3
	ldr r1, [r5, #112]
	add r1, r1, r0
	mov r0, #82
	add r0, r0, r5
	mov r8, r0
	ldrb r2, [r0]
	add r0, r4, #0
	bl 0x0800A148
	lsl r0, r0, #24
	cmp r0, #0
	beq _08026D50
	ldrb r1, [r4, #9]
	add r0, r4, #0
	add r0, r0, #112
	strb r1, [r0]
	ldrb r0, [r4, #10]
	add r1, r4, #0
	add r1, r1, #113
	strb r0, [r1]
	ldrb r0, [r4, #11]
	add r1, r1, #1
	strb r0, [r1]
	str r5, [r4, #96]
	add r1, r6, #1
	add r0, r4, #0
	add r0, r0, #104
	strb r1, [r0]
	mov r1, r8
	ldrb r0, [r1]
	add r1, r4, #0
	add r1, r1, #82
	strb r0, [r1]
	mov r0, #6
	strb r0, [r4, #8]
	mov r0, #10
	strb r0, [r4, #9]
	mov r0, r9
	strb r0, [r4, #24]
	add r1, r5, #0
	add r1, r1, #98
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r1, _08026D5C  @ =gUnknown_08137B10
	lsl r0, r6, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldrh r1, [r7]
	orr r0, r0, r1
	strh r0, [r7]
_08026D50:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08026D5C:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_08026CC0

