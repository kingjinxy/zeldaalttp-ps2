	THUMB_FUNC_START sub_080131FC
sub_080131FC: @ 0x080131FC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r8, r0
	mov r9, r1
	mov r4, #0
	ldrb r0, [r0, #2]
	cmp r4, r0
	bcs _0801329E
_08013210:
	mov r0, r8
	mov r1, r9
	bl sub_08013120
	ldr r2, _080132AC  @ =gUnknown_02016330
	add r7, r4, #1
	lsl r1, r7, #2
	add r1, r1, r2
	ldr r2, [r0, #4]
	str r2, [r1]
	ldrh r0, [r0]
	lsl r2, r4, #1
	mov r3, r8
	add r3, r3, #4
	add r6, r3, r2
	ldrb r1, [r6]
	add r2, r2, #1
	add r5, r3, r2
	ldrb r2, [r5]
	bl sub_08015FE4
	lsl r0, r7, #24
	lsr r4, r0, #24
	add r0, r4, #0
	mov r1, #0
	bl sub_08012F84
	cmp r0, #0
	beq _0801325C
	add r0, r4, #0
	mov r1, #0
	bl sub_08012F84
	ldrb r1, [r6]
	ldrb r2, [r5]
	add r3, r7, #0
	bl sub_08013C8C
_0801325C:
	add r0, r4, #0
	mov r1, #1
	bl sub_08012F84
	cmp r0, #0
	beq _0801327A
	add r0, r4, #0
	mov r1, #1
	bl sub_08012F84
	ldrb r1, [r6]
	ldrb r2, [r5]
	add r3, r7, #0
	bl sub_08013C8C
_0801327A:
	add r0, r4, #0
	mov r1, #3
	bl sub_08012F84
	cmp r0, #0
	beq _08013296
	add r0, r4, #0
	mov r1, #3
	bl sub_08012F84
	mov r1, r8
	add r2, r4, #0
	bl sub_0801303C
_08013296:
	mov r1, r8
	ldrb r1, [r1, #2]
	cmp r4, r1
	bcc _08013210
_0801329E:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080132AC:
	.4byte gUnknown_02016330
	THUMB_FUNC_END sub_080131FC

