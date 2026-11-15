	THUMB_FUNC_START sub_0808E15C
sub_0808E15C: @ 0x0808E15C
	push {r4,r5,lr}
	ldr r3, _0808E1A4  @ =gRam
	ldr r0, _0808E1A8  @ =0x000009E8
	add r4, r3, r0
	ldrh r0, [r4]
	cmp r0, #1
	bls _0808E18E
	ldr r1, _0808E1AC  @ =gUnknown_08152ABA
	ldr r2, _0808E1B0  @ =0x00000996
	add r0, r3, r2
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r2, [r1]
	ldr r5, _0808E1B4  @ =0x00000A28
	add r1, r3, r5
	strh r2, [r1]
	ldr r1, _0808E1B8  @ =gUnknown_08152ABE
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _0808E1BC  @ =0x00000A2A
	add r0, r3, r2
	strh r1, [r0]
_0808E18E:
	ldr r0, _0808E1C0  @ =gUnknown_08153B80
	ldrh r1, [r4]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	bl _call_via_r0
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808E1A4:
	.4byte gRam
_0808E1A8:
	.4byte 0x000009E8
_0808E1AC:
	.4byte gUnknown_08152ABA
_0808E1B0:
	.4byte 0x00000996
_0808E1B4:
	.4byte 0x00000A28
_0808E1B8:
	.4byte gUnknown_08152ABE
_0808E1BC:
	.4byte 0x00000A2A
_0808E1C0:
	.4byte gUnknown_08153B80
	THUMB_FUNC_END sub_0808E15C

