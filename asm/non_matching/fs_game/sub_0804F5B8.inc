	THUMB_FUNC_START sub_0804F5B8
sub_0804F5B8: @ 0x0804F5B8
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	cmp r1, #0
	bne _0804F608
	ldr r0, _0804F604  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r7]
	ldr r0, [r0]
	ldr r1, [r1, #96]
	and r0, r0, r1
	ldr r1, [r7]
	ldr r2, [r1, #96]
	cmp r0, r2
	bne _0804F602
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #21]
	add r1, r2, #1
	ldrb r2, [r0, #21]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #21]
_0804F602:
	b _0804F6DE
_0804F604:
	.4byte gUnknown_0201F000
_0804F608:
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
	bne _0804F6DE
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r0, #22]
	ldrb r1, [r1, #24]
	cmp r0, r1
	beq _0804F6C4
	ldr r0, [r7]
	add r1, r0, #0
	add r1, r1, #100
	ldr r0, [r7]
	bl sub_0804F6EC
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #108
	ldrh r0, [r1]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0804F6C0  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0804F6C0  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	add r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	mov r0, #7
	bl play_sound
	b _0804F6DE
	.byte 0x00
	.byte 0x00
_0804F6C0:
	.4byte gUnknown_03000450
_0804F6C4:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #108
	ldrh r0, [r1]
	ldr r1, _0804F6E8  @ =0x00000159
	cmp r0, r1
	beq _0804F6D8
	mov r0, #16
	bl play_sound
_0804F6D8:
	ldr r0, [r7]
	bl DeleteThisEntity
_0804F6DE:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804F6E8:
	.4byte 0x00000159
	THUMB_FUNC_END sub_0804F5B8

