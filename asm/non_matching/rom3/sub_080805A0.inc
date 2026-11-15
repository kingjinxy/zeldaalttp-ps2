	THUMB_FUNC_START sub_080805A0
sub_080805A0: @ 0x080805A0
	push {r4,r5,lr}
	ldr r2, _080805D0  @ =gRam
	ldr r0, _080805D4  @ =0x00000AEC
	add r4, r2, r0
	ldrh r3, [r4]
	lsl r1, r3, #1
	ldr r5, _080805D8  @ =0x00000C2A
	add r0, r2, r5
	add r1, r1, r0
	mov r5, #151
	lsl r5, r5, #4
	add r0, r2, r5
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r1]
	add r3, r3, #1
	strh r3, [r4]
	ldr r0, _080805DC  @ =0x00000AEE
	add r2, r2, r0
	strh r3, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
_080805D0:
	.4byte gRam
_080805D4:
	.4byte 0x00000AEC
_080805D8:
	.4byte 0x00000C2A
_080805DC:
	.4byte 0x00000AEE
	THUMB_FUNC_END sub_080805A0

