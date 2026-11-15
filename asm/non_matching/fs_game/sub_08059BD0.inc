	THUMB_FUNC_START sub_08059BD0
sub_08059BD0: @ 0x08059BD0
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	cmp r1, #0
	beq _08059C24
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldr r1, _08059C20  @ =gUnknown_03000450
	ldrh r2, [r2, #50]
	ldrh r3, [r1, #32]
	sub r1, r2, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldr r1, _08059C20  @ =gUnknown_03000450
	ldrh r2, [r2, #54]
	ldrh r3, [r1, #34]
	sub r1, r2, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _08059C4C
	.byte 0x00
	.byte 0x00
_08059C20:
	.4byte gUnknown_03000450
_08059C24:
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #120
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #80
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
_08059C4C:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	mov r2, #0
	ldrsh r0, [r1, r2]
	cmp r0, #0
	bge _08059C84
	ldr r1, [r7]
	mov r3, #50
	ldrsh r0, [r1, r3]
	ldr r1, [r7]
	mov r4, #54
	ldrsh r2, [r1, r4]
	add r1, r2, #0
	mov r2, #0
	mov r3, #0
	bl sub_0800CE74
	ldr r0, _08059C80  @ =gUnknown_0202E1E4
	mov r1, #1
	str r1, [r0]
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08059E2A
	.byte 0x00
	.byte 0x00
_08059C80:
	.4byte gUnknown_0202E1E4
_08059C84:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	mov r2, #0
	ldrsh r0, [r1, r2]
	mov r1, #250
	lsl r1, r1, #1
	cmp r0, r1
	ble _08059CC0
	ldr r1, [r7]
	mov r3, #50
	ldrsh r0, [r1, r3]
	ldr r2, [r7]
	mov r4, #54
	ldrsh r1, [r2, r4]
	mov r2, #250
	lsl r2, r2, #1
	mov r3, #0
	bl sub_0800CE74
	ldr r0, _08059CBC  @ =gUnknown_0202E1E4
	mov r1, #1
	str r1, [r0]
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08059E2A
	.byte 0x00
	.byte 0x00
_08059CBC:
	.4byte gUnknown_0202E1E4
_08059CC0:
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #126
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #125
	mov r4, #0
	ldrsb r4, [r3, r4]
	add r2, r4, #0
	ldrh r3, [r1]
	add r1, r2, r3
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
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #125
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #124
	ldrb r1, [r1]
	ldrb r2, [r3]
	add r1, r1, r2
	add r2, r0, #0
	add r0, r0, #125
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #125
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #16
	ble _08059D3A
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #125
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08059D3A:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #125
	mov r0, #0
	ldrsb r0, [r1, r0]
	mov r1, #16
	cmn r0, r1
	bge _08059D62
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #125
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08059D62:
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #123
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #122
	ldrb r1, [r1]
	ldrb r2, [r3]
	add r1, r1, r2
	add r2, r1, #0
	mov r3, #0
	add r1, r2, #0
	bic r1, r1, r3
	add r2, r0, #0
	add r0, r0, #123
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #122
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #121
	ldrb r1, [r1]
	ldrb r2, [r3]
	add r1, r1, r2
	add r2, r0, #0
	add r0, r0, #122
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #122
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #16
	ble _08059DE0
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #122
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08059DE0:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #122
	mov r0, #0
	ldrsb r0, [r1, r0]
	mov r1, #16
	cmn r0, r1
	bge _08059E08
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #122
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08059E08:
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #126
	mov r4, #0
	ldrsh r2, [r3, r4]
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #123
	ldrb r3, [r4]
	bl sub_0800CE74
_08059E2A:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08059BD0

	.byte 0x00
	.byte 0x00
