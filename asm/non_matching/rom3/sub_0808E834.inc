	THUMB_FUNC_START sub_0808E834
sub_0808E834: @ 0x0808E834
	push {r4,r5,lr}
	sub sp, sp, #8
	ldr r4, _0808E8CC  @ =gRam
	ldr r0, _0808E8D0  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #52
	bne _0808E8C4
	ldr r0, _0808E8D4  @ =0x000009E8
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
	ldr r0, _0808E8D8  @ =0x0000045E
	bl sub_08092568
	ldr r2, _0808E8DC  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808E8E0  @ =0x00003A48
	bl sub_0808B8B8
	mov r0, #140
	lsl r0, r0, #3
	str r0, [sp, #4]
	ldr r0, _0808E8E4  @ =0x00003A4C
	str r0, [sp]
	add r5, sp, #4
	mov r0, sp
	add r1, r5, #0
	bl sub_0808B948
	ldr r0, _0808E8E8  @ =0x000004DE
	str r0, [sp, #4]
	ldr r4, _0808E8EC  @ =0x00003A50
	str r4, [sp]
	mov r0, sp
	add r1, r5, #0
	bl sub_0808B948
	str r4, [sp]
	mov r0, sp
	add r1, r5, #0
	bl sub_0808B948
	ldr r0, _0808E8F0  @ =0x0000055E
	str r0, [sp, #4]
	add r4, r4, #4
	str r4, [sp]
	mov r0, sp
	add r1, r5, #0
	bl sub_0808B948
	str r4, [sp]
	mov r0, sp
	add r1, r5, #0
	bl sub_0808B948
_0808E8C4:
	add sp, sp, #8
	pop {r4,r5}
	pop {r0}
	bx r0
_0808E8CC:
	.4byte gRam
_0808E8D0:
	.4byte 0x00000A02
_0808E8D4:
	.4byte 0x000009E8
_0808E8D8:
	.4byte 0x0000045E
_0808E8DC:
	.4byte 0x0000096C
_0808E8E0:
	.4byte 0x00003A48
_0808E8E4:
	.4byte 0x00003A4C
_0808E8E8:
	.4byte 0x000004DE
_0808E8EC:
	.4byte 0x00003A50
_0808E8F0:
	.4byte 0x0000055E
	THUMB_FUNC_END sub_0808E834

