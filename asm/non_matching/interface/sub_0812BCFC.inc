	THUMB_FUNC_START sub_0812BCFC
sub_0812BCFC: @ 0x0812BCFC
	push {lr}
	ldr r0, _0812BD24  @ =gUnknown_03000C20
	mov r1, #0
	add r0, r0, #8
	mov r2, #23
_0812BD06:
	strb r1, [r0]
	strb r1, [r0, #1]
	strb r1, [r0, #2]
	strb r1, [r0, #3]
	strb r1, [r0, #4]
	strb r1, [r0, #5]
	strb r1, [r0, #6]
	strb r1, [r0, #7]
	add r0, r0, #84
	sub r2, r2, #1
	cmp r2, #0
	bge _0812BD06
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812BD24:
	.4byte gUnknown_03000C20
	THUMB_FUNC_END sub_0812BCFC

