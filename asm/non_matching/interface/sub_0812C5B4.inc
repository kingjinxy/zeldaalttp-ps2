	THUMB_FUNC_START sub_0812C5B4
sub_0812C5B4: @ 0x0812C5B4
	push {r4-r7,lr}
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _0812C5EC  @ =gUnknown_03001C88
	add r1, r1, r0
	add r2, r1, #0
	add r2, r2, #66
	ldrb r0, [r2]
	cmp r0, #0
	beq _0812C5E6
	add r7, r2, #0
	mov r6, #0
	add r4, r1, #0
	add r4, r4, #8
	mov r5, #9
_0812C5D4:
	ldr r0, [r4]
	bl sub_0812BE3C
	stm r4!, {r6}
	sub r5, r5, #1
	cmp r5, #0
	bge _0812C5D4
	mov r0, #0
	strb r0, [r7]
_0812C5E6:
	pop {r4-r7}
	pop {r0}
	bx r0
_0812C5EC:
	.4byte gUnknown_03001C88
	THUMB_FUNC_END sub_0812C5B4

