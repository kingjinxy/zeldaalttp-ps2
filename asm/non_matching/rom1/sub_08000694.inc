	THUMB_FUNC_START sub_08000694
sub_08000694: @ 0x08000694
	push {r4-r7,lr}
	ldr r1, [r0, #72]
	ldr r2, _080007B0  @ =gUnknown_03006A44
	mov r6, #1
	mov r7, #80
	bl sub_080006CC
	add r2, r2, #144
	mov r6, #2
	bl sub_080006CC
	add r2, r2, #144
	mov r6, #4
	bl sub_080006CC
	add r2, r2, #144
	mov r6, #8
	bl sub_080006CC
	pop {r4-r7,pc}
	THUMB_FUNC_END sub_08000694

	.align 2, 0
