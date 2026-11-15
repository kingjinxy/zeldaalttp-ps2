	THUMB_FUNC_START DoObjectEntity
DoObjectEntity: @ 0x0804C170
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _0804C186
	ldr r0, [r7]
	bl sub_0804C200
_0804C186:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	beq _0804C1B8
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #61
	ldrb r3, [r2]
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804C1B8:
	ldr r0, _0804C1FC  @ =gUnknown_0813F998
	ldr r1, [r7]
	ldrb r2, [r1, #9]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	ldr r0, [r7]
	bl sub_08003688
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #65
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #65
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0804C1FC:
	.4byte gUnknown_0813F998
	THUMB_FUNC_END DoObjectEntity

