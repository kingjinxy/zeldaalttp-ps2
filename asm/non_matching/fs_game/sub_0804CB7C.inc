	THUMB_FUNC_START sub_0804CB7C
sub_0804CB7C: @ 0x0804CB7C
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r4, r1, #0
	add r1, r2, #0
	add r0, r3, #0
	add r2, r7, #4
	add r3, r4, #0
	strb r3, [r2]
	add r2, r7, #5
	strb r1, [r2]
	add r1, r7, #6
	strb r0, [r1]
	add r0, r7, #4
	ldrb r1, [r0]
	add r0, r7, #5
	ldrb r2, [r0]
	mov r0, #96
	bl sub_0804C8A8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	bne _0804CBB2
	mov r0, #0
	b _0804CCB2
_0804CBB2:
	ldr r1, [r7, #8]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r0, [r7, #8]
	add r1, r7, #6
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldrb r2, [r0, #27]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #27]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #27]
	ldr r0, [r7, #8]
	ldr r1, [r7, #8]
	ldr r2, [r7]
	ldrb r3, [r2, #30]
	lsl r4, r3, #28
	lsr r2, r4, #28
	add r4, r2, #0
	lsl r3, r4, #4
	ldrb r4, [r1, #30]
	mov r5, #15
	and r4, r4, r5
	add r5, r4, #0
	add r4, r5, #0
	orr r4, r4, r3
	add r3, r4, #0
	strb r3, [r1, #30]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldrb r2, [r1, #29]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #29]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #31]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldrb r2, [r1, #28]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #28]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #32
	add r2, r0, #0
	add r0, r0, #32
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #8]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, [r7, #8]
	add r0, r1, #0
	b _0804CCB2
_0804CCB2:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804CB7C

	.byte 0x00
	.byte 0x00
