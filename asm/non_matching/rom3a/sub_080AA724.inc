	THUMB_FUNC_START sub_080AA724
sub_080AA724: @ 0x080AA724
	push {lr}
	bl sub_080A9E38
	bl sub_080AA920
	bl sub_080AA874
	ldr r0, _080AA740  @ =gRam
	ldr r1, _080AA744  @ =0x00000A4C
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
	pop {r0}
	bx r0
_080AA740:
	.4byte gRam
_080AA744:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080AA724

