	THUMB_FUNC_START sub_0808E6B4
sub_0808E6B4: @ 0x0808E6B4
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808E748  @ =gRam
	ldr r0, _0808E74C  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #48
	bne _0808E740
	ldr r0, _0808E750  @ =0x000009E8
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
	ldr r0, _0808E754  @ =0x0000045E
	bl sub_08092568
	ldr r2, _0808E758  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808E75C  @ =0x00003A20
	bl sub_0808B8B8
	mov r0, #140
	lsl r0, r0, #3
	str r0, [sp, #4]
	ldr r0, _0808E760  @ =0x00003A24
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E764  @ =0x000004DE
	str r0, [sp, #4]
	ldr r0, _0808E768  @ =0x00003A88
	str r0, [sp]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E76C  @ =0x0000055E
	str r0, [sp, #4]
	ldr r0, _0808E770  @ =0x00003A28
	str r0, [sp]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
_0808E740:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
_0808E748:
	.4byte gRam
_0808E74C:
	.4byte 0x00000A02
_0808E750:
	.4byte 0x000009E8
_0808E754:
	.4byte 0x0000045E
_0808E758:
	.4byte 0x0000096C
_0808E75C:
	.4byte 0x00003A20
_0808E760:
	.4byte 0x00003A24
_0808E764:
	.4byte 0x000004DE
_0808E768:
	.4byte 0x00003A88
_0808E76C:
	.4byte 0x0000055E
_0808E770:
	.4byte 0x00003A28
	THUMB_FUNC_END sub_0808E6B4

