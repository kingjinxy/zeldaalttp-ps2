	THUMB_FUNC_START sub_080DE6E0
sub_080DE6E0: @ 0x080DE6E0
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080DE714  @ =gRam
	ldr r1, _080DE718  @ =0x0000096C
	add r2, r0, r1
	mov r1, #2
	strh r1, [r2]
	ldr r1, _080DE71C  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080DE720  @ =gUnknown_0817642C
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DE714:
	.4byte gRam
_080DE718:
	.4byte 0x0000096C
_080DE71C:
	.4byte 0x00000F92
_080DE720:
	.4byte gUnknown_0817642C
	THUMB_FUNC_END sub_080DE6E0

