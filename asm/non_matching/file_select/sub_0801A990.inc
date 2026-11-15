	THUMB_FUNC_START sub_0801A990
sub_0801A990: @ 0x0801A990
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801A9B2
	mov r0, #3
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #2
	bl 0x08003870
_0801A9B2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A990

