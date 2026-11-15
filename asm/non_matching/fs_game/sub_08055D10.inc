	THUMB_FUNC_START sub_08055D10
sub_08055D10: @ 0x08055D10
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, _08055D70  @ =gUnknown_03000450
	ldrh r2, [r1, #24]
	sub r1, r0, r2
	asr r0, r1, #4
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r2, _08055D70  @ =gUnknown_03000450
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
	bl sub_080093C8
	add r1, r7, #4
	strb r0, [r1]
	ldr r0, [r7]
	add r1, r7, #4
	ldrb r0, [r0, #24]
	ldrb r1, [r1]
	cmp r0, r1
	beq _08055D9A
	ldr r0, [r7]
	add r1, r7, #4
	ldrb r2, [r1]
	cmp r2, #15
	bne _08055D74
	ldr r2, [r7]
	ldrb r1, [r2, #11]
	b _08055D78
	.byte 0x00
	.byte 0x00
_08055D70:
	.4byte gUnknown_03000450
_08055D74:
	ldr r2, [r7]
	ldrb r1, [r2, #23]
_08055D78:
	str r1, [r0, #96]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #22]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #22]
_08055D9A:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08055D10

	.byte 0x00
	.byte 0x00
