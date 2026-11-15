	THUMB_FUNC_START sub_0801DE14
sub_0801DE14: @ 0x0801DE14
	push {r4,lr}
	add r4, r0, #0
	mov r1, #0
	bl sub_0801DEC0
	ldrb r1, [r4, #24]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0801DE3E
	mov r0, #4
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #32
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
_0801DE3E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801DE14

