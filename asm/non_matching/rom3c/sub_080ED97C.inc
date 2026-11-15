	THUMB_FUNC_START sub_080ED97C
sub_080ED97C: @ 0x080ED97C
	push {lr}
	mov r1, #15
	ldr r3, _080ED99C  @ =gUnknown_0300367C
	mov r2, #0
_080ED984:
	lsl r0, r1, #24
	asr r0, r0, #24
	add r1, r0, r3
	strb r2, [r1]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080ED984
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ED99C:
	.4byte gUnknown_0300367C
	THUMB_FUNC_END sub_080ED97C

