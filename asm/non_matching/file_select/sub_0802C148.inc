	THUMB_FUNC_START sub_0802C148
sub_0802C148: @ 0x0802C148
	push {r4,lr}
	ldr r2, _0802C17C  @ =gUnknown_0202A410
	mov r3, #0
	add r4, r2, #0
	add r4, r4, #140
_0802C152:
	ldrb r0, [r2, #1]
	cmp r0, #0
	bne _0802C16E
	mov r1, #0
_0802C15A:
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r2, r2, #4
	ldrb r0, [r2, #1]
	cmp r0, #0
	beq _0802C15A
	cmp r3, r1
	bcs _0802C16E
	add r3, r1, #0
_0802C16E:
	add r2, r2, #4
	cmp r2, r4
	bcc _0802C152
	add r0, r3, #0
	pop {r4}
	pop {r1}
	bx r1
_0802C17C:
	.4byte gUnknown_0202A410
	THUMB_FUNC_END sub_0802C148

