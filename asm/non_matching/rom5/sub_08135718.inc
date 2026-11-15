	THUMB_FUNC_START sub_08135718
sub_08135718: @ 0x08135718
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r4, r0, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r12, r1
	lsl r2, r2, #16
	lsr r6, r2, #16
	ldr r3, [r4, #52]
	ldr r0, _08135788  @ =0x68736D53
	cmp r3, r0
	bne _0813577A
	add r0, r3, #1
	str r0, [r4, #52]
	ldrb r2, [r4, #8]
	ldr r3, [r4, #44]
	mov r5, #1
	cmp r2, #0
	ble _08135776
	mov r0, #128
	mov r9, r0
	lsl r0, r6, #16
	asr r7, r0, #24
	mov r0, #12
	mov r8, r0
_08135750:
	mov r0, r12
	and r0, r0, r5
	cmp r0, #0
	beq _0813576C
	ldrb r1, [r3]
	mov r0, r9
	and r0, r0, r1
	cmp r0, #0
	beq _0813576C
	strb r7, [r3, #11]
	strb r6, [r3, #13]
	mov r0, r8
	orr r0, r0, r1
	strb r0, [r3]
_0813576C:
	sub r2, r2, #1
	add r3, r3, #80
	lsl r5, r5, #1
	cmp r2, #0
	bgt _08135750
_08135776:
	ldr r0, _08135788  @ =0x68736D53
	str r0, [r4, #52]
_0813577A:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08135788:
	.4byte 0x68736D53
	THUMB_FUNC_END sub_08135718

