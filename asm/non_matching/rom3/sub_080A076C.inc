	THUMB_FUNC_START sub_080A076C
sub_080A076C: @ 0x080A076C
	ldr r1, _080A0780  @ =gRam
	ldr r0, _080A0784  @ =0x000017D8
	add r2, r1, r0
	ldr r0, _080A0788  @ =0x00000974
	add r1, r1, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
_080A0780:
	.4byte gRam
_080A0784:
	.4byte 0x000017D8
_080A0788:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A076C

