	THUMB_FUNC_START sub_0805694C
sub_0805694C: @ 0x0805694C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, _08056964  @ =gSubState
	ldrb r2, [r1]
	cmp r2, #4
	bne _08056968
	mov r1, #2
	b _0805696A
	.byte 0x00
	.byte 0x00
_08056964:
	.4byte gSubState
_08056968:
	mov r1, #0
_0805696A:
	mov r2, #3
	and r1, r1, r2
	ldrb r2, [r0, #28]
	mov r3, #252
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805694C

	.byte 0x00
	.byte 0x00
