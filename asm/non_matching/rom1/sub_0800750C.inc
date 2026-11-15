	thumb_func_start sub_0800750C
sub_0800750C: @ 0x0800750C
	push {lr}
	movs r0, r0
	mov r1, sl
	bl sub_080075AC
	bl sub_080075DC
	bl sub_08007608
	eors r2, r2
	adds r3, r0, #0
	movs r1, #0x1c
_08007524:
	strb r2, [r3]
	adds r3, #1
	subs r1, #1
	bne _08007524
	pop {pc}
	.align 2, 0

