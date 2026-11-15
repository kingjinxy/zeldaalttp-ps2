	THUMB_FUNC_START sub_0801E054
sub_0801E054: @ 0x0801E054
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	bl 0x08009630
	add r0, r4, #0
	add r0, r0, #66
	ldrb r0, [r0]
	cmp r0, #1
	bne _0801E07E
	ldrb r0, [r4, #20]
	cmp r0, #4
	beq _0801E07E
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r4, #0
	bl 0x08003870
_0801E07E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E054

