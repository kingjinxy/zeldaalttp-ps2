	THUMB_FUNC_START sub_08054974
sub_08054974: @ 0x08054974
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #76]
	add r0, r1, #0
	add r0, r0, #108
	str r0, [r7, #4]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #11]
	add r0, r7, #0
	add r0, r0, #9
	mov r1, #0
	strb r1, [r0]
_080549A2:
	add r0, r7, #0
	add r0, r0, #9
	ldrb r1, [r0]
	cmp r1, #5
	bls _080549AE
	b _08054A24
_080549AE:
	add r0, r7, #0
	add r0, r0, #9
	ldrb r1, [r0]
	add r0, r1, #0
	lsl r1, r0, #1
	ldr r0, [r7, #4]
	add r1, r1, r0
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	bl sub_0800932C
	lsl r1, r0, #16
	lsr r0, r1, #16
	mov r1, #135
	lsl r1, r1, #1
	cmp r0, r1
	bne _08054A0E
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r7, #0
	add r2, r2, #9
	ldrb r3, [r2]
	mov r4, #1
	add r2, r4, #0
	lsl r2, r2, r3
	ldrb r1, [r1, #11]
	orr r1, r1, r2
	ldrb r2, [r0, #11]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #11]
	add r1, r7, #0
	add r1, r1, #8
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_08054A0E:
	add r1, r7, #0
	add r1, r1, #9
	add r0, r7, #0
	add r0, r0, #9
	add r1, r7, #0
	add r1, r1, #9
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _080549A2
_08054A24:
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	add r0, r1, #0
	b _08054A2E
_08054A2E:
	add sp, sp, #12
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08054974

	.byte 0x00
	.byte 0x00
