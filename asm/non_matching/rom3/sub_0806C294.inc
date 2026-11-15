	THUMB_FUNC_START sub_0806C294
sub_0806C294: @ 0x0806C294
	push {lr}
	ldr r1, _0806C2B0  @ =gUnknown_02010980
	mov r0, #9
	strb r0, [r1]
	bl sub_080B31BC
	ldr r0, _0806C2B4  @ =gRam
	ldr r1, _0806C2B8  @ =0x00000A3C
	add r0, r0, r1
	mov r1, #14
	strh r1, [r0]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C2B0:
	.4byte gUnknown_02010980
_0806C2B4:
	.4byte gRam
_0806C2B8:
	.4byte 0x00000A3C
	THUMB_FUNC_END sub_0806C294

