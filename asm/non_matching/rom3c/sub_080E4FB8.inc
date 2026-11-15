	THUMB_FUNC_START sub_080E4FB8
sub_080E4FB8: @ 0x080E4FB8
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl GetRandomInt
	ldr r3, _080E4FEC  @ =gRam
	ldr r2, _080E4FF0  @ =0x00000FB2
	add r1, r3, r2
	add r1, r4, r1
	mov r2, #3
	and r2, r2, r0
	strb r2, [r1]
	ldr r1, _080E4FF4  @ =0x00001082
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _080E4FF8  @ =0x00000FC2
	add r3, r3, r2
	add r4, r4, r3
	mov r0, #16
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E4FEC:
	.4byte gRam
_080E4FF0:
	.4byte 0x00000FB2
_080E4FF4:
	.4byte 0x00001082
_080E4FF8:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E4FB8

