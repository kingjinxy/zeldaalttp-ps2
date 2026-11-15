	THUMB_FUNC_START sub_080FA2E8
sub_080FA2E8: @ 0x080FA2E8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080FA31C  @ =gRam
	ldr r1, _080FA320  @ =0x00000F92
	add r4, r2, r1
	add r4, r0, r4
	ldr r5, _080FA324  @ =gUnknown_0817A3C8
	ldr r3, _080FA328  @ =0x00001052
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	mov r1, #4
	and r1, r1, r3
	ldr r3, _080FA32C  @ =0x00000FB2
	add r2, r2, r3
	add r0, r0, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	add r1, r1, r5
	ldrb r0, [r1]
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FA31C:
	.4byte gRam
_080FA320:
	.4byte 0x00000F92
_080FA324:
	.4byte gUnknown_0817A3C8
_080FA328:
	.4byte 0x00001052
_080FA32C:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080FA2E8

