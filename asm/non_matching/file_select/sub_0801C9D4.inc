	THUMB_FUNC_START sub_0801C9D4
sub_0801C9D4: @ 0x0801C9D4
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801C9FE
	mov r1, #0
	mov r0, #1
	strb r0, [r4, #20]
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #42
	strb r1, [r0]
	add r0, r4, #0
	bl sub_08003870
_0801C9FE:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C9D4

