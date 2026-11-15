	THUMB_FUNC_START sub_0805E86C
sub_0805E86C: @ 0x0805E86C
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_0805E87A:
	add r0, r7, #4
	ldr r1, _0805E888  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _0805E88C
	b _0805E8B6
_0805E888:
	.4byte gUnknown_03006C80
_0805E88C:
	add r0, r7, #4
	ldrb r2, [r0]
	mov r0, #70
	mov r1, #21
	bl sub_0804C8A8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0805E8A6
	ldr r0, [r7, #8]
	ldr r1, [r7]
	str r1, [r0, #84]
_0805E8A6:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0805E87A
_0805E8B6:
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805E86C

	.byte 0x00
	.byte 0x00
