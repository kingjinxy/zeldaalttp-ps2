	THUMB_FUNC_START sub_0808F254
sub_0808F254: @ 0x0808F254
	push {lr}
	sub sp, sp, #4
	ldr r0, _0808F2B8  @ =0x0000043C
	str r0, [sp]
	mov r0, sp
	bl sub_0808EDC0
	mov r0, sp
	bl sub_0808EDC0
	mov r0, sp
	bl sub_0808EDC0
	ldr r0, _0808F2BC  @ =0x000004BC
	str r0, [sp]
	mov r0, sp
	bl sub_0808EDC0
	mov r0, sp
	bl sub_0808EDC0
	mov r0, sp
	bl sub_0808EDC0
	ldr r0, _0808F2C0  @ =0x0000053C
	str r0, [sp]
	mov r0, sp
	bl sub_0808EDC0
	mov r0, sp
	bl sub_0808EDC0
	mov r0, sp
	bl sub_0808EDC0
	ldr r0, _0808F2C4  @ =0x000005BC
	str r0, [sp]
	mov r0, sp
	bl sub_0808EDC0
	mov r0, sp
	bl sub_0808EDC0
	mov r0, sp
	bl sub_0808EDC0
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808F2B8:
	.4byte 0x0000043C
_0808F2BC:
	.4byte 0x000004BC
_0808F2C0:
	.4byte 0x0000053C
_0808F2C4:
	.4byte 0x000005BC
	THUMB_FUNC_END sub_0808F254

