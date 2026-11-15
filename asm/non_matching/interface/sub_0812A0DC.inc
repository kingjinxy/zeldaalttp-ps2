	THUMB_FUNC_START sub_0812A0DC
sub_0812A0DC: @ 0x0812A0DC
	push {lr}
	bl sub_0812A0B8
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #0
	blt _0812A104
	ldr r1, _0812A108  @ =gUnknown_08198C50
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0812A104
	mov r0, #18
	mov r1, #0
	bl sub_0812C7F0
_0812A104:
	pop {r0}
	bx r0
_0812A108:
	.4byte gUnknown_08198C50
	THUMB_FUNC_END sub_0812A0DC

