	THUMB_FUNC_START sub_080F1AEC
sub_080F1AEC: @ 0x080F1AEC
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080F1B14  @ =gRam
	ldr r1, _080F1B18  @ =0x0000096C
	add r0, r0, r1
	mov r1, #2
	strh r1, [r0]
	ldr r1, _080F1B1C  @ =gUnknown_08178F20
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F1B14:
	.4byte gRam
_080F1B18:
	.4byte 0x0000096C
_080F1B1C:
	.4byte gUnknown_08178F20
	THUMB_FUNC_END sub_080F1AEC

