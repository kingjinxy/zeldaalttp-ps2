	THUMB_FUNC_START sub_0804721C
sub_0804721C: @ 0x0804721C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	ldrb r0, [r1]
	cmp r0, #0
	beq _0804725A
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrb r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #126
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804725A:
	ldr r0, _08047310  @ =gUnknown_0813F10C
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrb r1, [r2]
	lsr r2, r1, #4
	add r1, r2, #0
	lsl r2, r1, #24
	lsr r1, r2, #24
	add r2, r0, r1
	ldrb r0, [r2]
	ldr r1, _08047314  @ =gUnknown_03000E20
	ldrh r2, [r1]
	and r0, r0, r2
	cmp r0, #0
	bne _080472BC
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r3, [r7]
	add r2, r3, #0
	add r2, r3, #0
	add r2, r2, #120
	str r2, [r7, #4]
	ldr r3, [r7, #4]
	mov r2, #0
	ldrsh r3, [r3, r2]
	str r3, [r7, #8]
	ldr r3, [r7]
	mov r8, r3
	mov r3, r8
	mov r2, #122
	add r8, r8, r2
	mov r3, r8
	mov r2, #0
	ldrsh r3, [r3, r2]
	str r3, [r7, #4]
	ldr r2, [r7, #8]
	ldr r3, [r7, #4]
	bl 0x08003F54
	lsl r2, r0, #24
	lsr r1, r2, #24
	ldr r0, [r7]
	bl 0x080040C4
_080472BC:
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	bl sub_080660BC
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldr r0, [r7]
	ldrh r1, [r1]
	ldrh r0, [r0, #50]
	sub r1, r1, r0
	add r0, r1, #0
	add r1, r0, #2
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #4
	bhi _0804739A
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #122
	ldr r0, [r7]
	ldrh r1, [r1]
	ldrh r0, [r0, #54]
	sub r1, r1, r0
	add r0, r1, #0
	add r1, r0, #2
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #4
	bhi _0804739A
	ldr r0, [r7]
	ldr r1, [r0, #116]
	ldrh r0, [r1]
	ldr r1, _08047318  @ =0x0000FFFF
	cmp r0, r1
	bne _0804731C
	mov r0, #0
	b _0804739E
_08047310:
	.4byte gUnknown_0813F10C
_08047314:
	.4byte gUnknown_03000E20
_08047318:
	.4byte 0x0000FFFF
_0804731C:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldr r4, [r2, #116]
	add r2, r4, #2
	str r2, [r1, #116]
	add r1, r0, #0
	add r0, r0, #120
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldrh r1, [r4]
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldr r5, [r2, #116]
	add r2, r5, #2
	str r2, [r1, #116]
	add r1, r0, #0
	add r0, r0, #122
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldrh r1, [r5]
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldr r6, [r2, #116]
	add r2, r6, #2
	str r2, [r1, #116]
	ldrh r2, [r6]
	add r1, r2, #0
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #126
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #2
	b _0804739E
_0804739A:
	mov r0, #1
	b _0804739E
_0804739E:
	add sp, sp, #12
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804721C

	.byte 0x00
	.byte 0x00
