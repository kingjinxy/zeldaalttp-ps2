	THUMB_FUNC_START sub_08080380
sub_08080380: @ 0x08080380
	add r3, r0, #0
	mov r2, #64
	and r2, r2, r3
	lsl r2, r2, #5
	mov r1, #248
	lsl r1, r1, #4
	and r1, r1, r3
	asr r1, r1, #1
	ldr r0, _0808039C  @ =0x0000303F
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	bx lr
	.byte 0x00
	.byte 0x00
_0808039C:
	.4byte 0x0000303F
	THUMB_FUNC_END sub_08080380

