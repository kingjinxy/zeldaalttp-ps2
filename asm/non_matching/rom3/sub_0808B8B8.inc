	THUMB_FUNC_START sub_0808B8B8
sub_0808B8B8: @ 0x0808B8B8
	push {r4,lr}
	add r4, r0, #0
	ldr r2, _0808B92C  @ =gRam
	ldr r0, _0808B930  @ =0x0000096C
	add r2, r2, r0
	mov r0, #0
	ldrsh r1, [r2, r0]
	lsl r1, r1, #1
	ldr r0, _0808B934  @ =gUnknown_02018000
	add r1, r1, r0
	ldr r3, _0808B938  @ =gUnknown_08155B4E
	lsl r0, r4, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r2, r0]
	lsl r1, r1, #1
	ldr r0, _0808B93C  @ =gUnknown_02018002
	add r1, r1, r0
	add r0, r4, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r2, r0]
	lsl r1, r1, #1
	ldr r0, _0808B940  @ =gUnknown_02018040
	add r1, r1, r0
	add r0, r4, #2
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r2, r0]
	lsl r1, r1, #1
	ldr r0, _0808B944  @ =gUnknown_02018042
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
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808B92C:
	.4byte gRam
_0808B930:
	.4byte 0x0000096C
_0808B934:
	.4byte gUnknown_02018000
_0808B938:
	.4byte gUnknown_08155B4E
_0808B93C:
	.4byte gUnknown_02018002
_0808B940:
	.4byte gUnknown_02018040
_0808B944:
	.4byte gUnknown_02018042
	THUMB_FUNC_END sub_0808B8B8

