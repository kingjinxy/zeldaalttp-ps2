	THUMB_FUNC_START sub_0808E22C
sub_0808E22C: @ 0x0808E22C
	push {r4,r5,lr}
	sub sp, sp, #8
	ldr r0, _0808E2E8  @ =0x0000099E
	bl sub_08092568
	ldr r5, _0808E2EC  @ =gRam
	ldr r2, _0808E2F0  @ =0x0000096C
	add r1, r5, r2
	strh r0, [r1]
	ldr r0, _0808E2F4  @ =0x000039E0
	bl sub_0808B8B8
	mov r0, #154
	lsl r0, r0, #4
	str r0, [sp, #4]
	ldr r0, _0808E2F8  @ =0x000039E4
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808E2FC  @ =0x00000A1E
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
	ldr r0, _0808E300  @ =0x00000A9E
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
	ldr r0, _0808E304  @ =0x00000B1E
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
	ldr r0, _0808E308  @ =gUnknown_02000400
	ldrh r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r5, r5, r1
	strh r0, [r5]
	add sp, sp, #8
	pop {r4,r5}
	pop {r0}
	bx r0
_0808E2E8:
	.4byte 0x0000099E
_0808E2EC:
	.4byte gRam
_0808E2F0:
	.4byte 0x0000096C
_0808E2F4:
	.4byte 0x000039E0
_0808E2F8:
	.4byte 0x000039E4
_0808E2FC:
	.4byte 0x00000A1E
_0808E300:
	.4byte 0x00000A9E
_0808E304:
	.4byte 0x00000B1E
_0808E308:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_0808E22C

