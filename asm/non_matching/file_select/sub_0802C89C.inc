	THUMB_FUNC_START sub_0802C89C
sub_0802C89C: @ 0x0802C89C
	push {r4,lr}
	ldr r4, _0802C8D8  @ =gUnknown_03000420
	ldr r1, _0802C8DC  @ =gUnknown_03006C80
	ldr r0, [r1, #8]
	str r0, [r4, #16]
	ldrb r0, [r1, #4]
	add r0, r0, #1
	strb r0, [r4, #11]
	ldr r0, _0802C8E0  @ =gUnknown_03006730
	ldr r3, [r0]
	ldrb r2, [r3, #15]
	mov r0, #2
	and r0, r0, r2
	strb r0, [r4, #14]
	ldr r0, [r3, #40]
	add r0, r0, #69
	ldrb r0, [r0]
	strb r0, [r4, #8]
	ldr r0, [r3, #40]
	add r1, r1, #100
	ldrb r0, [r0, #10]
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r4, #9]
	mov r0, #1
	strb r0, [r4, #2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802C8D8:
	.4byte gUnknown_03000420
_0802C8DC:
	.4byte gUnknown_03006C80
_0802C8E0:
	.4byte gUnknown_03006730
	THUMB_FUNC_END sub_0802C89C

