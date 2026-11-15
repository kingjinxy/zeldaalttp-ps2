	THUMB_FUNC_START sub_0808EB34
sub_0808EB34: @ 0x0808EB34
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808EBB8  @ =gRam
	ldr r0, _0808EBBC  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	bne _0808EBAE
	ldr r0, _0808EBC0  @ =0x000009E8
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
	ldr r0, _0808EBC4  @ =0x0000055E
	bl sub_08092568
	ldr r2, _0808EBC8  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808EBCC  @ =0x00003A70
	bl sub_0808B8B8
	mov r0, #172
	lsl r0, r0, #3
	str r0, [sp, #4]
	ldr r0, _0808EBD0  @ =0x00003A74
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808EBD4  @ =0x000005DE
	str r0, [sp, #4]
	mov r0, #234
	lsl r0, r0, #6
	str r0, [sp]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808EBD8  @ =0x00003A84
	str r0, [sp]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
_0808EBAE:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808EBB8:
	.4byte gRam
_0808EBBC:
	.4byte 0x00000A02
_0808EBC0:
	.4byte 0x000009E8
_0808EBC4:
	.4byte 0x0000055E
_0808EBC8:
	.4byte 0x0000096C
_0808EBCC:
	.4byte 0x00003A70
_0808EBD0:
	.4byte 0x00003A74
_0808EBD4:
	.4byte 0x000005DE
_0808EBD8:
	.4byte 0x00003A84
	THUMB_FUNC_END sub_0808EB34

