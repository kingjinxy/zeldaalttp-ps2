	THUMB_FUNC_START sub_080D7B30
sub_080D7B30: @ 0x080D7B30
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D7B70  @ =gKeyCount
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	ldr r1, _080D7B74  @ =gRam
	ldr r3, _080D7B78  @ =0x00000FA2
	add r2, r1, r3
	add r2, r0, r2
	mov r3, #0
	strb r3, [r2]
	ldr r4, _080D7B7C  @ =0x00000AA8
	add r3, r1, r4
	ldr r2, _080D7B80  @ =gUnknown_08175680
	ldr r4, _080D7B84  @ =0x00000E85
	add r1, r1, r4
	add r1, r0, r1
	ldrb r1, [r1]
	add r1, r1, r2
	ldrb r1, [r1]
	lsl r1, r1, #8
	ldrh r2, [r3]
	orr r1, r1, r2
	strh r1, [r3]
	mov r1, #18
	bl sub_080CF140
	pop {r4}
	pop {r0}
	bx r0
_080D7B70:
	.4byte gKeyCount
_080D7B74:
	.4byte gRam
_080D7B78:
	.4byte 0x00000FA2
_080D7B7C:
	.4byte 0x00000AA8
_080D7B80:
	.4byte gUnknown_08175680
_080D7B84:
	.4byte 0x00000E85
	THUMB_FUNC_END sub_080D7B30

