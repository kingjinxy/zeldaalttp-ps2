	THUMB_FUNC_START sub_0808F468
sub_0808F468: @ 0x0808F468
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	mov r3, #128
	lsl r3, r3, #5
	and r3, r3, r1
	lsl r3, r3, #1
	mov r6, #128
	lsl r6, r6, #4
	and r6, r6, r1
	mov r5, #64
	and r5, r5, r1
	lsl r5, r5, #6
	mov r4, #32
	and r4, r4, r1
	lsl r4, r4, #5
	mov r2, #240
	lsl r2, r2, #3
	and r2, r2, r1
	asr r2, r2, #1
	orr r3, r3, r6
	orr r3, r3, r5
	orr r3, r3, r4
	orr r3, r3, r2
	mov r2, #31
	and r2, r2, r1
	orr r3, r3, r2
	lsl r3, r3, #1
	ldr r2, _0808F500  @ =gUnknown_02018000
	add r2, r3, r2
	ldr r4, _0808F504  @ =gUnknown_08155B4E
	lsl r1, r0, #1
	add r1, r1, r4
	ldrh r1, [r1]
	mov r8, r1
	strh r1, [r2]
	ldr r1, _0808F508  @ =gUnknown_02018002
	add r2, r3, r1
	add r1, r0, #1
	lsl r1, r1, #1
	add r1, r1, r4
	ldrh r6, [r1]
	strh r6, [r2]
	ldr r2, _0808F50C  @ =gUnknown_02018040
	add r2, r3, r2
	add r1, r0, #2
	lsl r1, r1, #1
	add r1, r1, r4
	ldrh r5, [r1]
	strh r5, [r2]
	ldr r2, _0808F510  @ =gUnknown_02018042
	add r1, r3, r2
	add r0, r0, #3
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r0, _0808F514  @ =gUnknown_02020000
	add r0, r3, r0
	mov r1, r8
	strh r1, [r0]
	ldr r1, _0808F518  @ =gUnknown_02020002
	add r0, r3, r1
	strh r6, [r0]
	ldr r0, _0808F51C  @ =gUnknown_02020040
	add r0, r3, r0
	strh r5, [r0]
	ldr r0, _0808F520  @ =gUnknown_02020042
	add r3, r3, r0
	strh r2, [r3]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808F500:
	.4byte gUnknown_02018000
_0808F504:
	.4byte gUnknown_08155B4E
_0808F508:
	.4byte gUnknown_02018002
_0808F50C:
	.4byte gUnknown_02018040
_0808F510:
	.4byte gUnknown_02018042
_0808F514:
	.4byte gUnknown_02020000
_0808F518:
	.4byte gUnknown_02020002
_0808F51C:
	.4byte gUnknown_02020040
_0808F520:
	.4byte gUnknown_02020042
	THUMB_FUNC_END sub_0808F468

