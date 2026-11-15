	THUMB_FUNC_START sub_0805AED4
sub_0805AED4: @ 0x0805AED4
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
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
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #11
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #32
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #224
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, _0805B00C  @ =gUnknown_08429054
	str r1, [r0, #72]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	bl 0x08008D90
	ldr r0, [r7]
	mov r1, #192
	lsl r1, r1, #1
	str r1, [r0, #12]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #4]
	ldr r0, [r7]
	bl 0x08009308
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #100
	ldrh r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strh r2, [r1]
	ldr r0, [r7, #4]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0805B010  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0805B010  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #4
	add r0, r2, r1
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0805B014  @ =0x0000400E
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7, #4]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0805B010  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0805B010  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r0, #0
	ldr r2, _0805B018  @ =0x00002004
	add r3, r0, r2
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #29
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805B00C:
	.4byte gUnknown_08429054
_0805B010:
	.4byte gUnknown_03000450
_0805B014:
	.4byte 0x0000400E
_0805B018:
	.4byte 0x00002004
	THUMB_FUNC_END sub_0805AED4

