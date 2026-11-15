	THUMB_FUNC_START sub_08028C54
sub_08028C54: @ 0x08028C54
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r0, [r4, #76]
	add r0, r0, #64
	ldrb r2, [r0]
	cmp r2, #35
	bhi _08028CCA
	ldr r0, _08028C84  @ =gUnknown_0813D0D8
	add r0, r2, r0
	ldrb r2, [r0]
	add r5, r2, #0
	cmp r2, #0
	beq _08028CCA
	mov r0, #8
	strb r0, [r1]
	add r0, r4, #0
	add r0, r0, #69
	ldrb r3, [r0]
	add r1, r0, #0
	cmp r2, r3
	bls _08028C88
	mov r0, #0
	b _08028C8A
	.byte 0x00
	.byte 0x00
_08028C84:
	.4byte gUnknown_0813D0D8
_08028C88:
	sub r0, r3, r5
_08028C8A:
	strb r0, [r1]
	ldrb r1, [r1]
	cmp r1, #0
	beq _08028CAE
	ldr r0, [r4, #96]
	cmp r0, #0
	bne _08028CA6
	cmp r1, #49
	bhi _08028CA6
	add r0, r4, #0
	bl sub_08028CD0
	mov r0, #1
	str r0, [r4, #96]
_08028CA6:
	add r0, r4, #0
	bl sub_08028BE8
	b _08028CCA
_08028CAE:
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	strb r1, [r4, #23]
	ldrb r0, [r4, #10]
	add r0, r0, #1
	lsl r0, r0, #1
	strb r0, [r4, #24]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
_08028CCA:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08028C54

