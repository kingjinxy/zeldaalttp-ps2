	THUMB_FUNC_START sub_0802C0EC
sub_0802C0EC: @ 0x0802C0EC
	push {r4,lr}
	add r1, r0, #0
	add r1, r1, #83
	ldrb r0, [r1]
	cmp r0, #0
	beq _0802C122
	add r3, r0, #0
	lsl r1, r3, #2
	ldr r0, _0802C128  @ =gUnknown_0202A3F0
	add r2, r1, r0
	ldrb r1, [r2]
	mov r0, #63
	and r0, r0, r1
	cmp r0, r3
	bne _0802C122
	mov r4, #63
_0802C10C:
	ldrb r0, [r2, #1]
	cmp r0, #0
	beq _0802C116
	sub r0, r0, #1
	strb r0, [r2, #1]
_0802C116:
	add r2, r2, #4
	ldrb r1, [r2]
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, r3
	beq _0802C10C
_0802C122:
	pop {r4}
	pop {r0}
	bx r0
_0802C128:
	.4byte gUnknown_0202A3F0
	THUMB_FUNC_END sub_0802C0EC

