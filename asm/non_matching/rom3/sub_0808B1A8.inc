	THUMB_FUNC_START sub_0808B1A8
sub_0808B1A8: @ 0x0808B1A8
	push {lr}
	ldr r2, _0808B1EC  @ =gRam
	ldr r1, _0808B1F0  @ =0x00000B1E
	add r0, r2, r1
	mov r1, #1
	strh r1, [r0]
	mov r0, #175
	lsl r0, r0, #4
	add r3, r2, r0
	ldrh r0, [r3]
	cmp r0, #0
	bne _0808B1CA
	ldr r0, _0808B1F4  @ =0x000009DA
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #16
	strh r0, [r1]
_0808B1CA:
	ldrh r0, [r3]
	cmp r0, #2
	beq _0808B1DA
	mov r0, #161
	lsl r0, r0, #4
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
_0808B1DA:
	ldr r0, _0808B1F8  @ =0x00000B22
	add r1, r2, r0
	mov r0, #0
	strh r0, [r1]
	bl sub_0806FE5C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808B1EC:
	.4byte gRam
_0808B1F0:
	.4byte 0x00000B1E
_0808B1F4:
	.4byte 0x000009DA
_0808B1F8:
	.4byte 0x00000B22
	THUMB_FUNC_END sub_0808B1A8

