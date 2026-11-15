	THUMB_FUNC_START sub_0808EA14
sub_0808EA14: @ 0x0808EA14
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808EA90  @ =gRam
	ldr r0, _0808EA94  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	bne _0808EA88
	ldr r0, _0808EA98  @ =0x000009E8
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
	ldr r0, _0808EA9C  @ =0x000004DE
	bl sub_08092568
	ldr r2, _0808EAA0  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808EAA4  @ =0x00003A70
	bl sub_0808B8B8
	mov r0, #156
	lsl r0, r0, #3
	str r0, [sp, #4]
	ldr r0, _0808EAA8  @ =0x00003A74
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808EAAC  @ =0x0000055E
	str r0, [sp, #4]
	ldr r0, _0808EAB0  @ =0x00003A78
	str r0, [sp]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
_0808EA88:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
_0808EA90:
	.4byte gRam
_0808EA94:
	.4byte 0x00000A02
_0808EA98:
	.4byte 0x000009E8
_0808EA9C:
	.4byte 0x000004DE
_0808EAA0:
	.4byte 0x0000096C
_0808EAA4:
	.4byte 0x00003A70
_0808EAA8:
	.4byte 0x00003A74
_0808EAAC:
	.4byte 0x0000055E
_0808EAB0:
	.4byte 0x00003A78
	THUMB_FUNC_END sub_0808EA14

