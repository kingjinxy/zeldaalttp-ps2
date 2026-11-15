	THUMB_FUNC_START sub_0808BAC0
sub_0808BAC0: @ 0x0808BAC0
	push {r4-r6,lr}
	mov r6, r9
	mov r5, r8
	push {r5,r6}
	mov r8, r0
	mov r9, r1
	ldr r5, [r0]
	ldr r6, [r1]
	add r0, r6, #0
	bl sub_08092568
	ldr r4, _0808BB6C  @ =gRam
	ldr r1, _0808BB70  @ =0x0000096C
	add r4, r4, r1
	strh r0, [r4]
	mov r0, #0
	ldrsh r1, [r4, r0]
	lsl r1, r1, #1
	ldr r0, _0808BB74  @ =gUnknown_02018000
	add r1, r1, r0
	ldr r2, _0808BB78  @ =gUnknown_08155B4E
	lsl r0, r5, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r4, r0]
	lsl r1, r1, #1
	ldr r0, _0808BB7C  @ =gUnknown_02018002
	add r1, r1, r0
	add r0, r5, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r4, r0]
	lsl r1, r1, #1
	ldr r0, _0808BB80  @ =gUnknown_02018040
	add r1, r1, r0
	add r0, r5, #2
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r4, r0]
	lsl r1, r1, #1
	ldr r0, _0808BB84  @ =gUnknown_02018042
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
	mov r2, #0
	bl sub_0808B624
	mov r1, #0
	ldrsh r0, [r4, r1]
	bl sub_080925A4
	add r1, r0, #0
	add r0, r5, #0
	mov r2, #0
	bl sub_0808B814
	add r6, r6, #2
	add r5, r5, #4
	mov r0, r8
	str r5, [r0]
	mov r1, r9
	str r6, [r1]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808BB6C:
	.4byte gRam
_0808BB70:
	.4byte 0x0000096C
_0808BB74:
	.4byte gUnknown_02018000
_0808BB78:
	.4byte gUnknown_08155B4E
_0808BB7C:
	.4byte gUnknown_02018002
_0808BB80:
	.4byte gUnknown_02018040
_0808BB84:
	.4byte gUnknown_02018042
	THUMB_FUNC_END sub_0808BAC0

