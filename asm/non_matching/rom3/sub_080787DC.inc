	THUMB_FUNC_START sub_080787DC
sub_080787DC: @ 0x080787DC
	push {lr}
	ldr r0, _080787F8  @ =gRam
	ldr r1, _080787FC  @ =0x00000B54
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
	ldr r2, _08078800  @ =gUnknown_02010980
	ldrb r0, [r2]
	lsl r1, r0, #1
	strb r1, [r2]
	bl sub_08078504
	pop {r0}
	bx r0
_080787F8:
	.4byte gRam
_080787FC:
	.4byte 0x00000B54
_08078800:
	.4byte gUnknown_02010980
	THUMB_FUNC_END sub_080787DC

