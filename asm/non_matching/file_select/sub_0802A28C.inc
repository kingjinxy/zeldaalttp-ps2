	THUMB_FUNC_START sub_0802A28C
sub_0802A28C: @ 0x0802A28C
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r0, [r4, #11]
	cmp r0, #0
	beq _0802A2CC
	ldr r0, _0802A2C4  @ =0x0000014D
	mov r2, #50
	ldrsh r1, [r4, r2]
	ldr r3, _0802A2C8  @ =gUnknown_03000450
	ldrh r2, [r3, #24]
	sub r1, r1, r2
	asr r1, r1, #4
	mov r5, #54
	ldrsh r2, [r4, r5]
	ldrh r3, [r3, #26]
	sub r2, r2, r3
	asr r2, r2, #4
	lsl r2, r2, #6
	orr r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r2, r4, #0
	add r2, r2, #80
	ldrh r2, [r2]
	bl sub_08014658
	b _0802A2F8
	.byte 0x00
	.byte 0x00
_0802A2C4:
	.4byte 0x0000014D
_0802A2C8:
	.4byte gUnknown_03000450
_0802A2CC:
	mov r0, #166
	lsl r0, r0, #1
	mov r2, #50
	ldrsh r1, [r4, r2]
	ldr r3, _0802A300  @ =gUnknown_03000450
	ldrh r2, [r3, #24]
	sub r1, r1, r2
	asr r1, r1, #4
	mov r5, #54
	ldrsh r2, [r4, r5]
	ldrh r3, [r3, #26]
	sub r2, r2, r3
	asr r2, r2, #4
	lsl r2, r2, #6
	orr r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r2, r4, #0
	add r2, r2, #80
	ldrh r2, [r2]
	bl sub_08014658
_0802A2F8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802A300:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_0802A28C

