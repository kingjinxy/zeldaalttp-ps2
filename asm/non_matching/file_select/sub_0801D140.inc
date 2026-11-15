	THUMB_FUNC_START sub_0801D140
sub_0801D140: @ 0x0801D140
	push {r4,r5,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r5, #128
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0801D16E
	mov r0, #6
	strb r0, [r4, #20]
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #4
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #4
	bl 0x08003870
	b _0801D18A
_0801D16E:
	add r0, r4, #0
	mov r1, #14
	bl 0x0800997C
	lsl r1, r0, #24
	lsr r2, r1, #24
	add r1, r5, #0
	and r1, r1, r0
	cmp r1, #0
	beq _0801D18A
	add r0, r4, #0
	add r1, r2, #0
	bl sub_0801D380
_0801D18A:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D140

