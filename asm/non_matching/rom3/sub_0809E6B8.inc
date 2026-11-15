	THUMB_FUNC_START sub_0809E6B8
sub_0809E6B8: @ 0x0809E6B8
	push {lr}
	ldr r1, _0809E6E4  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r0, r1, r2
	ldrh r2, [r0]
	cmp r2, #127
	bls _0809E6D2
	ldr r3, _0809E6E8  @ =0xFFFFFF00
	add r0, r3, #0
	orr r2, r2, r0
	lsl r0, r2, #16
	lsr r2, r0, #16
_0809E6D2:
	mov r0, #182
	lsl r0, r0, #5
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r2, r0
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E6E4:
	.4byte gRam
_0809E6E8:
	.4byte 0xFFFFFF00
	THUMB_FUNC_END sub_0809E6B8

