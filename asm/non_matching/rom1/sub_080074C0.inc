	thumb_func_start sub_080074C0
sub_080074C0: @ 0x080074C0
	push {lr}
	mov r2, sb
	mov r3, sl
	push {r2, r3}
	bl sub_080076C4
	pop {r2, r3}
	mov sb, r2
	mov sl, r3
	pop {pc}

