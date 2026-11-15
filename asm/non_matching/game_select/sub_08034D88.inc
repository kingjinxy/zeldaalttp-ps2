	THUMB_FUNC_START sub_08034D88
sub_08034D88: @ 0x08034D88
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	ldrb r0, [r5, #20]
	cmp r0, #0
	beq _08034E54
	ldrb r0, [r5, #24]
	sub r0, r0, #1
	strb r0, [r5, #24]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #255
	bne _08034E7A
	mov r6, #0
	ldr r0, _08034DF0  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r6, r0
	bcs _08034E38
	ldr r0, _08034DF4  @ =gUnknown_03006A58
	mov r8, r0
	mov r7, #31
_08034DB4:
	mov r0, #12
	bl sub_08012494
	add r4, r0, #0
	cmp r4, #0
	beq _08034E2A
	lsl r0, r6, #3
	add r0, r0, r6
	lsl r0, r0, #4
	add r0, r0, r8
	ldr r1, [r0]
	ldrh r1, [r1, #50]
	strh r1, [r4, #50]
	ldr r0, [r0]
	ldrh r0, [r0, #54]
	strh r0, [r4, #54]
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08034DF8
	bl sub_0800099C
	and r0, r0, r7
	ldrh r1, [r4, #50]
	add r0, r0, r1
	strh r0, [r4, #50]
	b _08034E04
	.byte 0x00
	.byte 0x00
_08034DF0:
	.4byte gUnknown_03006C80
_08034DF4:
	.4byte gUnknown_03006A58
_08034DF8:
	bl sub_0800099C
	and r0, r0, r7
	ldrh r1, [r4, #50]
	sub r1, r1, r0
	strh r1, [r4, #50]
_08034E04:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08034E1E
	bl sub_0800099C
	and r0, r0, r7
	ldrh r1, [r4, #50]
	add r0, r0, r1
	strh r0, [r4, #50]
	b _08034E2A
_08034E1E:
	bl sub_0800099C
	and r0, r0, r7
	ldrh r1, [r4, #50]
	sub r1, r1, r0
	strh r1, [r4, #50]
_08034E2A:
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r0, _08034E50  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r6, r0
	bcc _08034DB4
_08034E38:
	mov r0, #30
	strb r0, [r5, #24]
	ldrb r0, [r5, #23]
	sub r0, r0, #1
	strb r0, [r5, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08034E7A
	add r0, r5, #0
	bl DeleteThisEntity
	b _08034E7A
_08034E50:
	.4byte gUnknown_03006C80
_08034E54:
	add r0, r0, #1
	strb r0, [r5, #20]
	mov r4, #1
	strb r4, [r5, #23]
	mov r0, #30
	strb r0, [r5, #24]
	ldrb r0, [r5, #10]
	cmp r0, #0
	bne _08034E7A
	mov r0, #2
	strb r0, [r5, #23]
	bl sub_0800099C
	and r0, r0, r4
	cmp r0, #0
	beq _08034E7A
	ldrb r0, [r5, #23]
	add r0, r0, #1
	strb r0, [r5, #23]
_08034E7A:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034D88

