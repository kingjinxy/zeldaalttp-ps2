	THUMB_FUNC_START sub_0806C300
sub_0806C300: @ 0x0806C300
	push {lr}
	ldr r2, _0806C324  @ =gRam
	ldr r0, _0806C328  @ =0x000009E8
	add r1, r2, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0806C31E
	ldr r0, _0806C32C  @ =0x00000A4C
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0806C31E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C324:
	.4byte gRam
_0806C328:
	.4byte 0x000009E8
_0806C32C:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_0806C300

