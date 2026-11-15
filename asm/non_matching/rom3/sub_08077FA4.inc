	THUMB_FUNC_START sub_08077FA4
sub_08077FA4: @ 0x08077FA4
	push {lr}
	ldr r0, _08077FB8  @ =gUnknown_0817D924
	ldr r1, _08077FBC  @ =gUnknown_0200BBA0
	mov r2, #128
	lsl r2, r2, #3
	bl CpuFastSet
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077FB8:
	.4byte gUnknown_0817D924
_08077FBC:
	.4byte gUnknown_0200BBA0
	THUMB_FUNC_END sub_08077FA4

