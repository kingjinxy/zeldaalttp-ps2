	THUMB_FUNC_START sub_08111C20
sub_08111C20: @ 0x08111C20
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _08111C48  @ =gRam
	ldr r1, _08111C4C  @ =0x0000096C
	add r0, r0, r1
	mov r1, #2
	strh r1, [r0]
	ldr r1, _08111C50  @ =gUnknown_0817D690
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08111C48:
	.4byte gRam
_08111C4C:
	.4byte 0x0000096C
_08111C50:
	.4byte gUnknown_0817D690
	THUMB_FUNC_END sub_08111C20

