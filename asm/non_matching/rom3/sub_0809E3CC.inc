	THUMB_FUNC_START sub_0809E3CC
sub_0809E3CC: @ 0x0809E3CC
	push {lr}
	ldr r0, _0809E3E4  @ =gRam
	ldr r1, _0809E3E8  @ =0x00001791
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0809E3EC
	bl sub_0809E3F4
	b _0809E3EE
_0809E3E4:
	.4byte gRam
_0809E3E8:
	.4byte 0x00001791
_0809E3EC:
	mov r0, #1
_0809E3EE:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0809E3CC

	.byte 0x00
	.byte 0x00
