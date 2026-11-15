	THUMB_FUNC_START sub_080519CC
sub_080519CC: @ 0x080519CC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #11]
	cmp r0, #1
	bgt _08051A00
	cmp r0, #0
	blt _08051A00
	b _080519E2
_080519E2:
	ldr r0, _080519FC  @ =0x00000107
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	b _08051A00
	.byte 0x00
	.byte 0x00
_080519FC:
	.4byte 0x00000107
_08051A00:
	mov r0, #16
	bl play_sound
	ldr r0, [r7]
	bl sub_0804C9C8
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08051A26
	ldr r0, [r7]
	bl DeleteThisEntity
_08051A26:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldr r2, [r7]
	ldrb r1, [r2, #23]
	add r3, r1, #0
	lsl r2, r3, #4
	sub r2, r2, r1
	lsl r1, r2, #2
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
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080519CC

	.byte 0x00
	.byte 0x00
