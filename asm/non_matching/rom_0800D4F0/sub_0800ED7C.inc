	THUMB_FUNC_START sub_0800ED7C
sub_0800ED7C: @ 0x0800ED7C
	push {r4,lr}
	lsl r2, r1, #16
	lsr r3, r2, #16
	strh r3, [r0, #6]
	ldr r4, _0800EDB0  @ =gUnknown_08427444
	ldr r1, _0800EDB4  @ =gGameLanguage
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r4
	ldr r1, [r1]
	lsr r2, r2, #24
	lsl r2, r2, #2
	add r2, r2, r1
	ldr r2, [r2]
	add r1, r1, r2
	lsl r3, r3, #24
	lsr r3, r3, #22
	add r3, r3, r1
	ldr r2, [r3]
	add r1, r1, r2
	bl sub_0800EDB8
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0800EDB0:
	.4byte gUnknown_08427444
_0800EDB4:
	.4byte gGameLanguage
	THUMB_FUNC_END sub_0800ED7C

