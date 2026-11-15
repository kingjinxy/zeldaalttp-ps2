	THUMB_FUNC_START sub_0813578C
sub_0813578C: @ 0x0813578C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r4, r0, #0
	lsl r1, r1, #16
	lsr r7, r1, #16
	lsl r2, r2, #24
	lsr r6, r2, #24
	ldr r3, [r4, #52]
	ldr r0, _081357F0  @ =0x68736D53
	cmp r3, r0
	bne _081357E4
	add r0, r3, #1
	str r0, [r4, #52]
	ldrb r2, [r4, #8]
	ldr r1, [r4, #44]
	mov r5, #1
	cmp r2, #0
	ble _081357E0
	mov r0, #128
	mov r8, r0
	mov r0, #3
	mov r12, r0
_081357BC:
	add r0, r7, #0
	and r0, r0, r5
	cmp r0, #0
	beq _081357D6
	ldrb r3, [r1]
	mov r0, r8
	and r0, r0, r3
	cmp r0, #0
	beq _081357D6
	strb r6, [r1, #21]
	mov r0, r12
	orr r0, r0, r3
	strb r0, [r1]
_081357D6:
	sub r2, r2, #1
	add r1, r1, #80
	lsl r5, r5, #1
	cmp r2, #0
	bgt _081357BC
_081357E0:
	ldr r0, _081357F0  @ =0x68736D53
	str r0, [r4, #52]
_081357E4:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_081357F0:
	.4byte 0x68736D53
	THUMB_FUNC_END sub_0813578C

