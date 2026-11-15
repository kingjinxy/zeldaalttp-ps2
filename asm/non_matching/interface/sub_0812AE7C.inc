	THUMB_FUNC_START sub_0812AE7C
sub_0812AE7C: @ 0x0812AE7C
	push {lr}
	lsl r1, r1, #24
	lsr r1, r1, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	add r1, r1, #48
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r2, r1, #16
	asr r1, r1, #16
	cmp r1, #0
	bge _0812AE98
	mov r2, #0
	b _0812AE9E
_0812AE98:
	cmp r1, #119
	ble _0812AE9E
	mov r2, #120
_0812AE9E:
	ldrb r0, [r0]
	cmp r0, #0
	bne _0812AEB4
	ldr r0, _0812AEB0  @ =gUnknown_08199040
	lsl r1, r2, #16
	asr r1, r1, #14
	add r1, r1, r0
	ldr r0, [r1]
	b _0812AECC
_0812AEB0:
	.4byte gUnknown_08199040
_0812AEB4:
	cmp r0, #4
	beq _0812AEC8
	ldr r0, _0812AEC4  @ =gUnknown_08198ED8
	lsl r1, r2, #16
	asr r1, r1, #15
	add r1, r1, r0
	ldrh r0, [r1]
	b _0812AECC
_0812AEC4:
	.4byte gUnknown_08198ED8
_0812AEC8:
	lsl r0, r2, #16
	asr r0, r0, #16
_0812AECC:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812AE7C

