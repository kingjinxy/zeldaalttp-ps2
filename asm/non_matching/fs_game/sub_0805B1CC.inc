	THUMB_FUNC_START sub_0805B1CC
sub_0805B1CC: @ 0x0805B1CC
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #12]
	ldr r0, _0805B20C  @ =0x000002FF
	cmp r1, r0
	bgt _0805B1EA
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #12]
	add r1, r2, #0
	add r1, r1, #16
	str r1, [r0, #12]
_0805B1EA:
	ldr r0, [r7]
	bl 0x08002E64
	add r4, r7, #4
	ldr r0, [r7]
	bl 0x0800935C
	add r1, r0, #0
	strb r1, [r4]
	add r1, r7, #4
	ldrb r0, [r1]
	cmp r0, #33
	beq _0805B222
	cmp r0, #66
	beq _0805B210
	b _0805B224
	.byte 0x00
	.byte 0x00
_0805B20C:
	.4byte 0x000002FF
_0805B210:
	ldr r0, [r7]
	mov r1, #0
	mov r2, #0
	bl sub_0804CB38
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0805B234
_0805B222:
	b _0805B234
_0805B224:
	ldr r0, [r7]
	mov r1, #4
	mov r2, #0
	bl sub_0804CB38
	ldr r0, [r7]
	bl DeleteThisEntity
_0805B234:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805B1CC

