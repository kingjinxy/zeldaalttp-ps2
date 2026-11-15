	THUMB_FUNC_START sub_080210F0
sub_080210F0: @ 0x080210F0
	push {r4-r6,lr}
	add r4, r0, #0
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldr r2, _08021150  @ =gUnknown_03000450
	ldrh r0, [r2, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r3, #54
	ldrsh r0, [r4, r3]
	ldrh r2, [r2, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	lsr r6, r1, #16
	add r5, r4, #0
	add r5, r5, #80
	ldrh r1, [r5]
	add r0, r6, #0
	bl 0x0800932C
	lsl r0, r0, #16
	mov r1, #156
	lsl r1, r1, #17
	cmp r0, r1
	bne _08021148
	mov r0, #15
	mov r1, #15
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08021148
	add r0, r4, #0
	bl sub_0803D3D0
	ldrh r2, [r5]
	mov r0, #47
	add r1, r6, #0
	bl sub_08014658
_08021148:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08021150:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_080210F0

