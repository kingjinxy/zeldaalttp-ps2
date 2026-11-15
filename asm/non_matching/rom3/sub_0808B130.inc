	THUMB_FUNC_START sub_0808B130
sub_0808B130: @ 0x0808B130
	push {lr}
	sub sp, sp, #4
	mov r1, sp
	mov r0, #240
	strh r0, [r1]
	ldr r1, _0808B150  @ =gUnknown_02001600
	ldr r2, _0808B154  @ =0x01000200
	mov r0, sp
	bl CpuSet
	bl sub_0806BDA4
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808B150:
	.4byte gUnknown_02001600
_0808B154:
	.4byte 0x01000200
	THUMB_FUNC_END sub_0808B130

