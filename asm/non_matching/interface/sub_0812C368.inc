	THUMB_FUNC_START sub_0812C368
sub_0812C368: @ 0x0812C368
	push {r4,lr}
	mov r2, #0
	ldr r4, _0812C398  @ =gUnknown_03001C88
	mov r3, #0
_0812C370:
	lsl r0, r2, #3
	add r0, r0, r2
	lsl r0, r0, #3
	add r0, r0, r4
	add r1, r0, #0
	add r1, r1, #66
	strb r3, [r1]
	add r2, r2, #1
	mov r1, #9
	add r0, r0, #44
_0812C384:
	str r3, [r0]
	sub r0, r0, #4
	sub r1, r1, #1
	cmp r1, #0
	bge _0812C384
	cmp r2, #19
	ble _0812C370
	pop {r4}
	pop {r0}
	bx r0
_0812C398:
	.4byte gUnknown_03001C88
	THUMB_FUNC_END sub_0812C368

