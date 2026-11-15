	THUMB_FUNC_START sub_08068260
sub_08068260: @ 0x08068260
	add r2, r0, #0
	mov r0, #15
	ldrsb r0, [r1, r0]
	cmp r0, #0
	ble _080682DC
	mov r3, #251
	lsl r3, r3, #2
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	sub r3, r3, #159
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1, #2]
	sub r3, r3, #1
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1, #3]
	sub r3, r3, #15
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1, #4]
	mov r3, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _08068298
	mov r3, #1
_08068298:
	strb r3, [r1, #7]
	cmp r0, #255
	bne _080682A2
	mov r0, #0
	strb r0, [r1, #4]
_080682A2:
	ldr r3, _080682D8  @ =0x0000033E
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1, #5]
	add r3, r3, #1
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1, #6]
	add r3, r3, #177
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1, #8]
	sub r3, r3, #193
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1, #9]
	ldrb r0, [r1, #3]
	cmp r0, #160
	bls _080682CC
	mov r0, #160
	strb r0, [r1, #3]
_080682CC:
	ldrb r2, [r1, #3]
	ldrb r0, [r1, #2]
	cmp r0, r2
	bls _080682E6
	strb r2, [r1, #2]
	b _080682E6
_080682D8:
	.4byte 0x0000033E
_080682DC:
	ldr r0, _080682E8  @ =0x0000FFFF
	strh r0, [r1]
	mov r0, #24
	strb r0, [r1, #3]
	strb r0, [r1, #2]
_080682E6:
	bx lr
_080682E8:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_08068260

