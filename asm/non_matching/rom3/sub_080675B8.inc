	THUMB_FUNC_START sub_080675B8
sub_080675B8: @ 0x080675B8
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	add r6, r0, #0
	add r0, r1, #0
	add r5, r2, #0
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r5, r5, #16
	lsr r5, r5, #16
	ldrh r1, [r6]
	ldr r4, _08067614  @ =gUnknown_0201EFF8
	ldrh r2, [r4, #4]
	add r1, r1, r2
	asr r1, r1, #4
	ldrh r2, [r6, #2]
	ldrh r3, [r4, #6]
	add r2, r2, r3
	asr r2, r2, #4
	lsl r2, r2, #6
	orr r1, r1, r2
	mov r2, #128
	lsl r2, r2, #7
	mov r8, r2
	bl 0x08008F78
	ldrh r1, [r6, #4]
	ldrh r0, [r4, #4]
	add r1, r1, r0
	asr r1, r1, #4
	ldrh r0, [r6, #6]
	ldrh r2, [r4, #6]
	add r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	add r0, r5, #0
	mov r2, r8
	bl 0x08008F78
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08067614:
	.4byte gUnknown_0201EFF8
	THUMB_FUNC_END sub_080675B8

