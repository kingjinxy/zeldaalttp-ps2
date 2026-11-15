	THUMB_FUNC_START sub_080F9F14
sub_080F9F14: @ 0x080F9F14
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #8
	bl sub_080CF388
	ldr r0, _080F9F48  @ =gRam
	ldr r1, _080F9F4C  @ =0x00000FC2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsr r1, r1, #1
	mov r0, #6
	and r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _080F9F50  @ =gUnknown_0817A344
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #2
	bl sub_080C9480
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F9F48:
	.4byte gRam
_080F9F4C:
	.4byte 0x00000FC2
_080F9F50:
	.4byte gUnknown_0817A344
	THUMB_FUNC_END sub_080F9F14

