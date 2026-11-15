	THUMB_FUNC_START sub_080ED658
sub_080ED658: @ 0x080ED658
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080ED688  @ =gRam
	ldr r1, _080ED68C  @ =0x00001152
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080ED690  @ =0x00000FC2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080ED682
	ldr r0, _080ED694  @ =0x000010A2
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080ED682:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ED688:
	.4byte gRam
_080ED68C:
	.4byte 0x00001152
_080ED690:
	.4byte 0x00000FC2
_080ED694:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_080ED658

