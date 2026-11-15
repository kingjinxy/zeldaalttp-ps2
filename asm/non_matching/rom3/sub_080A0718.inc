	THUMB_FUNC_START sub_080A0718
sub_080A0718: @ 0x080A0718
	push {lr}
	ldr r1, _080A073C  @ =gRam
	ldr r2, _080A0740  @ =0x00001783
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A0736
	ldr r3, _080A0744  @ =0x00001714
	add r2, r1, r3
	ldr r3, _080A0748  @ =0x00000974
	add r0, r1, r3
	ldrb r1, [r0]
	ldrb r0, [r2]
	orr r0, r0, r1
	strb r0, [r2]
_080A0736:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A073C:
	.4byte gRam
_080A0740:
	.4byte 0x00001783
_080A0744:
	.4byte 0x00001714
_080A0748:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080A0718

