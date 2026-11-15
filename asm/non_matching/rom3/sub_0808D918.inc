	THUMB_FUNC_START sub_0808D918
sub_0808D918: @ 0x0808D918
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808D988  @ =gRam
	ldr r0, _0808D98C  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	bne _0808D97E
	ldr r0, _0808D990  @ =0x000009E8
	add r2, r4, r0
	ldrh r0, [r2]
	add r0, r0, #1
	mov r1, #0
	strh r0, [r2]
	strb r1, [r3]
	mov r0, #41
	mov r1, #0
	bl sub_0812A324
	mov r0, #88
	mov r1, #0
	bl sub_0812A324
	ldr r0, _0808D994  @ =0x0000026A
	bl sub_08092568
	ldr r2, _0808D998  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808D99C  @ =0x000038A8
	bl sub_0808B8B8
	ldr r0, _0808D9A0  @ =0x000038AC
	str r0, [sp]
	ldr r0, _0808D9A4  @ =0x000002EA
	str r0, [sp, #4]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808D9A8  @ =0x0000036A
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
_0808D97E:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808D988:
	.4byte gRam
_0808D98C:
	.4byte 0x00000A02
_0808D990:
	.4byte 0x000009E8
_0808D994:
	.4byte 0x0000026A
_0808D998:
	.4byte 0x0000096C
_0808D99C:
	.4byte 0x000038A8
_0808D9A0:
	.4byte 0x000038AC
_0808D9A4:
	.4byte 0x000002EA
_0808D9A8:
	.4byte 0x0000036A
	THUMB_FUNC_END sub_0808D918

