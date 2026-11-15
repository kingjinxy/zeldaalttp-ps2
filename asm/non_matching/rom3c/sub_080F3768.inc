	THUMB_FUNC_START sub_080F3768
sub_080F3768: @ 0x080F3768
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F3788  @ =gUnknown_08179294
	ldr r1, _080F378C  @ =gRam
	ldr r3, _080F3790  @ =0x00001062
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080F3788:
	.4byte gUnknown_08179294
_080F378C:
	.4byte gRam
_080F3790:
	.4byte 0x00001062
	THUMB_FUNC_END sub_080F3768

