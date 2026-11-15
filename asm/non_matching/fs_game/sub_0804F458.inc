	THUMB_FUNC_START sub_0804F458
sub_0804F458: @ 0x0804F458
	push {r4,r7,lr}
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
	beq _0804F48C
	b _0804F5AA
_0804F48C:
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
	ldr r0, _0804F538  @ =gUnknown_0201F000
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
	bne _0804F540
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r0, #22]
	ldrb r1, [r1, #24]
	cmp r0, r1
	beq _0804F536
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
	ldr r2, _0804F53C  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0804F53C  @ =gUnknown_03000450
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
_0804F536:
	b _0804F5AA
_0804F538:
	.4byte gUnknown_0201F000
_0804F53C:
	.4byte gUnknown_03000450
_0804F540:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	beq _0804F5AA
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, _0804F5B4  @ =gUnknown_03000450
	ldrh r2, [r1, #24]
	sub r1, r0, r2
	asr r0, r1, #4
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r2, _0804F5B4  @ =gUnknown_03000450
	ldrh r3, [r2, #26]
	sub r1, r1, r3
	asr r2, r1, #4
	add r1, r2, #0
	lsl r2, r1, #6
	add r1, r2, #0
	orr r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	bl sub_0801478C
	ldr r0, [r7]
	add r1, r0, #0
	add r1, r1, #104
	ldr r0, [r7]
	bl sub_0804F6EC
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	sub r1, r2, #1
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
_0804F5AA:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804F5B4:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_0804F458

