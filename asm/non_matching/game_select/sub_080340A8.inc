	THUMB_FUNC_START sub_080340A8
sub_080340A8: @ 0x080340A8
	add r2, r0, #0
	ldr r0, _080340C8  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #4
	and r0, r0, r1
	cmp r0, #0
	beq _080340C6
	mov r0, #3
	strb r0, [r2, #20]
	mov r0, #20
	strb r0, [r2, #23]
	add r1, r2, #0
	add r1, r1, #43
	mov r0, #16
	strb r0, [r1]
_080340C6:
	bx lr
_080340C8:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_080340A8

