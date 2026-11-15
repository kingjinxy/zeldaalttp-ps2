	THUMB_FUNC_START sub_0805AD20
sub_0805AD20: @ 0x0805AD20
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _0805AD52
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	bl sub_0805AD74
	b _0805AD68
_0805AD52:
	ldr r0, _0805AD70  @ =gUnknown_03000200
	mov r1, #0
	str r1, [r0]
	mov r1, #129
	lsl r1, r1, #1
	add r0, r1, #0
	bl sub_0800D6A4
	ldr r0, [r7]
	bl DeleteThisEntity
_0805AD68:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0805AD70:
	.4byte gUnknown_03000200
	THUMB_FUNC_END sub_0805AD20

