	THUMB_FUNC_START sub_08055DA4
sub_08055DA4: @ 0x08055DA4
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #22]
	sub r1, r2, #1
	ldrb r2, [r0, #22]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #22]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08055E76
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
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, _08055E80  @ =gUnknown_03000450
	ldrh r2, [r1, #24]
	sub r1, r0, r2
	asr r0, r1, #4
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r2, _08055E80  @ =gUnknown_03000450
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
	add r1, r0, #0
	ldr r0, [r7]
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #82
	ldrb r0, [r1]
	ldr r1, [r7]
	ldr r2, [r1, #96]
	add r1, r2, #0
	bl sub_08012F84
	ldr r1, _08055E84  @ =gUnknown_0201EFF8
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r3, r1, r2
	ldrh r1, [r3]
	ldr r2, _08055E84  @ =gUnknown_0201EFF8
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #82
	ldrb r3, [r4]
	add r4, r3, #0
	lsl r3, r4, #2
	add r2, r2, #2
	add r3, r2, r3
	ldrh r2, [r3]
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #82
	ldrb r3, [r4]
	bl sub_08013C8C
_08055E76:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08055E80:
	.4byte gUnknown_03000450
_08055E84:
	.4byte gUnknown_0201EFF8
	THUMB_FUNC_END sub_08055DA4

