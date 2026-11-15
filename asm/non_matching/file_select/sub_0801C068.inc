	THUMB_FUNC_START sub_0801C068
sub_0801C068: @ 0x0801C068
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	bl sub_0801B9D8
	ldrb r0, [r4, #23]
	cmp r0, #0
	bne _0801C096
	mov r0, #7
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #116
	ldrh r0, [r0]
	add r1, r4, #0
	add r1, r1, #118
	strh r0, [r1]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r4, #28]
_0801C096:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C068

