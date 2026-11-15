	THUMB_FUNC_START sub_080DB56C
sub_080DB56C: @ 0x080DB56C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080DB594  @ =gRam
	ldr r1, _080DB598  @ =0x00000FC2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DB58E
	mov r0, #161
	lsl r0, r0, #1
	bl sub_080C95C0
	add r0, r4, #0
	bl sub_080DB59C
_080DB58E:
	pop {r4}
	pop {r0}
	bx r0
_080DB594:
	.4byte gRam
_080DB598:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080DB56C

