	THUMB_FUNC_START sub_080F7528
sub_080F7528: @ 0x080F7528
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080F754C  @ =gRam
	ldr r1, _080F7550  @ =0x00000FC2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080F7544
	ldr r4, _080F7554  @ =0x00000F52
	add r0, r3, r4
	add r0, r2, r0
	strb r1, [r0]
_080F7544:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F754C:
	.4byte gRam
_080F7550:
	.4byte 0x00000FC2
_080F7554:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F7528

