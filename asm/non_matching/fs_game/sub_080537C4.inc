	THUMB_FUNC_START sub_080537C4
sub_080537C4: @ 0x080537C4
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	beq _08053800
	ldr r0, _080537FC  @ =gUnknown_0201F000
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
	bne _08053800
	ldr r0, [r7]
	bl DeleteThisEntity
	b _080538BE
_080537FC:
	.4byte gUnknown_0201F000
_08053800:
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #120
	ldr r1, [r7]
	ldr r2, [r7]
	add r0, r2, #0
	add r2, r2, #120
	ldrh r3, [r2]
	sub r0, r3, #1
	add r2, r1, #0
	add r1, r1, #120
	ldrh r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r0, #0
	orr r3, r3, r2
	add r2, r3, #0
	strh r2, [r1]
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _080538BE
	ldr r0, _080538C8  @ =0x0000010D
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _080538CC  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _080538CC  @ =gUnknown_03000450
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
	ldr r0, _080538D0  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _080538D0  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, _080538D4  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #10]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r3, [r2]
	mvn r2, r3
	ldr r1, [r1]
	and r2, r2, r1
	str r2, [r0]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	sub r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
_080538BE:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080538C8:
	.4byte 0x0000010D
_080538CC:
	.4byte gUnknown_03000450
_080538D0:
	.4byte gUnknown_0201F000
_080538D4:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_080537C4

