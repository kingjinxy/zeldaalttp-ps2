	THUMB_FUNC_START sub_0809E650
sub_0809E650: @ 0x0809E650
	push {r4,lr}
	ldr r0, _0809E67C  @ =gRam
	ldr r1, _0809E680  @ =0x0000172B
	add r4, r0, r1
	ldrb r1, [r4]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _0809E666
	bl sub_08094DC0
_0809E666:
	ldrb r1, [r4]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _0809E674
	bl sub_080962D0
_0809E674:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E67C:
	.4byte gRam
_0809E680:
	.4byte 0x0000172B
	THUMB_FUNC_END sub_0809E650

