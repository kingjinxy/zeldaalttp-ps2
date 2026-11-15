	THUMB_FUNC_START sub_0808DBE0
sub_0808DBE0: @ 0x0808DBE0
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808DC80  @ =gRam
	ldr r0, _0808DC84  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #12
	bne _0808DC76
	ldr r0, _0808DC88  @ =0x000009E8
	add r2, r4, r0
	ldrh r0, [r2]
	add r0, r0, #1
	mov r1, #0
	strh r0, [r2]
	strb r1, [r3]
	mov r0, #178
	lsl r0, r0, #3
	bl sub_08092568
	ldr r2, _0808DC8C  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808DC90  @ =0x00003844
	bl sub_0808B8B8
	ldr r0, _0808DC94  @ =0x00000596
	str r0, [sp, #4]
	ldr r0, _0808DC98  @ =0x00003848
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, #194
	lsl r0, r0, #3
	str r0, [sp, #4]
	ldr r0, _0808DC9C  @ =0x00003834
	str r0, [sp]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808DCA0  @ =0x00000692
	str r0, [sp, #4]
	ldr r0, _0808DCA4  @ =0x0000382C
	str r0, [sp]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, #56
	mov r1, #0
	bl sub_0812A324
_0808DC76:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808DC80:
	.4byte gRam
_0808DC84:
	.4byte 0x00000A02
_0808DC88:
	.4byte 0x000009E8
_0808DC8C:
	.4byte 0x0000096C
_0808DC90:
	.4byte 0x00003844
_0808DC94:
	.4byte 0x00000596
_0808DC98:
	.4byte 0x00003848
_0808DC9C:
	.4byte 0x00003834
_0808DCA0:
	.4byte 0x00000692
_0808DCA4:
	.4byte 0x0000382C
	THUMB_FUNC_END sub_0808DBE0

