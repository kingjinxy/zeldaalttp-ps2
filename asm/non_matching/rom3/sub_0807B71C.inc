	THUMB_FUNC_START sub_0807B71C
sub_0807B71C: @ 0x0807B71C
	push {lr}
	ldr r0, _0807B740  @ =gRam
	ldr r1, _0807B744  @ =0x000017AA
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0807B73A
	bl sub_080798DC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0807B73A
	bl sub_0807A478
_0807B73A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B740:
	.4byte gRam
_0807B744:
	.4byte 0x000017AA
	THUMB_FUNC_END sub_0807B71C

