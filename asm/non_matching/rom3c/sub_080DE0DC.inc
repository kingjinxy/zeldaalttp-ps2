	THUMB_FUNC_START sub_080DE0DC
sub_080DE0DC: @ 0x080DE0DC
	push {lr}
	bl sub_080AA868
	cmp r0, #19
	bgt _080DE0EA
	mov r0, #0
	b _080DE0F4
_080DE0EA:
	mov r0, #20
	neg r0, r0
	bl sub_080AA83C
	mov r0, #1
_080DE0F4:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080DE0DC

