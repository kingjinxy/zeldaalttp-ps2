	THUMB_FUNC_START sub_0801EB38
sub_0801EB38: @ 0x0801EB38
	push {r4-r6,lr}
	add r5, r0, #0
	ldr r0, [r5, #12]
	sub r0, r0, #32
	str r0, [r5, #12]
	cmp r0, #255
	ble _0801EBA2
	ldr r4, _0801EBB8  @ =gUnknown_0813AEF8
	add r6, r5, #0
	add r6, r6, #42
	ldrb r0, [r6]
	lsl r0, r0, #2
	add r1, r0, r4
	mov r2, #0
	ldrsb r2, [r1, r2]
	ldrh r1, [r5, #50]
	add r2, r2, r1
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r0, r0, #1
	add r0, r0, r4
	mov r3, #0
	ldrsb r3, [r0, r3]
	ldrh r0, [r5, #54]
	add r3, r3, r0
	lsl r3, r3, #16
	lsr r3, r3, #16
	add r0, r5, #0
	mov r1, #9
	bl sub_080017EC
	ldrb r1, [r6]
	lsl r1, r1, #2
	add r0, r1, #2
	add r0, r0, r4
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldrh r0, [r5, #50]
	add r2, r2, r0
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r1, r1, #3
	add r1, r1, r4
	mov r3, #0
	ldrsb r3, [r1, r3]
	ldrh r1, [r5, #54]
	add r3, r3, r1
	lsl r3, r3, #16
	lsr r3, r3, #16
	add r0, r5, #0
	mov r1, #9
	bl sub_080017EC
_0801EBA2:
	ldr r0, [r5, #12]
	cmp r0, #0
	ble _0801EBBC
	add r0, r5, #0
	bl sub_08009664
	add r0, r5, #0
	bl sub_0801EE30
	b _0801EBC4
	.byte 0x00
	.byte 0x00
_0801EBB8:
	.4byte gUnknown_0813AEF8
_0801EBBC:
	mov r0, #1
	strb r0, [r5, #20]
	mov r0, #16
	strb r0, [r5, #23]
_0801EBC4:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801EB38

	.byte 0x00
	.byte 0x00
