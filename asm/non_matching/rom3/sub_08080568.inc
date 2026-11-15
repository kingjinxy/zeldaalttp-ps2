	THUMB_FUNC_START sub_08080568
sub_08080568: @ 0x08080568
	push {r4,r5,lr}
	ldr r1, _08080594  @ =gRam
	ldr r0, _08080598  @ =0x00000B44
	add r4, r1, r0
	ldrh r3, [r4]
	lsl r2, r3, #1
	ldr r5, _0808059C  @ =0x00000C62
	add r0, r1, r5
	add r2, r2, r0
	mov r0, #151
	lsl r0, r0, #4
	add r1, r1, r0
	ldrh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r2]
	add r3, r3, #1
	strh r3, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08080594:
	.4byte gRam
_08080598:
	.4byte 0x00000B44
_0808059C:
	.4byte 0x00000C62
	THUMB_FUNC_END sub_08080568

