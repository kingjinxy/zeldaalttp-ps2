	THUMB_FUNC_START sub_0802C6AC
sub_0802C6AC: @ 0x0802C6AC
	push {r4,lr}
	add r4, r0, #0
	mov r0, #75
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	cmp r0, #0
	beq _0802C6C0
	str r4, [r0, #76]
_0802C6C0:
	ldr r1, _0802C6E0  @ =gUnknown_03006C80
	add r1, r1, #92
	ldrb r4, [r4, #10]
	add r1, r1, r4
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0802C6E4  @ =gUnknown_03000420
	mov r0, #1
	strb r0, [r1, #2]
	mov r0, #9
	bl play_sound
	pop {r4}
	pop {r0}
	bx r0
_0802C6E0:
	.4byte gUnknown_03006C80
_0802C6E4:
	.4byte gUnknown_03000420
	THUMB_FUNC_END sub_0802C6AC

