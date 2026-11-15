	THUMB_FUNC_START sub_08027034
sub_08027034: @ 0x08027034
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08027056
	add r0, r4, #0
	bl 0x08000620
	add r0, r4, #0
	bl DeleteThisEntity
_08027056:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08027034

