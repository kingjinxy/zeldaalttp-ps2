	THUMB_FUNC_START sub_0808D7E8
sub_0808D7E8: @ 0x0808D7E8
	push {r4,r5,lr}
	sub sp, sp, #8
	ldr r4, _0808D874  @ =gRam
	ldr r0, _0808D878  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #64
	bne _0808D86A
	ldr r0, _0808D87C  @ =0x000009E8
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
	ldr r2, _0808D880  @ =gUnknown_020022DE
	ldrb r0, [r2]
	mov r1, #32
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #243
	lsl r0, r0, #1
	bl sub_08092568
	ldr r2, _0808D884  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808D888  @ =0x000038C4
	bl sub_0808B8B8
	ldr r5, _0808D88C  @ =0x000002EA
	str r5, [sp, #4]
	mov r0, #227
	lsl r0, r0, #6
	str r0, [sp]
	add r4, sp, #4
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	ldr r0, _0808D890  @ =0x0000026A
	str r0, [sp, #4]
	ldr r0, _0808D894  @ =0x00003898
	str r0, [sp]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
	str r5, [sp, #4]
	mov r0, sp
	add r1, r4, #0
	bl sub_0808B948
_0808D86A:
	add sp, sp, #8
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808D874:
	.4byte gRam
_0808D878:
	.4byte 0x00000A02
_0808D87C:
	.4byte 0x000009E8
_0808D880:
	.4byte gUnknown_020022DE
_0808D884:
	.4byte 0x0000096C
_0808D888:
	.4byte 0x000038C4
_0808D88C:
	.4byte 0x000002EA
_0808D890:
	.4byte 0x0000026A
_0808D894:
	.4byte 0x00003898
	THUMB_FUNC_END sub_0808D7E8

