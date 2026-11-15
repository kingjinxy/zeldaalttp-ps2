	THUMB_FUNC_START sub_080DC374
sub_080DC374: @ 0x080DC374
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080DC3A0  @ =gRam
	ldr r2, _080DC3A4  @ =0x0000096C
	add r3, r1, r2
	mov r2, #6
	strh r2, [r3]
	ldr r2, _080DC3A8  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r2, [r1]
	lsl r1, r2, #1
	add r1, r1, r2
	lsl r1, r1, #4
	ldr r2, _080DC3AC  @ =gUnknown_08176010
	add r1, r1, r2
	bl sub_080C94D0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DC3A0:
	.4byte gRam
_080DC3A4:
	.4byte 0x0000096C
_080DC3A8:
	.4byte 0x00000F92
_080DC3AC:
	.4byte gUnknown_08176010
	THUMB_FUNC_END sub_080DC374

