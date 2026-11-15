	THUMB_FUNC_START sub_0808E774
sub_0808E774: @ 0x0808E774
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808E80C  @ =gRam
	ldr r0, _0808E810  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #48
	bne _0808E802
	ldr r0, _0808E814  @ =0x000009E8
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
	ldr r0, _0808E818  @ =0x0000045E
	bl sub_08092568
	ldr r2, _0808E81C  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808E820  @ =0x00003A30
	bl sub_0808B8B8
	mov r0, #140
	lsl r0, r0, #3
	str r0, [sp, #4]
	ldr r0, _0808E824  @ =0x00003A34
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E828  @ =0x000004DE
	str r0, [sp, #4]
	ldr r0, _0808E82C  @ =0x00003A38
	str r0, [sp]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E830  @ =0x0000055E
	str r0, [sp, #4]
	mov r0, #233
	lsl r0, r0, #6
	str r0, [sp]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
_0808E802:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808E80C:
	.4byte gRam
_0808E810:
	.4byte 0x00000A02
_0808E814:
	.4byte 0x000009E8
_0808E818:
	.4byte 0x0000045E
_0808E81C:
	.4byte 0x0000096C
_0808E820:
	.4byte 0x00003A30
_0808E824:
	.4byte 0x00003A34
_0808E828:
	.4byte 0x000004DE
_0808E82C:
	.4byte 0x00003A38
_0808E830:
	.4byte 0x0000055E
	THUMB_FUNC_END sub_0808E774

