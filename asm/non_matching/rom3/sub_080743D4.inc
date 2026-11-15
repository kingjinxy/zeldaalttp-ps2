	THUMB_FUNC_START sub_080743D4
sub_080743D4: @ 0x080743D4
	push {lr}
	ldr r2, _080743F4  @ =gRam
	ldr r1, _080743F8  @ =0x00000CF8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080743F0
	ldr r0, _080743FC  @ =0x00000D02
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_080743F0:
	pop {r0}
	bx r0
_080743F4:
	.4byte gRam
_080743F8:
	.4byte 0x00000CF8
_080743FC:
	.4byte 0x00000D02
	THUMB_FUNC_END sub_080743D4

