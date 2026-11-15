	THUMB_FUNC_START sub_080AE564
sub_080AE564: @ 0x080AE564
	push {lr}
	ldr r0, _080AE580  @ =gRam
	ldr r2, _080AE584  @ =0x00001663
	add r1, r0, r2
	ldrb r0, [r1]
	sub r0, r0, #9
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _080AE57C
	mov r0, #0
	strb r0, [r1]
_080AE57C:
	pop {r0}
	bx r0
_080AE580:
	.4byte gRam
_080AE584:
	.4byte 0x00001663
	THUMB_FUNC_END sub_080AE564

