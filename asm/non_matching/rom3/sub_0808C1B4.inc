	THUMB_FUNC_START sub_0808C1B4
sub_0808C1B4: @ 0x0808C1B4
	push {r4,r5,lr}
	add r5, r0, #0
	ldr r4, _0808C238  @ =gRam
	ldr r0, _0808C23C  @ =0x0000096C
	add r4, r4, r0
	mov r0, #0
	ldrsh r1, [r4, r0]
	lsl r1, r1, #1
	ldr r0, _0808C240  @ =gUnknown_02018000
	add r1, r1, r0
	ldr r2, _0808C244  @ =gUnknown_08155B4E
	lsl r0, r5, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r4, r0]
	lsl r1, r1, #1
	ldr r0, _0808C248  @ =gUnknown_02018002
	add r1, r1, r0
	add r0, r5, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r4, r0]
	lsl r1, r1, #1
	ldr r0, _0808C24C  @ =gUnknown_02018040
	add r1, r1, r0
	add r0, r5, #2
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r4, r0]
	lsl r1, r1, #1
	ldr r0, _0808C250  @ =gUnknown_02018042
	add r1, r1, r0
	add r0, r5, #3
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r4, r1]
	bl sub_080925A4
	add r1, r0, #0
	add r0, r5, #0
	bl sub_0809260C
	mov r1, #0
	ldrsh r0, [r4, r1]
	bl sub_080925A4
	add r1, r0, #0
	add r0, r5, #0
	mov r2, #0
	bl sub_0808B624
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808C238:
	.4byte gRam
_0808C23C:
	.4byte 0x0000096C
_0808C240:
	.4byte gUnknown_02018000
_0808C244:
	.4byte gUnknown_08155B4E
_0808C248:
	.4byte gUnknown_02018002
_0808C24C:
	.4byte gUnknown_02018040
_0808C250:
	.4byte gUnknown_02018042
	THUMB_FUNC_END sub_0808C1B4

