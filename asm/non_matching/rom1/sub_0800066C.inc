	THUMB_FUNC_START sub_0800066C
sub_0800066C: @ 0x0800066C
	push {r4-r7,lr}
	ldr r1, [r0, #72]
	ldr r2, _080007AC  @ =gUnknown_03006A44
	mov r6, #1
	mov r7, #80
	bl sub_080006BC
	add r2, r2, #144
	mov r6, #2
	bl sub_080006BC
	add r2, r2, #144
	mov r6, #4
	bl sub_080006BC
	add r2, r2, #144
	mov r6, #8
	bl sub_080006BC
	pop {r4-r7,pc}
	THUMB_FUNC_END sub_0800066C

