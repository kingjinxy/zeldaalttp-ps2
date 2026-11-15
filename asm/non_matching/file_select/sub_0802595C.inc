	THUMB_FUNC_START sub_0802595C
sub_0802595C: @ 0x0802595C
	push {r4-r6,lr}
	add r4, r0, #0
	bl 0x08003828
	ldr r0, [r4, #84]
	ldr r2, _080259D4  @ =gUnknown_0813C468
	add r1, r4, #0
	add r1, r1, #42
	ldrb r1, [r1]
	add r1, r1, r2
	mov r3, #0
	ldrsb r3, [r1, r3]
	lsl r3, r3, #16
	add r1, r4, #0
	mov r2, #0
	bl sub_0803D4A4
	ldr r0, [r4, #84]
	add r0, r0, #41
	ldrb r1, [r0]
	mov r6, #1
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080259CE
	ldrb r5, [r4, #10]
	cmp r5, #3
	bne _080259C2
	mov r0, #5
	bl sub_08012494
	add r2, r0, #0
	cmp r2, #0
	beq _080259C2
	strb r5, [r2, #10]
	strb r6, [r2, #11]
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	add r0, r0, #6
	mov r1, #31
	and r0, r0, r1
	add r1, r2, #0
	add r1, r1, #43
	strb r0, [r1]
	ldr r0, [r4, #84]
	str r0, [r2, #84]
	add r0, r4, #0
	add r1, r2, #0
	bl sub_0803D3D0
_080259C2:
	add r0, r4, #0
	bl sub_08025A40
	add r0, r4, #0
	bl sub_08025A60
_080259CE:
	pop {r4-r6}
	pop {r0}
	bx r0
_080259D4:
	.4byte gUnknown_0813C468
	THUMB_FUNC_END sub_0802595C

