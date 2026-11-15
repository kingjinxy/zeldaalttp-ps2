	THUMB_FUNC_START sub_0808B948
sub_0808B948: @ 0x0808B948
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	add r6, r0, #0
	mov r8, r1
	ldr r4, [r6]
	ldr r5, [r1]
	add r0, r5, #0
	bl sub_08092568
	ldr r2, _0808B9DC  @ =gRam
	ldr r1, _0808B9E0  @ =0x0000096C
	add r2, r2, r1
	strh r0, [r2]
	mov r0, #0
	ldrsh r1, [r2, r0]
	lsl r1, r1, #1
	ldr r0, _0808B9E4  @ =gUnknown_02018000
	add r1, r1, r0
	ldr r3, _0808B9E8  @ =gUnknown_08155B4E
	lsl r0, r4, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r2, r0]
	lsl r1, r1, #1
	ldr r0, _0808B9EC  @ =gUnknown_02018002
	add r1, r1, r0
	add r0, r4, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r2, r0]
	lsl r1, r1, #1
	ldr r0, _0808B9F0  @ =gUnknown_02018040
	add r1, r1, r0
	add r0, r4, #2
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r2, r0]
	lsl r1, r1, #1
	ldr r0, _0808B9F4  @ =gUnknown_02018042
	add r1, r1, r0
	add r0, r4, #3
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r2, r1]
	bl sub_080925A4
	add r1, r0, #0
	add r0, r4, #0
	mov r2, #0
	bl sub_0808B624
	add r5, r5, #2
	add r4, r4, #4
	str r4, [r6]
	mov r0, r8
	str r5, [r0]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808B9DC:
	.4byte gRam
_0808B9E0:
	.4byte 0x0000096C
_0808B9E4:
	.4byte gUnknown_02018000
_0808B9E8:
	.4byte gUnknown_08155B4E
_0808B9EC:
	.4byte gUnknown_02018002
_0808B9F0:
	.4byte gUnknown_02018040
_0808B9F4:
	.4byte gUnknown_02018042
	THUMB_FUNC_END sub_0808B948

