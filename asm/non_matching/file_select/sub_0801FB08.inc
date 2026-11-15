	THUMB_FUNC_START sub_0801FB08
sub_0801FB08: @ 0x0801FB08
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	ldr r0, [r4, #100]
	cmp r0, #0
	bne _0801FB22
	add r0, r4, #0
	mov r1, #88
	mov r2, #88
	bl 0x08009E6C
	str r0, [r4, #100]
_0801FB22:
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _0801FB3E
	ldr r0, [r4, #100]
	cmp r0, #0
	beq _0801FB3E
	add r0, r4, #0
	bl sub_0801FD5C
	b _0801FB4E
_0801FB3E:
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801FB4E
	add r0, r4, #0
	bl sub_0801FD44
_0801FB4E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801FB08

