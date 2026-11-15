	THUMB_FUNC_START sub_08053ED0
sub_08053ED0: @ 0x08053ED0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08053F16
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #20]
	mov r0, #64
	bl play_sound
	b _08053F70
_08053F16:
	ldr r0, _08053F78  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r1, #0
	mov r1, #9
	mov r2, #3
	bl sub_08053B24
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08053F70
	ldr r0, _08053F78  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _08053F78  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	mov r1, #128
	lsl r1, r1, #5
	orr r2, r2, r1
	str r2, [r0]
	mov r0, #16
	bl play_sound
	ldr r0, [r7]
	bl DeleteThisEntity
_08053F70:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08053F78:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08053ED0

