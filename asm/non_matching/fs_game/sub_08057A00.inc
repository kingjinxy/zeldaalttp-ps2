	THUMB_FUNC_START sub_08057A00
sub_08057A00: @ 0x08057A00
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #76]
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #76]
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #54]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #76]
	ldr r2, _08057AF8  @ =gUnknown_08140C88
	ldr r3, [r7]
	ldrb r4, [r3, #24]
	mov r5, #7
	add r3, r4, #0
	and r3, r3, r5
	add r5, r3, #0
	lsl r4, r5, #24
	lsr r3, r4, #24
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #58]
	add r1, r2, r3
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #1
	bne _08057A8E
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #58]
	add r1, r2, #0
	sub r1, r1, #8
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
_08057A8E:
	ldr r0, _08057AFC  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08057ABC
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
_08057ABC:
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	beq _08057B12
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
	bne _08057B00
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08057B12
	.byte 0x00
	.byte 0x00
_08057AF8:
	.4byte gUnknown_08140C88
_08057AFC:
	.4byte gUnknown_03000948
_08057B00:
	ldr r1, _08057B1C  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #109
	ldrb r0, [r1]
	cmp r0, #0
	beq _08057B12
	ldr r0, [r7]
	bl DeleteThisEntity
_08057B12:
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08057B1C:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08057A00

