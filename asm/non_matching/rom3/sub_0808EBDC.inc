	THUMB_FUNC_START sub_0808EBDC
sub_0808EBDC: @ 0x0808EBDC
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808EC48  @ =gRam
	ldr r0, _0808EC4C  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	bne _0808EC3E
	ldr r2, _0808EC50  @ =0x00000A3E
	add r1, r4, r2
	mov r0, #255
	strb r0, [r1]
	ldr r0, _0808EC54  @ =0x000009E8
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
	ldr r0, _0808EC58  @ =0x000005DE
	bl sub_08092568
	ldr r2, _0808EC5C  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808EC60  @ =0x00003A68
	bl sub_0808B8B8
	mov r0, #188
	lsl r0, r0, #3
	str r0, [sp, #4]
	ldr r0, _0808EC64  @ =0x00003A6C
	str r0, [sp]
	add r1, sp, #4
	mov r0, sp
	bl sub_0808B948
_0808EC3E:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808EC48:
	.4byte gRam
_0808EC4C:
	.4byte 0x00000A02
_0808EC50:
	.4byte 0x00000A3E
_0808EC54:
	.4byte 0x000009E8
_0808EC58:
	.4byte 0x000005DE
_0808EC5C:
	.4byte 0x0000096C
_0808EC60:
	.4byte 0x00003A68
_0808EC64:
	.4byte 0x00003A6C
	THUMB_FUNC_END sub_0808EBDC

