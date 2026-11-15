	THUMB_FUNC_START sub_080D42DC
sub_080D42DC: @ 0x080D42DC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080D4310  @ =gRam
	ldr r2, _080D4314  @ =0x0000165C
	add r1, r3, r2
	ldrh r2, [r1]
	lsr r2, r2, #6
	mov r1, #1
	and r2, r2, r1
	ldr r1, _080D4318  @ =0x00000F92
	add r3, r3, r1
	add r3, r0, r3
	lsl r2, r2, #1
	ldrb r3, [r3]
	add r2, r2, r3
	lsl r1, r2, #1
	add r1, r1, r2
	lsl r1, r1, #3
	ldr r2, _080D431C  @ =gUnknown_08174F4C
	add r1, r1, r2
	mov r2, #3
	bl sub_080C9480
	pop {r0}
	bx r0
_080D4310:
	.4byte gRam
_080D4314:
	.4byte 0x0000165C
_080D4318:
	.4byte 0x00000F92
_080D431C:
	.4byte gUnknown_08174F4C
	THUMB_FUNC_END sub_080D42DC

