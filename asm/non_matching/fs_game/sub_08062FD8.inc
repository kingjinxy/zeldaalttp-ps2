	THUMB_FUNC_START sub_08062FD8
sub_08062FD8: @ 0x08062FD8
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _08063030  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _08063030  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	mov r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #1
	bne _08063024
	b _080630FC
_08063024:
	cmp r0, #1
	bgt _08063034
	cmp r0, #0
	beq _08063042
	b _0806332E
	.byte 0x00
	.byte 0x00
_08063030:
	.4byte gUnknown_03000450
_08063034:
	cmp r0, #2
	bne _0806303A
	b _080631B8
_0806303A:
	cmp r0, #3
	bne _08063040
	b _08063272
_08063040:
	b _0806332E
_08063042:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	sub r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	b _0806332E
_080630FC:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	b _0806332E
_080631B8:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	sub r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	b _0806332E
_08063272:
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	sub r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #63
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	ldr r1, [r7, #4]
	ldrh r0, [r1]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #7
	bl sub_08014658
	b _0806332E
_0806332E:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08062FD8

	.byte 0x00
	.byte 0x00
