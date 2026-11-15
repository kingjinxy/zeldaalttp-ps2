	THUMB_FUNC_START sub_080FB02C
sub_080FB02C: @ 0x080FB02C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	bl sub_080FAC20
	ldr r1, _080FB04C  @ =gRam
	ldr r2, _080FB050  @ =0x00001052
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FB04C:
	.4byte gRam
_080FB050:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080FB02C

