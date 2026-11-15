	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08008A02
sub_08008A02: @ 0X08008A02
	ldr r1, [pc, #276]
	movs r4, #42
	ldrb r4, [r0, r4]
	lsrs r4, r4, #1
	lsls r4, r4, #1
	ldrsb r2, [r1, r4]
	adds r4, #1
	ldrsb r3, [r1, r4]
	movs r1, #2
	bl 0x8001b54
	bl 0x8009450
	movs r2, #70
	cmp r1, r2
	beq.n _08008A3C
	bl 0x8009404
	push {r0}
	adds r0, r1, #0
	ldr r1, [pc, #240]
	bl 0x80012d8
	pop {r0}
	bne.n _08008A3C
	ldr r1, [pc, #232]
	bl 0x8003754
	bne.n _08008A58
_08008A3C:
	ldrb r1, [r0, #23]
	subs r1, #1
	strb r1, [r0, #23]
	cmp r1, #12
	bcs.n _08008A4C
	ldr r2, [r0, #12]
	subs r2, #16
	str r2, [r0, #12]
_08008A4C:
	orrs r1, r1
	beq.n _08008A58
	movs r1, #65
	ldrsb r1, [r0, r1]
	orrs r1, r1
	beq.n _08008A7A
_08008A58:
	ldrb r1, [r0, #20]
	adds r1, #1
	strb r1, [r0, #20]
	movs r1, #12
	strb r1, [r0, #23]
	ldr r1, [pc, #192]
	str r1, [r0, #12]
	ldr r1, [r0, #48]
	lsls r1, r1, #1
	bcc.n _08008A70
	eors r1, r1
	str r1, [r0, #48]
_08008A70:
	ldr r1, [r0, #52]
	lsls r1, r1, #1
	bcc.n _08008A7A
	eors r1, r1
	str r1, [r0, #52]
_08008A7A:
	pop {r4, pc}
_08008A7C:
	ldrb r1, [r0, #23]
	orrs r1, r1
	beq.n _08008A88
	subs r1, #1
	strb r1, [r0, #23]
	mov pc, lr
_08008A88:
	push {lr}
	bl sub_08008AD0
	ldr r1, [r0, #12]
	ldr r2, [pc, #148]
	cmp r1, r2
	beq.n _08008A9A
	adds r1, #8
	str r1, [r0, #12]
_08008A9A:
	ldr r1, [r0, #84]
	push {r0, r1}
	bl 0x803cecc
	adds r2, r0, #0
	pop {r0, r1}
	push {r0, r1}
	movs r1, #43
	strb r2, [r0, r1]
	bl 0x803cc20
	pop {r0, r1}
	movs r2, #2
	adds r3, r2, #0
	bl 0x800391c
	beq.n _08008ACE
	push {r0}
	bl 0x8000620
	pop {r0}
	push {r0}
	bl 0x8012540
	pop {r0}
	pop {pc}
_08008ACE:
	pop {pc}
	.syntax unified
	.thumb
