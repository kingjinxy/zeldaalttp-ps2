	THUMB_FUNC_START sub_0801F254
sub_0801F254: @ 0x0801F254
	push {r4,lr}
	add r4, r0, #0
	bl sub_0801F3B8
	lsl r1, r0, #24
	lsr r2, r1, #24
	mov r1, #128
	and r1, r1, r0
	cmp r1, #0
	beq _0801F290
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #23]
	mov r0, #24
	and r0, r0, r2
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #12
	bl 0x08003870
	b _0801F2DA
_0801F290:
	add r0, r4, #0
	bl 0x08003828
	add r0, r4, #0
	bl 0x080096C4
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801F2AE
	ldrh r0, [r4, #44]
	cmp r0, #0
	beq _0801F2DA
_0801F2AE:
	mov r0, #240
	strb r0, [r4, #23]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2]
	bl 0x0800099C
	mov r1, #28
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #2
	sub r1, r1, #1
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl 0x08003870
_0801F2DA:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801F254

