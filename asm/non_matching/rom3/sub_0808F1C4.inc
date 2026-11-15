	THUMB_FUNC_START sub_0808F1C4
sub_0808F1C4: @ 0x0808F1C4
	push {r4,lr}
	sub sp, sp, #8
	ldr r0, _0808F234  @ =0x00000D3E
	bl sub_08092568
	ldr r1, _0808F238  @ =gRam
	ldr r2, _0808F23C  @ =0x0000096C
	add r1, r1, r2
	strh r0, [r1]
	ldr r0, _0808F240  @ =0x0000386C
	bl sub_0808B8B8
	mov r0, #212
	lsl r0, r0, #4
	str r0, [sp, #4]
	ldr r0, _0808F244  @ =0x00003870
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	ldr r0, _0808F248  @ =0x00000DBE
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B9F8
	ldr r0, _0808F24C  @ =0x00000E3E
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r2, _0808F250  @ =gUnknown_020022D8
	ldrb r0, [r2]
	mov r1, #32
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #123
	mov r1, #0
	bl sub_0812A324
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808F234:
	.4byte 0x00000D3E
_0808F238:
	.4byte gRam
_0808F23C:
	.4byte 0x0000096C
_0808F240:
	.4byte 0x0000386C
_0808F244:
	.4byte 0x00003870
_0808F248:
	.4byte 0x00000DBE
_0808F24C:
	.4byte 0x00000E3E
_0808F250:
	.4byte gUnknown_020022D8
	THUMB_FUNC_END sub_0808F1C4

