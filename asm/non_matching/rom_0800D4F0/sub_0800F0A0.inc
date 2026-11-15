	THUMB_FUNC_START sub_0800F0A0
sub_0800F0A0: @ 0x0800F0A0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r4, r1, #0
	ldr r2, _0800F0FC  @ =gUnknown_08427474
	ldrb r1, [r0, #4]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r5, [r1]
	ldrb r2, [r0, #3]
	lsr r1, r2, #3
	lsl r1, r1, #6
	ldr r0, [r0, #8]
	add r3, r0, r1
	mov r0, #7
	and r2, r2, r0
	lsl r2, r2, #24
	lsr r0, r2, #24
	cmp r0, #0
	bne _0800F100
	mov r2, #64
	mov r7, #15
	mov r6, #15
_0800F0D4:
	ldrb r0, [r4]
	add r4, r4, #1
	add r1, r0, #0
	and r1, r1, r6
	add r1, r5, r1
	lsr r0, r0, #4
	and r0, r0, r7
	add r0, r0, r5
	ldrb r1, [r1]
	ldrb r0, [r0, #16]
	orr r1, r1, r0
	strb r1, [r3]
	add r3, r3, #1
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _0800F0D4
	b _0800F17E
	.byte 0x00
	.byte 0x00
_0800F0FC:
	.4byte gUnknown_08427474
_0800F100:
	mov r6, #16
	lsr r2, r2, #25
	mov r8, r2
	add r1, r0, #1
	mov r2, #1
	mov r9, r2
	and r2, r2, r0
	mov r9, r2
	mov r0, #14
	and r1, r1, r0
	lsl r1, r1, #24
	mov r10, r1
_0800F118:
	add r4, r4, r8
	add r3, r3, r8
	mov r0, r9
	cmp r0, #0
	beq _0800F13C
	ldrb r0, [r4]
	add r4, r4, #1
	ldrb r2, [r3]
	mov r1, #15
	and r1, r1, r2
	lsr r0, r0, #4
	mov r2, #15
	and r0, r0, r2
	add r0, r0, r5
	ldrb r0, [r0, #16]
	orr r1, r1, r0
	strb r1, [r3]
	add r3, r3, #1
_0800F13C:
	mov r0, r10
	lsr r2, r0, #24
	sub r6, r6, #1
	str r6, [sp]
	cmp r2, #7
	bhi _0800F174
	mov r1, #15
	mov r12, r1
	mov r7, #15
_0800F14E:
	ldrb r0, [r4]
	add r4, r4, #1
	add r1, r0, #0
	and r1, r1, r7
	add r1, r5, r1
	lsr r0, r0, #4
	mov r6, r12
	and r0, r0, r6
	add r0, r0, r5
	ldrb r1, [r1]
	ldrb r0, [r0, #16]
	orr r1, r1, r0
	strb r1, [r3]
	add r3, r3, #1
	add r0, r2, #2
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #7
	bls _0800F14E
_0800F174:
	ldr r1, [sp]
	lsl r0, r1, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _0800F118
_0800F17E:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0800F0A0

	.byte 0x00
	.byte 0x00
