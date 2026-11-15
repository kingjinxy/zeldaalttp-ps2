	THUMB_FUNC_START sub_0801A1E0
sub_0801A1E0: @ 0x0801A1E0
	push {r4,lr}
	add r4, r0, #0
	mov r0, #14
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #118
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	add r0, r0, #48
	strb r0, [r2]
	mov r0, #10
	bl sub_08012494
	cmp r0, #0
	beq _0801A202
	str r4, [r0, #84]
_0801A202:
	add r0, r4, #0
	mov r1, #4
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A1E0

