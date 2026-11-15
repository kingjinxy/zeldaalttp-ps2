	THUMB_FUNC_START sub_0809E6EC
sub_0809E6EC: @ 0x0809E6EC
	push {lr}
	ldr r1, _0809E714  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r0, r1, r2
	ldrh r2, [r0]
	cmp r2, #127
	bls _0809E704
	mov r3, #255
	lsl r3, r3, #8
	add r0, r3, #0
	orr r2, r2, r0
_0809E704:
	ldr r0, _0809E718  @ =0x000016C4
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r2, r0
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E714:
	.4byte gRam
_0809E718:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_0809E6EC

