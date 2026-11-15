	THUMB_FUNC_START sub_08074560
sub_08074560: @ 0x08074560
	push {lr}
	ldr r0, _08074584  @ =gRam
	ldr r1, _08074588  @ =0x000009C6
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _0807458C  @ =gUnknown_02002DC0
	add r0, r1, r2
	ldrb r0, [r0]
	ldr r2, _08074590  @ =gUnknown_0814C8E8
	add r1, r1, r2
	ldrb r1, [r1]
	bl sub_0813084C
	bl sub_080733D8
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08074584:
	.4byte gRam
_08074588:
	.4byte 0x000009C6
_0807458C:
	.4byte gUnknown_02002DC0
_08074590:
	.4byte gUnknown_0814C8E8
	THUMB_FUNC_END sub_08074560

