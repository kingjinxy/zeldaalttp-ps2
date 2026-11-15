	THUMB_FUNC_START sub_08047740
sub_08047740: @ 0x08047740
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08047774  @ =gUnknown_0813F400
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #112
	ldrb r0, [r1]
	cmp r0, #255
	bne _08047778
	ldr r0, [r7]
	bl DeleteThisEntity
	b _080477DE
	.byte 0x00
	.byte 0x00
_08047774:
	.4byte gUnknown_0813F400
_08047778:
	ldr r0, [r7]
	ldr r1, _08047800  @ =gUnknown_0813F410
	ldr r2, [r7]
	ldr r3, [r2, #84]
	add r2, r3, #0
	add r3, r3, #41
	ldrb r2, [r3]
	mov r3, #112
	and r2, r2, r3
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	lsr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #24
	lsr r2, r3, #24
	add r1, r1, r2
	mov r2, #0
	ldrsb r2, [r1, r2]
	add r1, r2, #0
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #58]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	cmp r0, #255
	bne _080477DE
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r1, #84]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #61
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_080477DE:
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	bne _080477F8
	ldr r0, [r7]
	bl sub_0804CA20
	ldr r0, [r7]
	bl DeleteThisEntity
_080477F8:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
_08047800:
	.4byte gUnknown_0813F410
	THUMB_FUNC_END sub_08047740

