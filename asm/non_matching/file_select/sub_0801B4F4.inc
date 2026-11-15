	THUMB_FUNC_START sub_0801B4F4
sub_0801B4F4: @ 0x0801B4F4
	push {r4,r5,lr}
	mov r1, #50
	ldrsh r3, [r0, r1]
	ldr r2, _0801B560  @ =gUnknown_03000450
	ldrh r1, [r2, #24]
	add r1, r1, #8
	sub r3, r3, r1
	asr r3, r3, #4
	mov r4, #54
	ldrsh r1, [r0, r4]
	ldrh r2, [r2, #26]
	add r2, r2, #8
	sub r1, r1, r2
	asr r1, r1, #4
	lsl r1, r1, #6
	orr r3, r3, r1
	lsl r3, r3, #16
	lsr r5, r3, #16
	add r0, r0, #80
	ldrh r0, [r0]
	lsr r0, r0, #14
	cmp r0, #2
	beq _0801B564
	mov r4, #128
	lsl r4, r4, #7
	mov r0, #82
	add r1, r5, #0
	add r2, r4, #0
	bl sub_08014658
	add r1, r5, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #83
	add r2, r4, #0
	bl sub_08014658
	add r1, r5, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #84
	add r2, r4, #0
	bl sub_08014658
	add r1, r5, #0
	add r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #85
	add r2, r4, #0
	bl sub_08014658
	b _0801B5A0
_0801B560:
	.4byte gUnknown_03000450
_0801B564:
	mov r4, #128
	lsl r4, r4, #8
	mov r0, #123
	add r1, r5, #0
	add r2, r4, #0
	bl sub_08014658
	add r1, r5, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #124
	add r2, r4, #0
	bl sub_08014658
	add r1, r5, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #125
	add r2, r4, #0
	bl sub_08014658
	add r1, r5, #0
	add r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #126
	add r2, r4, #0
	bl sub_08014658
_0801B5A0:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801B4F4

	.byte 0x00
	.byte 0x00
