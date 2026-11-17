	THUMB_FUNC_START sub_08017D78
sub_08017D78: @ 0x08017D78
	push {lr}
	add r3, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r0, #43
	ldrb r0, [r0]
	cmp r0, #16
	bls _08017D9E
	add r2, r3, #0
	add r2, r2, #42
	ldrb r0, [r2]
	cmp r0, r1
	beq _08017DB4
	strb r1, [r2]
	ldrb r1, [r2]
	add r0, r3, #0
	bl sub_08003870
	b _08017DB4
_08017D9E:
	add r2, r3, #0
	add r2, r2, #42
	ldrb r0, [r2]
	add r1, r1, #1
	cmp r0, r1
	beq _08017DB4
	strb r1, [r2]
	ldrb r1, [r2]
	add r0, r3, #0
	bl sub_08003870
_08017DB4:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017D78

