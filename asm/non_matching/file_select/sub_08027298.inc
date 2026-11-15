	THUMB_FUNC_START sub_08027298
sub_08027298: @ 0x08027298
	add r3, r0, #0
	ldr r2, _080272C8  @ =gUnknown_08137B10
	ldrb r0, [r3, #10]
	mov r1, #31
	and r1, r1, r0
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r2, _080272CC  @ =gUnknown_0201F000
	add r0, r3, #0
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r1, [r1]
	ldr r0, [r0]
	and r1, r1, r0
	cmp r1, #0
	beq _080272C6
	ldrb r0, [r3, #20]
	sub r0, r0, #1
	strb r0, [r3, #20]
	mov r0, #45
	strb r0, [r3, #23]
_080272C6:
	bx lr
_080272C8:
	.4byte gUnknown_08137B10
_080272CC:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08027298

