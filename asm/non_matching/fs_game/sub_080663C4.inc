	THUMB_FUNC_START sub_080663C4
sub_080663C4: @ 0x080663C4
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	bl sub_0803DF84
	ldr r0, [r7]
	ldr r1, [r0, #96]
	add r0, r1, #0
	bl 0x08000A40
	lsl r1, r0, #24
	lsr r0, r1, #24
	ldr r1, _08066408  @ =gUnknown_03006C80
	ldrb r2, [r1]
	mov r3, #16
	sub r1, r3, r2
	cmp r0, r1
	bne _080663FE
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
_080663FE:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066408:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_080663C4

