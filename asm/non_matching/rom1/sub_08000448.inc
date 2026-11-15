	THUMB_FUNC_START sub_08000448
sub_08000448:
	mov r3, lr
	push {r3-r7}
	add r4, r4, #48
	add r5, r5, #48
	ldr r6, [r4, #24]
	ldr r7, [r5, #24]
	ldrh r0, [r4, #2]
	ldrh r1, [r5, #2]
	sub r0, r0, r1
	mov r2, #0
	ldrsb r1, [r6, r2]
	add r0, r0, r1
	ldrsb r1, [r7, r2]
	sub r0, r0, r1
	add r1, r0, #0
	ldrb r2, [r6, #6]
	ldrb r3, [r7, #6]
	add r2, r2, r3
	add r1, r1, r2
	add r2, r2, r2
	cmp r2, r1
	bcc _0800051E
	ldrh r2, [r4, #6]
	ldrh r3, [r5, #6]
	sub r2, r2, r3
	mov r1, #1
	ldrsb r3, [r6, r1]
	add r2, r2, r3
	ldrsb r3, [r7, r1]
	sub r2, r2, r3
	ldrb r1, [r6, #7]
	ldrb r3, [r7, #7]
	add r3, r3, r1
	add r1, r2, #0
	add r2, r2, r3
	add r3, r3, r3
	cmp r3, r2
	bcc _0800051E
	push {r0,r1}
	mov r2, #5
	mov r3, #5
	ldrb r0, [r4, #12]
	lsr r0, r0, #5
	bcc _080004A2
	ldrb r2, [r6, #8]
_080004A2:
	ldrb r0, [r5, #12]
	lsr r0, r0, #5
	bcc _080004AA
	ldrb r3, [r7, #8]
_080004AA:
	add r2, r2, r3
	mov r0, #10
	ldrsh r1, [r5, r0]
	ldrsh r0, [r4, r0]
	sub r0, r0, r1
	add r0, r0, r2
	lsl r2, r2, #1
	cmp r2, r0
	bcc _0800051C
	mov r0, #32
	ldrb r2, [r4, #12]
	and r2, r2, r0
	lsr r2, r2, #3
	ldrb r3, [r5, #12]
	and r3, r3, r0
	lsr r3, r3, #2
	add r2, r2, r3
	pop {r0,r1}
	beq _080004DA
	ldr r3, _0800077C  @ _08000524
	ldr r2, [r3, r2]
	ldr r3, _08000780  @ =_080004DA + 1
	mov lr, r3
	bx r2
_080004DA:
	mov r2, #0
	add r3, r2, #0
	bl sub_08003F54
	add r6, r0, #0
	ldr r0, _08000784  @ =gUnknown_081423A0
	ldrb r1, [r4, #16]
	ldrb r2, [r5, #15]
	lsl r2, r2, #6
	add r1, r1, r2
	ldrb r0, [r0, r1]
	lsl r0, r0, #2
	ldr r1, _08000788  @ =gUnknown_0813E400
	ldr r7, [r1, r0]
	add r0, r4, #0
	sub r0, r0, #48
	add r1, r5, #0
	sub r1, r1, #48
	add r2, r6, #0
	ldr r3, _0800078C  @ =_08000506 + 1
	mov lr, r3
	bx r7

_08000506:
	cmp r0, #0
	beq _0800051E
	cmp r0, #2
	beq _08000516
	strb r6, [r5, #14]
	mov r0, #16
	eor r6, r6, r0
	strb r6, [r4, #14]
_08000516:
	mov r0, #1
	pop {r3-r7}
	bx r3
_0800051C:
	pop {r0-r1}
_0800051E:
	mov r0, #0
	pop {r3-r7}
	bx r3

	.align 2, 0
_08000524:
	.4byte _08000534 + 1
	.4byte _08000538 + 1
	.4byte _08000554 + 1
	.4byte _08000570 + 1

	.align 2, 0
_08000534:
	mov pc, lr

	.align 2, 0
_08000538:
	ldrh r0, [r4, #2]
	ldrh r1, [r5, #2]
	mov r2, #0
	sub r0, r0, r1
	ldrsb r1, [r7, r2]
	sub r0, r0, r1
	ldrh r1, [r4, #6]
	ldrh r2, [r5, #6]
	sub r1, r1, r2
	mov r3, #1
	ldrsb r2, [r7, r3]
	sub r1, r1, r2
	mov pc, lr

	.align 2, 0
_08000554:
	ldrh r0, [r4, #2]
	ldrh r1, [r5, #2]
	sub r0, r0, r1
	mov r2, #0
	ldrsb r1, [r6, r2]
	add r0, r0, r1
	ldrh r1, [r4, #6]
	ldrh r2, [r5, #6]
	sub r1, r1, r2
	mov r3, #1
	ldrsb r2, [r6, r3]
	add r1, r1, r2
	mov pc, lr

	.align 2, 0
_08000570:
	ldrh r0, [r4, #2]
	ldrh r1, [r5, #2]
	sub r0, r0, r1
	ldrh r1, [r4, #6]
	ldrh r2, [r5, #6]
	sub r1, r1, r2
	mov pc, lr

