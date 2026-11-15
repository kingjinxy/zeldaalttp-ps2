	THUMB_FUNC_START sub_0801E6C0
sub_0801E6C0: @ 0x0801E6C0
	push {r4,lr}
	add r4, r0, #0
	bl 0x08009664
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801E6D2
	mov r0, #1
	strb r0, [r4, #23]
_0801E6D2:
	add r0, r4, #0
	bl 0x08003828
	ldrb r0, [r4, #23]
	sub r1, r0, #1
	strb r1, [r4, #23]
	lsl r0, r1, #24
	cmp r0, #0
	beq _0801E702
	mov r0, #7
	and r1, r1, r0
	cmp r1, #0
	bne _0801E71C
	ldr r1, [r4, #88]
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x080040C4
	b _0801E71C
_0801E702:
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
_0801E71C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E6C0

	.byte 0x00
	.byte 0x00
