	THUMB_FUNC_START sub_08045E98
sub_08045E98: @ 0x08045E98
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #1
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08045EF0
	ldr r0, [r7]
	bl sub_08046FB4
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08045EEA
	ldr r0, [r7]
	bl sub_080470C0
	ldr r0, [r7]
	bl sub_08047678
	add r2, r0, #0
	ldr r0, [r7]
	ldr r1, _08045EEC  @ =gUnknown_0813F058
	lsl r3, r2, #24
	lsr r2, r3, #24
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r1]
	str r2, [r0, #12]
	ldr r0, [r7]
	bl GetNextFrame
_08045EEA:
	b _08045EF6
_08045EEC:
	.4byte gUnknown_0813F058
_08045EF0:
	ldr r0, [r7]
	bl GetNextFrame
_08045EF6:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08045E98

	.byte 0x00
	.byte 0x00
