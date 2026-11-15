	THUMB_FUNC_START sub_0809E7D4
sub_0809E7D4: @ 0x0809E7D4
	ldr r1, _0809E804  @ =gRam
	ldr r0, _0809E808  @ =0x0000172A
	add r2, r1, r0
	mov r0, #0
	strb r0, [r2]
	mov r3, #182
	lsl r3, r3, #5
	add r2, r1, r3
	add r3, r3, #218
	add r0, r1, r3
	ldrh r0, [r0]
	ldrh r3, [r2]
	add r0, r0, r3
	strh r0, [r2]
	ldr r0, _0809E80C  @ =0x000016C4
	add r2, r1, r0
	ldr r3, _0809E810  @ =0x0000179C
	add r1, r1, r3
	ldrh r0, [r1]
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	bx lr
	.byte 0x00
	.byte 0x00
_0809E804:
	.4byte gRam
_0809E808:
	.4byte 0x0000172A
_0809E80C:
	.4byte 0x000016C4
_0809E810:
	.4byte 0x0000179C
	THUMB_FUNC_END sub_0809E7D4

