	THUMB_FUNC_START sub_0808E8F4
sub_0808E8F4: @ 0x0808E8F4
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808E970  @ =gRam
	ldr r0, _0808E974  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	bne _0808E968
	ldr r0, _0808E978  @ =0x000009E8
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
	ldr r0, _0808E97C  @ =0x0000045E
	bl sub_08092568
	ldr r2, _0808E980  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808E984  @ =0x00003A58
	bl sub_0808B8B8
	mov r0, #140
	lsl r0, r0, #3
	str r0, [sp, #4]
	ldr r0, _0808E988  @ =0x00003A5C
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E98C  @ =0x000004DE
	str r0, [sp, #4]
	ldr r0, _0808E990  @ =0x00003A60
	str r0, [sp]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
_0808E968:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
_0808E970:
	.4byte gRam
_0808E974:
	.4byte 0x00000A02
_0808E978:
	.4byte 0x000009E8
_0808E97C:
	.4byte 0x0000045E
_0808E980:
	.4byte 0x0000096C
_0808E984:
	.4byte 0x00003A58
_0808E988:
	.4byte 0x00003A5C
_0808E98C:
	.4byte 0x000004DE
_0808E990:
	.4byte 0x00003A60
	THUMB_FUNC_END sub_0808E8F4

