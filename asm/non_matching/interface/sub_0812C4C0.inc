	THUMB_FUNC_START sub_0812C4C0
sub_0812C4C0: @ 0x0812C4C0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r3, r0, #0
	add r6, r1, #0
	add r7, r2, #0
	lsl r0, r3, #3
	add r0, r0, r3
	lsl r0, r0, #3
	ldr r1, _0812C544  @ =gUnknown_03001C88
	add r5, r0, r1
	add r4, r5, #0
	add r4, r4, #66
	ldrb r0, [r4]
	cmp r0, #0
	beq _0812C4E6
	add r0, r3, #0
	bl sub_0812C5B4
_0812C4E6:
	str r6, [r5, #4]
	str r7, [r5]
	add r1, r5, #0
	add r1, r1, #67
	mov r0, #0
	strb r0, [r1]
	add r0, r5, #0
	bl sub_0812C39C
	ldr r0, [r5, #4]
	mov r7, #0
	ldrsb r7, [r0, r7]
	add r0, r0, #2
	mov r6, #0
	mov r8, r4
	cmp r6, r7
	bge _0812C532
	add r4, r0, #0
_0812C50A:
	ldrh r0, [r4]
	cmp r0, #0
	beq _0812C52A
	bl sub_0812BD28
	lsl r2, r6, #2
	add r1, r5, #0
	add r1, r1, #8
	add r1, r1, r2
	str r0, [r1]
	ldrh r1, [r4]
	ldr r2, [r5, #4]
	add r2, r2, r1
	add r1, r5, #0
	bl sub_0812BD50
_0812C52A:
	add r4, r4, #2
	add r6, r6, #1
	cmp r6, r7
	blt _0812C50A
_0812C532:
	mov r0, #1
	mov r1, r8
	strb r0, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812C544:
	.4byte gUnknown_03001C88
	THUMB_FUNC_END sub_0812C4C0

