	THUMB_FUNC_START sub_08051A6C
sub_08051A6C: @ 0x08051A6C
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #1
	beq _08051A7E
	b _08051B24
_08051A7E:
	ldr r0, [r7]
	bl 0x08009308
	add r1, r7, #4
	strh r0, [r1]
	add r0, r7, #4
	ldrh r1, [r0]
	mov r0, #132
	lsl r0, r0, #1
	cmp r1, r0
	bne _08051A9C
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08051B22
_08051A9C:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _08051AF0  @ =gUnknown_0201F000
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #82
	ldrb r3, [r4]
	add r4, r3, #0
	lsl r3, r4, #2
	add r2, r2, r3
	ldr r1, [r1, #96]
	ldr r2, [r2]
	and r1, r1, r2
	ldr r0, [r0, #96]
	cmp r0, r1
	beq _08051B22
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	ldrh r0, [r1]
	cmp r0, #0
	beq _08051AF4
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #126
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	b _08051B26
_08051AF0:
	.4byte gUnknown_0201F000
_08051AF4:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	bl sub_0801478C
	ldr r0, [r7]
	bl sub_0804C9C8
_08051B22:
	b _08051B26
_08051B24:
	b _08051B26
_08051B26:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08051A6C

	.byte 0x00
	.byte 0x00
