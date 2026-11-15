	THUMB_FUNC_START sub_08089110
sub_08089110: @ 0x08089110
	push {r4-r7,lr}
	sub sp, sp, #8
	str r0, [sp]
	ldr r0, _08089254  @ =gUnknown_08167650
	str r0, [sp, #4]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_08088FD4
	ldr r1, _08089258  @ =gRam
	ldr r2, _0808925C  @ =0x00000AFC
	add r0, r1, r2
	ldrh r0, [r0]
	sub r0, r0, #1
	ldr r2, _08089260  @ =0x0000097C
	add r1, r1, r2
	strh r0, [r1]
	lsl r0, r0, #16
	add r7, r4, #0
	cmp r0, #0
	bne _0808913E
	b _0808923E
_0808913E:
	ldr r0, [sp, #4]
	ldrh r4, [r0]
	ldr r5, _08089264  @ =gUnknown_02018000
	add r6, r1, #0
_08089146:
	ldr r0, [sp]
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r4, [r0]
	ldr r0, [sp]
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r4, [r0]
	ldr r0, [sp]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r4, [r0]
	ldr r0, [sp]
	mov r2, #192
	lsl r2, r2, #1
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r4, [r0]
	ldr r0, [sp]
	mov r1, #128
	lsl r1, r1, #2
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r4, [r0]
	ldr r0, [sp]
	mov r2, #160
	lsl r2, r2, #2
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r4, [r0]
	ldr r0, [sp]
	mov r1, #192
	lsl r1, r1, #2
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r4, [r0]
	ldr r0, [sp]
	mov r2, #224
	lsl r2, r2, #2
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r4, [r0]
	ldr r0, [sp]
	mov r1, #128
	lsl r1, r1, #3
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r4, [r0]
	ldr r0, [sp]
	mov r2, #144
	lsl r2, r2, #3
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r4, [r0]
	ldr r0, [sp]
	mov r1, #160
	lsl r1, r1, #3
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r4, [r0]
	ldr r0, [sp]
	mov r2, #176
	lsl r2, r2, #3
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	strh r4, [r0]
	ldr r0, [sp]
	add r0, r0, #2
	str r0, [sp]
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08089146
_0808923E:
	ldr r0, [sp, #4]
	add r0, r0, #2
	str r0, [sp, #4]
	mov r0, sp
	add r1, r7, #0
	bl sub_08088FD4
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
_08089254:
	.4byte gUnknown_08167650
_08089258:
	.4byte gRam
_0808925C:
	.4byte 0x00000AFC
_08089260:
	.4byte 0x0000097C
_08089264:
	.4byte gUnknown_02018000
	THUMB_FUNC_END sub_08089110

