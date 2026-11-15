	THUMB_FUNC_START sub_08057B48
sub_08057B48: @ 0x08057B48
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	bl sub_0802E5E0
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_08057B74:
	add r0, r7, #4
	ldr r1, _08057B84  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08057B88
	b _08057BD4
	.byte 0x00
	.byte 0x00
_08057B84:
	.4byte gUnknown_03006C80
_08057B88:
	add r0, r7, #4
	ldrb r1, [r0]
	add r0, r1, #0
	bl sub_0802E750
	lsl r1, r0, #24
	lsr r2, r1, #24
	mov r0, #81
	mov r1, #1
	bl sub_0804C8A8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _08057BBE
	ldr r0, [r7, #8]
	ldr r1, _08057BD0  @ =gUnknown_03006A30
	add r3, r7, #4
	ldrb r2, [r3]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	str r1, [r0, #76]
_08057BBE:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08057B74
	.byte 0x00
	.byte 0x00
_08057BD0:
	.4byte gUnknown_03006A30
_08057BD4:
	ldr r0, [r7]
	bl DeleteThisEntity
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08057B48

	.byte 0x00
	.byte 0x00
