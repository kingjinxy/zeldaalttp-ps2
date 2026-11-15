	THUMB_FUNC_START sub_08126D7C
sub_08126D7C: @ 0x08126D7C
	push {r4,lr}
	bl sub_08125874
	bl sub_08126BF8
	ldr r0, _08126DAC  @ =gUnknown_03000050
	mov r1, #0
	strh r1, [r0, #4]
	mov r1, #112
	strh r1, [r0, #6]
	mov r0, #7
_08126D92:
	lsl r4, r0, #24
	lsr r0, r4, #24
	bl sub_08126E10
	mov r0, #255
	lsl r0, r0, #24
	add r4, r4, r0
	lsr r0, r4, #24
	cmp r4, #0
	bge _08126D92
	pop {r4}
	pop {r0}
	bx r0
_08126DAC:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_08126D7C

