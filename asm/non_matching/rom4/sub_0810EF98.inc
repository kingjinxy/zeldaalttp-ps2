	THUMB_FUNC_START sub_0810EF98
sub_0810EF98: @ 0x0810EF98
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #16
	lsr r4, r4, #16
	bl sub_080AA868
	lsl r4, r4, #16
	asr r4, r4, #16
	sub r0, r0, r4
	cmp r0, #0
	blt _0810EFB8
	neg r0, r4
	bl sub_080AA83C
	mov r0, #1
	b _0810EFBA
_0810EFB8:
	mov r0, #0
_0810EFBA:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0810EF98

