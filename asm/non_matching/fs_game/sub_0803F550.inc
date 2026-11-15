	THUMB_FUNC_START sub_0803F550
sub_0803F550: @ 0x0803F550
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r1, [r7, #4]
	add r0, r1, #0
	ldr r1, [r7]
	bl 0x0800238C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	cmp r0, #0
	bne _0803F57E
	ldr r1, [r7, #4]
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldr r2, [r1, #52]
	sub r1, r2, #1
	str r1, [r0, #52]
	b _0803F58A
_0803F57E:
	ldr r1, [r7, #4]
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldr r2, [r1, #52]
	add r1, r2, #1
	str r1, [r0, #52]
_0803F58A:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803F550

	.byte 0x00
	.byte 0x00
