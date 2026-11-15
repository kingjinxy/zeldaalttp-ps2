	THUMB_FUNC_START sub_0802C8F8
sub_0802C8F8: @ 0x0802C8F8
	push {r4,r5,lr}
	ldr r4, _0802C92C  @ =gUnknown_03000420
	mov r5, #1
	mov r0, #1
	strb r0, [r4]
	mov r0, #0
	bl sub_0802CA70
	bl sub_0802D514
	ldrb r1, [r4, #3]
	lsl r0, r1, #11
	ldr r2, _0802C930  @ =gBG0Buffer
	add r0, r0, r2
	eor r1, r1, r5
	lsl r1, r1, #11
	add r1, r1, r2
	mov r2, #80
	bl CpuFastSet
	bl sub_0802C89C
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802C92C:
	.4byte gUnknown_03000420
_0802C930:
	.4byte gBG0Buffer
	THUMB_FUNC_END sub_0802C8F8

