	THUMB_FUNC_START sub_080F9560
sub_080F9560: @ 0x080F9560
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080F9598  @ =gRam
	ldr r1, _080F959C  @ =0x0000096C
	add r2, r0, r1
	mov r1, #3
	strh r1, [r2]
	ldr r1, _080F95A0  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r1, r0, #1
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _080F95A4  @ =gUnknown_0817A2B0
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
_080F9598:
	.4byte gRam
_080F959C:
	.4byte 0x0000096C
_080F95A0:
	.4byte 0x00000F92
_080F95A4:
	.4byte gUnknown_0817A2B0
	THUMB_FUNC_END sub_080F9560

