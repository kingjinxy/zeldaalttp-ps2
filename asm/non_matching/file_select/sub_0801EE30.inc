	THUMB_FUNC_START sub_0801EE30
sub_0801EE30: @ 0x0801EE30
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #112
	ldrb r1, [r0]
	sub r1, r1, #1
	strb r1, [r0]
	mov r0, #7
	and r1, r1, r0
	cmp r1, #0
	bne _0801EE60
	mov r0, #15
	mov r1, #17
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _0801EE60
	mov r3, #128
	lsl r3, r3, #9
	add r0, r4, #0
	mov r2, #0
	bl sub_0803D4A4
_0801EE60:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801EE30

	.byte 0x00
	.byte 0x00
