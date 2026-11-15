	THUMB_FUNC_START sub_0802C7A8
sub_0802C7A8: @ 0x0802C7A8
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r2, _0802C7F8  @ =gUnknown_03006C80
	ldrb r0, [r4, #10]
	add r5, r2, #0
	add r5, r5, #104
	add r1, r0, r5
	ldrb r0, [r1]
	cmp r0, #3
	bls _0802C7F2
	sub r0, r0, #4
	strb r0, [r1]
	add r0, r2, #0
	add r0, r0, #36
	ldrb r0, [r0]
	mov r1, #250
	lsl r1, r1, #1
	cmp r0, #0
	beq _0802C7D0
	mov r1, #250
_0802C7D0:
	add r0, r4, #0
	bl sub_0802C53C
	mov r0, #15
	bl play_sound
	ldrb r1, [r4, #10]
	add r0, r1, r5
	ldrb r0, [r0]
	cmp r0, #3
	bls _0802C7F2
	ldr r0, _0802C7FC  @ =gUnknown_03000420
	lsl r1, r1, #1
	add r0, r0, #36
	add r1, r1, r0
	mov r0, #30
	strh r0, [r1]
_0802C7F2:
	pop {r4,r5}
	pop {r0}
	bx r0
_0802C7F8:
	.4byte gUnknown_03006C80
_0802C7FC:
	.4byte gUnknown_03000420
	THUMB_FUNC_END sub_0802C7A8

