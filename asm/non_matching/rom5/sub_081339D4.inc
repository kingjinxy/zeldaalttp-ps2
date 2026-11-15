	.syntax unified
	THUMB_FUNC_START sub_081339D4
sub_081339D4: @ 0X081339D4
	ldr r0, [pc, #104]
	ldr r0, [r0, #0]
	ldr r2, [pc, #104]
	ldr r3, [r0, #0]
	cmp r2, r3
	beq.n _081339E2
	bx lr
_081339E2:
	adds r3, #1
	str r3, [r0, #0]
	push {r4, r5, r6, r7, lr}
	mov r1, r8
	mov r2, r9
	mov r3, sl
	mov r4, fp
	push {r0, r1, r2, r3, r4}
	sub sp, #24
	ldrb r1, [r0, #12]
	cmp r1, #0
	beq.n _08133A06
	ldr r2, [pc, #80]
	ldrb r2, [r2, #0]
	cmp r2, #160
	bcs.n _08133A04
	adds r2, #228
_08133A04:
	adds r1, r1, r2
_08133A06:
	str r1, [sp, #20]
	ldr r3, [r0, #32]
	cmp r3, #0
	beq.n _08133A16
	ldr r0, [r0, #36]
	bl sub_08133DF6
	ldr r0, [sp, #24]
_08133A16:
	ldr r3, [r0, #40]
	bl sub_08133DF6
	ldr r0, [sp, #24]
	ldr r3, [r0, #16]
	mov r8, r3
	ldr r5, [pc, #44]
	adds r5, r5, r0
	ldrb r4, [r0, #4]
	subs r7, r4, #1
	bls.n _08133A36
	ldrb r1, [r0, #11]
	subs r1, r1, r7
	mov r2, r8
	muls r2, r1
	adds r5, r5, r2
_08133A36:
	str r5, [sp, #8]
	ldr r6, [pc, #24]
	ldr r3, [pc, #12]
	bx r3
	.byte 0x00
	.byte 0x00
	.4byte 0x03007ff0
	.4byte 0x68736d53
	.4byte 0x03006d19
	.4byte 0x04000006
	.4byte 0x00000350
	.4byte 0x00000630
	.syntax divided
	.thumb
