	THUMB_FUNC_START sub_0809E8B0
sub_0809E8B0: @ 0x0809E8B0
	push {lr}
	ldr r0, _0809E8D0  @ =gRam
	ldr r1, _0809E8D4  @ =0x00000996
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	bne _0809E8CA
	mov r0, #1
	mov r1, #33
	bl sub_080AD320
_0809E8CA:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E8D0:
	.4byte gRam
_0809E8D4:
	.4byte 0x00000996
	THUMB_FUNC_END sub_0809E8B0

