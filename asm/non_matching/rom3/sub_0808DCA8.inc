	THUMB_FUNC_START sub_0808DCA8
sub_0808DCA8: @ 0x0808DCA8
	push {r4,r5,lr}
	sub sp, sp, #8
	ldr r5, _0808DD54  @ =gRam
	ldr r0, _0808DD58  @ =0x00000A02
	add r3, r5, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #12
	bne _0808DD4A
	ldr r0, _0808DD5C  @ =0x000009E8
	add r2, r5, r0
	ldrh r0, [r2]
	add r0, r0, #1
	mov r1, #0
	strh r0, [r2]
	strb r1, [r3]
	mov r4, #178
	lsl r4, r4, #3
	add r0, r4, #0
	bl sub_08092568
	ldr r2, _0808DD60  @ =0x0000096C
	add r1, r5, r2
	strh r0, [r1]
	ldr r0, _0808DD64  @ =0x00003844
	bl sub_0808B8B8
	str r4, [sp, #4]
	ldr r0, _0808DD68  @ =0x0000384C
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808DD6C  @ =0x00000596
	str r0, [sp, #4]
	ldr r0, _0808DD70  @ =0x00003850
	str r0, [sp]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, #194
	lsl r0, r0, #3
	str r0, [sp, #4]
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
	ldr r0, _0808DD74  @ =0x00000692
	str r0, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, #56
	mov r1, #0
	bl sub_0812A324
	bl sub_0808D788
_0808DD4A:
	add sp, sp, #8
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808DD54:
	.4byte gRam
_0808DD58:
	.4byte 0x00000A02
_0808DD5C:
	.4byte 0x000009E8
_0808DD60:
	.4byte 0x0000096C
_0808DD64:
	.4byte 0x00003844
_0808DD68:
	.4byte 0x0000384C
_0808DD6C:
	.4byte 0x00000596
_0808DD70:
	.4byte 0x00003850
_0808DD74:
	.4byte 0x00000692
	THUMB_FUNC_END sub_0808DCA8

