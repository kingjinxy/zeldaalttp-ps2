	THUMB_FUNC_START sub_08089ECC
sub_08089ECC: @ 0x08089ECC
	push {lr}
	ldr r0, _08089EE4  @ =gRam
	ldr r1, _08089EE8  @ =0x00000C02
	add r0, r0, r1
	mov r1, #16
	strh r1, [r0]
	mov r0, #4
	bl sub_08085D08
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08089EE4:
	.4byte gRam
_08089EE8:
	.4byte 0x00000C02
	THUMB_FUNC_END sub_08089ECC

