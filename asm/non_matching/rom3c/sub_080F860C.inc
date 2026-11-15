	THUMB_FUNC_START sub_080F860C
sub_080F860C: @ 0x080F860C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r5, _080F8674  @ =gRam
	ldr r2, _080F8678  @ =0x00000FC2
	add r0, r5, r2
	add r3, r1, r0
	ldrb r2, [r3]
	cmp r2, #0
	bne _080F862E
	ldr r6, _080F867C  @ =0x00000F52
	add r0, r5, r6
	add r0, r1, r0
	strb r2, [r0]
	mov r0, #128
	strb r0, [r3]
_080F862E:
	ldr r0, _080F8680  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _080F8684  @ =gUnknown_08179FD4
	ldr r6, _080F8688  @ =0x00000FB2
	add r2, r5, r6
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F868C  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _080F8690  @ =gUnknown_08179FD8
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080F8694  @ =0x00000F62
	add r2, r5, r1
	add r2, r4, r2
	ldr r6, _080F8698  @ =0x00000996
	add r0, r5, r6
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	pop {r4-r6}
	pop {r0}
	bx r0
_080F8674:
	.4byte gRam
_080F8678:
	.4byte 0x00000FC2
_080F867C:
	.4byte 0x00000F52
_080F8680:
	.4byte 0x00000F22
_080F8684:
	.4byte gUnknown_08179FD4
_080F8688:
	.4byte 0x00000FB2
_080F868C:
	.4byte 0x00000F12
_080F8690:
	.4byte gUnknown_08179FD8
_080F8694:
	.4byte 0x00000F62
_080F8698:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F860C

