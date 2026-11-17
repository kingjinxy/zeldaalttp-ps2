	THUMB_FUNC_START sub_08033760
sub_08033760: @ 0x08033760
	push {r4,lr}
	add r4, r0, #0
	mov r1, #176
	lsl r1, r1, #5
	bl sub_08003F1C
	lsl r0, r0, #24
	cmp r0, #0
	bne _08033776
	mov r0, #2
	strb r0, [r4, #20]
_08033776:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08033760

