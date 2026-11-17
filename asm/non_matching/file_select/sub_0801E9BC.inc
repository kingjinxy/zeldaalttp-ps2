	THUMB_FUNC_START sub_0801E9BC
sub_0801E9BC: @ 0x0801E9BC
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	bne _0801EA1E
	add r0, r4, #0
	mov r1, #16
	bl sub_0800997C
	lsl r1, r0, #24
	lsr r2, r1, #24
	mov r1, #128
	and r1, r1, r0
	cmp r1, #0
	beq _0801E9F2
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #24
	and r0, r0, r2
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #3
	sub r1, r1, #1
	strb r0, [r1]
	ldrb r1, [r1]
	b _0801EA16
_0801E9F2:
	bl sub_0800099C
	add r2, r0, #0
	mov r0, #24
	and r2, r2, r0
	add r1, r4, #0
	add r1, r1, #43
	ldrb r0, [r1]
	cmp r2, r0
	beq _0801EA22
	mov r0, #2
	strb r0, [r4, #20]
	strb r2, [r1]
	lsr r0, r2, #3
	add r2, r4, #0
	add r2, r2, #42
	strb r0, [r2]
	ldrb r1, [r2]
_0801EA16:
	add r0, r4, #0
	bl sub_08003870
	b _0801EA22
_0801EA1E:
	sub r0, r0, #1
	strb r0, [r4, #23]
_0801EA22:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E9BC

