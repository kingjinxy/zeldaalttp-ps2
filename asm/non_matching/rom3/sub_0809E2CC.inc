	THUMB_FUNC_START sub_0809E2CC
sub_0809E2CC: @ 0x0809E2CC
	push {lr}
	ldr r1, _0809E2EC  @ =gRam
	ldr r2, _0809E2F0  @ =0x00001750
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _0809E2F4  @ =0x000017DF
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _0809E2F8  @ =0x000017B6
	add r1, r1, r0
	strb r2, [r1]
	bl sub_08092B0C
	pop {r0}
	bx r0
_0809E2EC:
	.4byte gRam
_0809E2F0:
	.4byte 0x00001750
_0809E2F4:
	.4byte 0x000017DF
_0809E2F8:
	.4byte 0x000017B6
	THUMB_FUNC_END sub_0809E2CC

