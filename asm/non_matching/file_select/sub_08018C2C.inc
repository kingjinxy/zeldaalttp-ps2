	THUMB_FUNC_START sub_08018C2C
sub_08018C2C: @ 0x08018C2C
	add r2, r0, #0
	ldr r1, _08018C48  @ =gUnknown_0201F000
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r2, #116]
	and r0, r0, r1
	cmp r0, r1
	bne _08018C46
	mov r0, #2
	strb r0, [r2, #20]
_08018C46:
	bx lr
_08018C48:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08018C2C

