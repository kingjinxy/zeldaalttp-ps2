	THUMB_FUNC_START sub_0801E360
sub_0801E360: @ 0x0801E360
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r1, r1, #24
	lsr r4, r1, #24
	add r3, r5, #0
	add r3, r3, #42
	ldrb r2, [r3]
	mov r0, #14
	and r0, r0, r2
	cmp r0, r4
	bne _0801E39C
	add r0, r5, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _0801E3AC
	mov r0, #1
	lsr r1, r1, #4
	and r0, r0, r2
	cmp r0, r1
	beq _0801E3AC
	add r0, r4, r1
	strb r0, [r3]
	ldrb r1, [r3]
	add r0, r5, #0
	bl sub_08003870
	b _0801E3AC
_0801E39C:
	mov r0, #1
	and r0, r0, r2
	add r0, r4, r0
	strb r0, [r3]
	ldrb r1, [r3]
	add r0, r5, #0
	bl sub_08003870
_0801E3AC:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E360

	.byte 0x00
	.byte 0x00
