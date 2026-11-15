	THUMB_FUNC_START sub_08028BE8
sub_08028BE8: @ 0x08028BE8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r8, r0
	mov r0, #15
	mov r1, #15
	mov r2, #0
	bl sub_0804C8A8
	add r7, r0, #0
	cmp r7, #0
	beq _08028C46
	bl 0x0800099C
	add r6, r0, #0
	bl 0x0800099C
	add r5, r0, #0
	ldr r0, _08028C50  @ =gUnknown_0813D0D4
	mov r2, r8
	ldrb r1, [r2, #10]
	add r0, r1, r0
	mov r4, #0
	ldrsb r4, [r0, r4]
	add r1, r1, #2
	add r0, r6, #0
	bl __umodsi3
	lsl r0, r0, #4
	add r4, r4, r0
	mov r0, #7
	and r5, r5, r0
	add r4, r4, r5
	sub r4, r4, #4
	lsl r4, r4, #16
	bl 0x0800099C
	add r3, r0, #0
	mov r0, #31
	and r3, r3, r0
	sub r3, r3, #16
	lsl r3, r3, #16
	mov r0, r8
	add r1, r7, #0
	add r2, r4, #0
	bl sub_0803D4A4
_08028C46:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08028C50:
	.4byte gUnknown_0813D0D4
	THUMB_FUNC_END sub_08028BE8

