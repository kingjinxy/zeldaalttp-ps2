	THUMB_FUNC_START sub_0808E600
sub_0808E600: @ 0x0808E600
	push {r4,lr}
	ldr r3, _0808E640  @ =gRam
	ldr r1, _0808E644  @ =gUnknown_08152ABA
	ldr r2, _0808E648  @ =0x00000996
	add r0, r3, r2
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r2, [r1]
	ldr r4, _0808E64C  @ =0x00000A28
	add r1, r3, r4
	strh r2, [r1]
	ldr r1, _0808E650  @ =gUnknown_08152ABE
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _0808E654  @ =0x00000A2A
	add r0, r3, r2
	strh r1, [r0]
	ldr r1, _0808E658  @ =gUnknown_08153B98
	sub r4, r4, #64
	add r3, r3, r4
	ldrh r0, [r3]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r4}
	pop {r0}
	bx r0
_0808E640:
	.4byte gRam
_0808E644:
	.4byte gUnknown_08152ABA
_0808E648:
	.4byte 0x00000996
_0808E64C:
	.4byte 0x00000A28
_0808E650:
	.4byte gUnknown_08152ABE
_0808E654:
	.4byte 0x00000A2A
_0808E658:
	.4byte gUnknown_08153B98
	THUMB_FUNC_END sub_0808E600

