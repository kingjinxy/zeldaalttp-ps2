	THUMB_FUNC_START sub_080260E4
sub_080260E4: @ 0x080260E4
	push {r4-r7,lr}
	add r5, r0, #0
	ldr r4, [r5, #88]
	mov r1, #50
	ldrsh r0, [r4, r1]
	ldr r6, [r5, #116]
	mov r2, #50
	ldrsh r1, [r6, r2]
	sub r0, r0, r1
	mov r1, #3
	bl __divsi3
	lsl r0, r0, #16
	lsr r7, r0, #16
	mov r1, #54
	ldrsh r0, [r4, r1]
	mov r2, #54
	ldrsh r1, [r6, r2]
	sub r0, r0, r1
	mov r1, #3
	bl __divsi3
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldrb r0, [r5, #10]
	cmp r0, #2
	beq _08026120
	cmp r0, #3
	beq _08026130
	b _08026144
_08026120:
	lsl r0, r7, #16
	asr r0, r0, #16
	ldrh r2, [r6, #50]
	add r0, r0, r2
	strh r0, [r5, #50]
	lsl r0, r1, #16
	asr r0, r0, #16
	b _0802613E
_08026130:
	lsl r0, r7, #16
	asr r0, r0, #15
	ldrh r2, [r6, #50]
	add r0, r0, r2
	strh r0, [r5, #50]
	lsl r0, r1, #16
	asr r0, r0, #15
_0802613E:
	ldrh r6, [r6, #54]
	add r0, r0, r6
	strh r0, [r5, #54]
_08026144:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080260E4

	.byte 0x00
	.byte 0x00
