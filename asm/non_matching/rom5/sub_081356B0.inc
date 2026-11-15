	THUMB_FUNC_START sub_081356B0
sub_081356B0: @ 0x081356B0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r4, r0, #0
	lsl r1, r1, #16
	lsr r7, r1, #16
	lsl r6, r2, #16
	ldr r3, [r4, #52]
	ldr r0, _08135714  @ =0x68736D53
	cmp r3, r0
	bne _08135708
	add r0, r3, #1
	str r0, [r4, #52]
	ldrb r2, [r4, #8]
	ldr r1, [r4, #44]
	mov r5, #1
	cmp r2, #0
	ble _08135704
	mov r0, #128
	mov r8, r0
	lsr r6, r6, #18
	mov r0, #3
	mov r12, r0
_081356E0:
	add r0, r7, #0
	and r0, r0, r5
	cmp r0, #0
	beq _081356FA
	ldrb r3, [r1]
	mov r0, r8
	and r0, r0, r3
	cmp r0, #0
	beq _081356FA
	strb r6, [r1, #19]
	mov r0, r12
	orr r0, r0, r3
	strb r0, [r1]
_081356FA:
	sub r2, r2, #1
	add r1, r1, #80
	lsl r5, r5, #1
	cmp r2, #0
	bgt _081356E0
_08135704:
	ldr r0, _08135714  @ =0x68736D53
	str r0, [r4, #52]
_08135708:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08135714:
	.4byte 0x68736D53
	THUMB_FUNC_END sub_081356B0

