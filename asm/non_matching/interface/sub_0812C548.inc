	THUMB_FUNC_START sub_0812C548
sub_0812C548: @ 0x0812C548
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r4, r0, #0
	add r6, r1, #0
	add r7, r2, #0
	mov r9, r3
	lsl r0, r4, #3
	add r0, r0, r4
	lsl r0, r0, #3
	ldr r1, _0812C5B0  @ =gUnknown_03001C88
	add r5, r0, r1
	mov r0, #66
	add r0, r0, r5
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0812C574
	add r0, r4, #0
	bl sub_0812C5B4
_0812C574:
	str r6, [r5, #4]
	str r7, [r5]
	add r0, r5, #0
	add r0, r0, #67
	mov r4, #1
	strb r4, [r0]
	add r0, r5, #0
	bl sub_0812C39C
	bl sub_0812BD28
	str r0, [r5, #8]
	ldr r2, [r5, #4]
	mov r3, r9
	lsl r1, r3, #1
	add r1, r1, r2
	ldrh r1, [r1]
	add r2, r2, r1
	add r1, r5, #0
	bl sub_0812BD50
	mov r0, r8
	strb r4, [r0]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812C5B0:
	.4byte gUnknown_03001C88
	THUMB_FUNC_END sub_0812C548

