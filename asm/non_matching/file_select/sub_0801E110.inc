	THUMB_FUNC_START sub_0801E110
sub_0801E110: @ 0x0801E110
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r1, r0, #1
	strb r1, [r4, #23]
	lsl r0, r1, #24
	cmp r0, #0
	beq _0801E146
	mov r0, #7
	and r1, r1, r0
	cmp r1, #0
	bne _0801E13C
	ldr r1, [r4, #88]
	add r0, r4, #0
	bl 0x08009EA4
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x080040C4
_0801E13C:
	add r0, r4, #0
	mov r1, #2
	bl sub_0801E360
	b _0801E14A
_0801E146:
	mov r0, #1
	strb r0, [r4, #20]
_0801E14A:
	add r0, r4, #0
	bl 0x08009694
	lsl r0, r0, #16
	cmp r0, #0
	beq _0801E15E
	add r0, r4, #0
	mov r1, #2
	bl sub_0801E360
_0801E15E:
	add r0, r4, #0
	bl 0x08003828
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E110

	.byte 0x00
	.byte 0x00
