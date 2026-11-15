	THUMB_FUNC_START sub_0810D8FC
sub_0810D8FC: @ 0x0810D8FC
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _0810D918  @ =gRam
	ldr r2, _0810D91C  @ =0x00000B36
	add r0, r1, r2
	ldrh r2, [r0]
	cmp r2, #63
	beq _0810D924
	cmp r2, #63
	bgt _0810D920
	cmp r2, #4
	beq _0810D924
	b _0810D92E
_0810D918:
	.4byte gRam
_0810D91C:
	.4byte 0x00000B36
_0810D920:
	cmp r2, #206
	bne _0810D92E
_0810D924:
	ldr r2, _0810D934  @ =0x00001122
	add r0, r1, r2
	add r0, r3, r0
	mov r1, #13
	strb r1, [r0]
_0810D92E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810D934:
	.4byte 0x00001122
	THUMB_FUNC_END sub_0810D8FC

