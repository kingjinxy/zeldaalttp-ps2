	THUMB_FUNC_START sub_0801D9E8
sub_0801D9E8: @ 0x0801D9E8
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801DA4C
	mov r0, #4
	strb r0, [r4, #23]
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	add r5, r4, #0
	add r5, r5, #125
	cmp r0, #0
	bne _0801DA20
	mov r0, #8
	strb r0, [r4, #24]
	bl sub_0800099C
	ldr r2, _0801DA80  @ =gUnknown_0813A908
	mov r1, #1
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r5]
_0801DA20:
	add r2, r4, #0
	add r2, r2, #43
	ldrb r0, [r5]
	ldrb r1, [r2]
	add r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	strb r0, [r2]
	ldrb r0, [r2]
	add r0, r0, #4
	mov r1, #28
	and r0, r0, r1
	lsr r1, r0, #2
	add r0, r4, #0
	add r0, r0, #42
	ldrb r2, [r0]
	cmp r1, r2
	beq _0801DA4C
	strb r1, [r0]
	add r0, r4, #0
	bl sub_08003870
_0801DA4C:
	add r0, r4, #0
	bl sub_0800964C
	lsl r0, r0, #16
	cmp r0, #0
	beq _0801DA74
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	add r0, r0, #4
	mov r1, #28
	and r0, r0, r1
	asr r0, r0, #2
	add r1, r4, #0
	add r1, r1, #42
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl sub_08003870
_0801DA74:
	add r0, r4, #0
	bl GetNextFrame
	pop {r4,r5}
	pop {r0}
	bx r0
_0801DA80:
	.4byte gUnknown_0813A908
	THUMB_FUNC_END sub_0801D9E8

