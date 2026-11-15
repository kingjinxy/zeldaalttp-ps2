	THUMB_FUNC_START sub_080F0968
sub_080F0968: @ 0x080F0968
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F0984  @ =gRam
	ldr r1, _080F0988  @ =0x00000FC2
	add r2, r2, r1
	add r2, r0, r2
	ldr r3, _080F098C  @ =gUnknown_08178CE0
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r3
	ldrb r0, [r1]
	strb r0, [r2]
	bx lr
	.byte 0x00
	.byte 0x00
_080F0984:
	.4byte gRam
_080F0988:
	.4byte 0x00000FC2
_080F098C:
	.4byte gUnknown_08178CE0
	THUMB_FUNC_END sub_080F0968

