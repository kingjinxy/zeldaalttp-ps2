	THUMB_FUNC_START sub_0810B8CC
sub_0810B8CC: @ 0x0810B8CC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _0810B930  @ =gUnknown_0817CBD0
	ldr r5, _0810B934  @ =gRam
	ldr r1, _0810B938  @ =0x00000F62
	add r0, r5, r1
	add r4, r3, r0
	ldrb r0, [r4]
	lsl r6, r0, #1
	add r2, r6, r2
	ldr r7, _0810B93C  @ =0x00001622
	add r0, r5, r7
	ldrb r1, [r0]
	add r7, r7, #1
	add r0, r5, r7
	ldrb r0, [r0]
	lsl r0, r0, #8
	ldrh r2, [r2]
	orr r1, r1, r0
	cmp r2, r1
	bcs _0810B924
	cmp r6, #3
	ble _0810B912
	ldr r0, _0810B940  @ =0x00000F52
	add r1, r5, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0810B944  @ =0x00000FD2
	add r0, r5, r1
	add r0, r3, r0
	mov r1, #208
	strb r1, [r0]
_0810B912:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r7, _0810B948  @ =0x00000FB2
	add r1, r5, r7
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810B924:
	add r0, r3, #0
	bl sub_0810B94C
	pop {r4-r7}
	pop {r0}
	bx r0
_0810B930:
	.4byte gUnknown_0817CBD0
_0810B934:
	.4byte gRam
_0810B938:
	.4byte 0x00000F62
_0810B93C:
	.4byte 0x00001622
_0810B940:
	.4byte 0x00000F52
_0810B944:
	.4byte 0x00000FD2
_0810B948:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_0810B8CC

