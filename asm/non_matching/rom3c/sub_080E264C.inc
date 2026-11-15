	THUMB_FUNC_START sub_080E264C
sub_080E264C: @ 0x080E264C
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080E2614
	ldr r2, _080E2678  @ =gRam
	ldr r1, _080E267C  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r0, _080E2680  @ =0x00000FC2
	add r2, r2, r0
	add r4, r4, r2
	mov r0, #160
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E2678:
	.4byte gRam
_080E267C:
	.4byte 0x00000F52
_080E2680:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E264C

