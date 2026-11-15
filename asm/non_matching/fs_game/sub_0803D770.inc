	THUMB_FUNC_START sub_0803D770
sub_0803D770: @ 0x0803D770
	push {r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #31]
	lsl r2, r1, #26
	lsr r0, r2, #27
	add r1, r0, #0
	lsl r0, r1, #5
	ldr r1, _0803D7E4  @ =gUnknown_03005E26
	add r0, r0, r1
	str r0, [r7, #8]
	ldr r1, [r7, #8]
	ldr r0, [r7]
	mov r2, #1
	mov r3, #8
	bl ObjAffineSet
	ldr r0, [r7, #8]
	mov r2, #128
	lsl r2, r2, #3
	add r1, r0, r2
	str r1, [r7, #12]
	ldr r0, [r7, #12]
	ldr r1, [r7, #8]
	ldrh r2, [r1]
	strh r2, [r0]
	ldr r1, [r7, #12]
	add r0, r1, #0
	add r0, r0, #8
	ldr r2, [r7, #8]
	add r1, r2, #0
	add r1, r1, #8
	ldrh r2, [r1]
	strh r2, [r0]
	ldr r1, [r7, #12]
	add r0, r1, #0
	add r0, r0, #16
	ldr r2, [r7, #8]
	add r1, r2, #0
	add r1, r1, #16
	ldrh r2, [r1]
	strh r2, [r0]
	ldr r1, [r7, #12]
	add r0, r1, #0
	add r0, r0, #24
	ldr r2, [r7, #8]
	add r1, r2, #0
	add r1, r1, #24
	ldrh r2, [r1]
	strh r2, [r0]
	add sp, sp, #16
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803D7E4:
	.4byte gUnknown_03005E26
	THUMB_FUNC_END sub_0803D770

