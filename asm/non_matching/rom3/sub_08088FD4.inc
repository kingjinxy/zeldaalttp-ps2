	THUMB_FUNC_START sub_08088FD4
sub_08088FD4: @ 0x08088FD4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r8, r0
	mov r9, r1
	ldr r5, [r1]
	ldr r1, _08089104  @ =gRam
	ldr r0, _08089108  @ =0x0000097C
	add r1, r1, r0
	mov r0, #2
	strh r0, [r1]
	mov r0, r8
	ldr r4, [r0]
	ldr r6, _0808910C  @ =gUnknown_02018000
	add r7, r1, #0
_08088FF4:
	add r0, r4, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5]
	strh r1, [r0]
	add r0, r4, #0
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #2]
	strh r1, [r0]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r4, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #4]
	strh r1, [r0]
	mov r1, #192
	lsl r1, r1, #1
	add r0, r4, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #6]
	strh r1, [r0]
	mov r1, #128
	lsl r1, r1, #2
	add r0, r4, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #8]
	strh r1, [r0]
	mov r1, #160
	lsl r1, r1, #2
	add r0, r4, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #10]
	strh r1, [r0]
	mov r1, #192
	lsl r1, r1, #2
	add r0, r4, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #12]
	strh r1, [r0]
	mov r1, #224
	lsl r1, r1, #2
	add r0, r4, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #14]
	strh r1, [r0]
	mov r1, #128
	lsl r1, r1, #3
	add r0, r4, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #16]
	strh r1, [r0]
	mov r1, #144
	lsl r1, r1, #3
	add r0, r4, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #18]
	strh r1, [r0]
	mov r1, #160
	lsl r1, r1, #3
	add r0, r4, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #20]
	strh r1, [r0]
	mov r1, #176
	lsl r1, r1, #3
	add r0, r4, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #22]
	strh r1, [r0]
	add r4, r4, #2
	add r5, r5, #24
	ldrh r0, [r7]
	sub r0, r0, #1
	strh r0, [r7]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08088FF4
	mov r0, r8
	str r4, [r0]
	mov r1, r9
	str r5, [r1]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08089104:
	.4byte gRam
_08089108:
	.4byte 0x0000097C
_0808910C:
	.4byte gUnknown_02018000
	THUMB_FUNC_END sub_08088FD4

