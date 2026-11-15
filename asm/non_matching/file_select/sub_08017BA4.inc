	THUMB_FUNC_START sub_08017BA4
sub_08017BA4: @ 0x08017BA4
	mov r12, r0
	mov r0, #1
	mov r1, r12
	strb r0, [r1, #21]
	add r1, r1, #92
	mov r3, #0
	mov r0, #196
	lsl r0, r0, #6
	strh r0, [r1]
	ldr r2, _08017BDC  @ =gUnknown_03006A30
	mov r0, r12
	ldrb r1, [r0, #11]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	add r0, r0, #42
	ldrb r0, [r0]
	mov r1, r12
	add r1, r1, #113
	strb r0, [r1]
	mov r0, r12
	add r0, r0, #114
	strb r3, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_08017BDC:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08017BA4

