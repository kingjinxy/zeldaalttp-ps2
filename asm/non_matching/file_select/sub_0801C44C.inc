	THUMB_FUNC_START sub_0801C44C
sub_0801C44C: @ 0x0801C44C
	push {lr}
	add r2, r0, #0
	ldr r0, [r2, #88]
	cmp r0, #0
	beq _0801C482
	ldr r0, [r2, #100]
	cmp r0, #0
	beq _0801C488
	mov r0, #8
	strb r0, [r2, #20]
	mov r0, #128
	lsl r0, r0, #2
	str r0, [r2, #12]
	add r1, r2, #0
	add r1, r1, #70
	mov r0, #20
	strb r0, [r1]
	add r0, r2, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #8
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r2, #0
	bl 0x08003870
	b _0801C488
_0801C482:
	add r0, r2, #0
	bl sub_0801C4C4
_0801C488:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C44C

