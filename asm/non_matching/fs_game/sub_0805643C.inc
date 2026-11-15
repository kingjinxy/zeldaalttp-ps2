	THUMB_FUNC_START sub_0805643C
sub_0805643C: @ 0x0805643C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _080564B0
	mov r0, #2
	mov r1, #8
	bl sub_0800C0B0
	mov r0, #40
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	mov r0, #40
	mov r1, #3
	mov r2, #0
	bl sub_0804C8A8
	ldr r0, [r7]
	bl DeleteThisEntity
	ldr r1, _080564B8  @ =gSubState
	ldr r0, _080564B8  @ =gSubState
	ldr r1, _080564B8  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _080564BC  @ =0x0000020A
	add r0, r1, #0
	bl play_sound
	mov r1, #217
	lsl r1, r1, #1
	add r0, r1, #0
	bl play_sound
_080564B0:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_080564B8:
	.4byte gSubState
_080564BC:
	.4byte 0x0000020A
	THUMB_FUNC_END sub_0805643C

