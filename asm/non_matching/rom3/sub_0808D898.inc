	THUMB_FUNC_START sub_0808D898
sub_0808D898: @ 0x0808D898
	push {r4,lr}
	sub sp, sp, #8
	ldr r4, _0808D8F8  @ =gRam
	ldr r0, _0808D8FC  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	bne _0808D8F0
	ldr r0, _0808D900  @ =0x000009E8
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
	ldr r0, _0808D904  @ =0x0000026A
	bl sub_08092568
	ldr r2, _0808D908  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808D90C  @ =0x000038A0
	bl sub_0808B8B8
	ldr r0, _0808D910  @ =0x000038A4
	str r0, [sp]
	ldr r0, _0808D914  @ =0x000002EA
	str r0, [sp, #4]
	add r1, sp, #4
	mov r0, sp
	bl sub_0808B948
_0808D8F0:
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
_0808D8F8:
	.4byte gRam
_0808D8FC:
	.4byte 0x00000A02
_0808D900:
	.4byte 0x000009E8
_0808D904:
	.4byte 0x0000026A
_0808D908:
	.4byte 0x0000096C
_0808D90C:
	.4byte 0x000038A0
_0808D910:
	.4byte 0x000038A4
_0808D914:
	.4byte 0x000002EA
	THUMB_FUNC_END sub_0808D898

