	THUMB_FUNC_START sub_080E2C08
sub_080E2C08: @ 0x080E2C08
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080E2C24  @ =gRam
	ldr r2, _080E2C28  @ =0x00000F62
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	mov r2, #0
	bl sub_080E2A88
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E2C24:
	.4byte gRam
_080E2C28:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080E2C08

