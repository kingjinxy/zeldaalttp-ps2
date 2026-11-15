	THUMB_FUNC_START sub_08053564
sub_08053564: @ 0x08053564
	push {r4,r7,lr}
	sub sp, sp, #20
	mov r7, sp
	str r0, [r7]
	add r0, r1, #0
	add r1, r7, #4
	strh r0, [r1]
	mov r0, #16
	str r0, [r7, #12]
	add r0, r7, #0
	add r0, r0, #16
	mov r1, #3
	strb r1, [r0]
_0805357E:
	add r0, r7, #0
	add r0, r0, #16
	ldrb r1, [r0]
	cmp r1, #0
	bne _0805358A
	b _08053608
_0805358A:
	mov r0, #16
	str r0, [r7, #8]
	add r0, r7, #0
	add r0, r0, #17
	mov r1, #3
	strb r1, [r0]
_08053596:
	add r0, r7, #0
	add r0, r0, #17
	ldrb r1, [r0]
	cmp r1, #0
	bne _080535A2
	b _080535EA
_080535A2:
	add r0, r7, #4
	ldrh r1, [r0]
	ldr r0, [r7]
	ldr r3, [r7, #8]
	add r2, r3, #0
	ldrh r0, [r0, #50]
	add r2, r2, r0
	add r3, r2, #0
	lsl r0, r3, #16
	lsr r2, r0, #16
	ldr r0, [r7]
	ldr r4, [r7, #12]
	add r3, r4, #0
	ldrh r0, [r0, #54]
	add r3, r3, r0
	add r4, r3, #0
	lsl r0, r4, #16
	lsr r3, r0, #16
	ldr r0, [r7]
	bl 0x08001B70
	ldr r0, [r7, #8]
	add r1, r0, #0
	sub r1, r1, #16
	str r1, [r7, #8]
	add r1, r7, #0
	add r1, r1, #17
	add r0, r7, #0
	add r0, r0, #17
	add r1, r7, #0
	add r1, r1, #17
	ldrb r2, [r1]
	sub r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08053596
_080535EA:
	ldr r0, [r7, #12]
	add r1, r0, #0
	sub r1, r1, #16
	str r1, [r7, #12]
	add r1, r7, #0
	add r1, r1, #16
	add r0, r7, #0
	add r0, r0, #16
	add r1, r7, #0
	add r1, r1, #16
	ldrb r2, [r1]
	sub r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0805357E
_08053608:
	add sp, sp, #20
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08053564

