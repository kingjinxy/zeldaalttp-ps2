	THUMB_FUNC_START sub_08135814
sub_08135814: @ 0x08135814
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r6, r0, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r10, r1
	lsl r2, r2, #24
	lsr r2, r2, #24
	mov r8, r2
	ldr r1, [r6, #52]
	ldr r0, _08135884  @ =0x68736D53
	cmp r1, r0
	bne _08135874
	add r0, r1, #1
	str r0, [r6, #52]
	ldrb r5, [r6, #8]
	ldr r4, [r6, #44]
	mov r7, #1
	cmp r5, #0
	ble _08135870
	mov r9, r8
_08135844:
	mov r0, r10
	and r0, r0, r7
	cmp r0, #0
	beq _08135866
	mov r0, #128
	ldrb r1, [r4]
	and r0, r0, r1
	cmp r0, #0
	beq _08135866
	mov r0, r8
	strb r0, [r4, #23]
	mov r1, r9
	cmp r1, #0
	bne _08135866
	add r0, r4, #0
	bl sub_081357F4
_08135866:
	sub r5, r5, #1
	add r4, r4, #80
	lsl r7, r7, #1
	cmp r5, #0
	bgt _08135844
_08135870:
	ldr r0, _08135884  @ =0x68736D53
	str r0, [r6, #52]
_08135874:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08135884:
	.4byte 0x68736D53
	THUMB_FUNC_END sub_08135814

