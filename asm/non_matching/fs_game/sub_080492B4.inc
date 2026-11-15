	THUMB_FUNC_START sub_080492B4
sub_080492B4: @ 0x080492B4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_0804930C
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	ldr r2, _080492F0  @ =0xFFFFFE98
	add r0, r1, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r1, _080492F4  @ =0x0000011F
	cmp r0, r1
	bhi _080492FC
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	ldr r2, _080492F8  @ =0xFFFFFE70
	add r0, r1, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #207
	bhi _080492FC
	b _08049302
_080492F0:
	.4byte 0xFFFFFE98
_080492F4:
	.4byte 0x0000011F
_080492F8:
	.4byte 0xFFFFFE70
_080492FC:
	ldr r0, [r7]
	bl DeleteThisEntity
_08049302:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080492B4

	.byte 0x00
	.byte 0x00
