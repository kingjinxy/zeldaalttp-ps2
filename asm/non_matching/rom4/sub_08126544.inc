	THUMB_FUNC_START sub_08126544
sub_08126544: @ 0x08126544
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r7, r6, #0
	ldr r0, _081265D0  @ =gUnknown_03000050
	mov r12, r0
	add r0, r0, #88
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _0812658C
	mov r5, #0
	ldrsb r5, [r1, r5]
	lsl r5, r5, #4
	mov r4, r12
	add r4, r4, #40
	add r4, r6, r4
	ldrb r1, [r4]
	mov r3, r12
	add r3, r3, #48
	add r3, r6, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r2, r12
	add r2, r2, #56
	add r2, r6, r2
	ldrb r0, [r2]
	lsl r0, r0, #16
	add r1, r1, r0
	add r1, r1, r5
	strb r1, [r4]
	lsr r0, r1, #8
	strb r0, [r3]
	lsr r1, r1, #16
	strb r1, [r2]
_0812658C:
	mov r0, r12
	add r0, r0, #96
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _081265CA
	mov r5, #0
	ldrsb r5, [r1, r5]
	lsl r5, r5, #4
	mov r4, r12
	add r4, r4, #64
	add r4, r7, r4
	ldrb r1, [r4]
	mov r3, r12
	add r3, r3, #72
	add r3, r7, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r2, r12
	add r2, r2, #80
	add r2, r7, r2
	ldrb r0, [r2]
	lsl r0, r0, #16
	add r1, r1, r0
	add r1, r1, r5
	strb r1, [r4]
	lsr r0, r1, #8
	strb r0, [r3]
	lsr r1, r1, #16
	strb r1, [r2]
_081265CA:
	pop {r4-r7}
	pop {r0}
	bx r0
_081265D0:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_08126544

