	THUMB_FUNC_START sub_08048074
sub_08048074: @ 0x08048074
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #1
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _080480E0
	ldr r0, [r7]
	bl sub_08048850
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _080480DE
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #11
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #118
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #150
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #116
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_080480DE:
	b _080480E6
_080480E0:
	ldr r0, [r7]
	bl GetNextFrame
_080480E6:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08048074

	.byte 0x00
	.byte 0x00
