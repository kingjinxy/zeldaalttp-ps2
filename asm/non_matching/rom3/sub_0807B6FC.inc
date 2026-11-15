	THUMB_FUNC_START sub_0807B6FC
sub_0807B6FC: @ 0x0807B6FC
	push {lr}
	ldr r0, _0807B714  @ =gRam
	ldr r1, _0807B718  @ =0x00000BBF
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0807B70E
	bl sub_0807A478
_0807B70E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B714:
	.4byte gRam
_0807B718:
	.4byte 0x00000BBF
	THUMB_FUNC_END sub_0807B6FC

