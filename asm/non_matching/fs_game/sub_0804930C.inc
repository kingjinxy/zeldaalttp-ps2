	THUMB_FUNC_START sub_0804930C
sub_0804930C: @ 0x0804930C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #116
	ldrb r0, [r1]
	cmp r0, #1
	beq _08049378
	cmp r0, #1
	bgt _0804932A
	cmp r0, #0
	beq _08049338
	b _080494AE
_0804932A:
	cmp r0, #2
	bne _08049330
	b _08049438
_08049330:
	cmp r0, #3
	bne _08049336
	b _08049474
_08049336:
	b _080494AE
_08049338:
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #120
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	cmp r0, #0
	bne _08049376
	ldr r0, [r7]
	bl sub_080494B8
_08049376:
	b _080494AE
_08049378:
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #120
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	cmp r0, #0
	bne _08049436
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #122
	add r2, r0, #0
	add r0, r0, #120
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #117
	ldrb r1, [r1]
	ldrb r2, [r3]
	add r1, r1, r2
	add r2, r1, #0
	mov r3, #31
	add r1, r2, #0
	and r1, r1, r3
	add r2, r0, #0
	add r0, r0, #43
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
	add r1, r1, #118
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #118
	ldrb r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #118
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
	add r1, r1, #118
	ldrb r0, [r1]
	cmp r0, #0
	bne _08049436
	ldr r0, [r7]
	bl sub_080494B8
_08049436:
	b _080494AE
_08049438:
	ldr r0, [r7]
	bl sub_0803CC20
	mov r1, #128
	lsl r1, r1, #6
	ldr r0, [r7]
	bl 0x08003594
	ldr r0, [r7]
	mov r2, #58
	ldrsh r1, [r0, r2]
	mov r0, #2
	cmn r1, r0
	blt _0804946E
	ldr r0, [r7]
	ldrh r1, [r0, #58]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _08049470  @ =0x0000FFFE
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #58]
	ldr r0, [r7]
	bl sub_080494B8
_0804946E:
	b _080494AE
_08049470:
	.4byte 0x0000FFFE
_08049474:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #120
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	cmp r0, #0
	bne _080494AC
	ldr r0, [r7]
	bl sub_080494B8
_080494AC:
	b _080494AE
_080494AE:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804930C

	.byte 0x00
	.byte 0x00
