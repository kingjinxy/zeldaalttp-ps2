	THUMB_FUNC_START sub_0809E684
sub_0809E684: @ 0x0809E684
	push {r4,lr}
	ldr r0, _0809E6B0  @ =gRam
	ldr r1, _0809E6B4  @ =0x0000172B
	add r4, r0, r1
	ldrb r1, [r4]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _0809E69A
	bl sub_080962D0
_0809E69A:
	ldrb r1, [r4]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _0809E6A8
	bl sub_08094DC0
_0809E6A8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E6B0:
	.4byte gRam
_0809E6B4:
	.4byte 0x0000172B
	THUMB_FUNC_END sub_0809E684

