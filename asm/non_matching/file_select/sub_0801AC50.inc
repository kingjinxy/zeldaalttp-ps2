	THUMB_FUNC_START sub_0801AC50
sub_0801AC50: @ 0x0801AC50
	add r2, r0, #0
	ldr r1, _0801AC6C  @ =gUnknown_0201F000
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r2, #112]
	and r0, r0, r1
	cmp r0, r1
	bne _0801AC6A
	mov r0, #2
	strb r0, [r2, #20]
_0801AC6A:
	bx lr
_0801AC6C:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_0801AC50

