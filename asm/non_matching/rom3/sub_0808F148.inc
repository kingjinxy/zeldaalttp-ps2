	THUMB_FUNC_START sub_0808F148
sub_0808F148: @ 0x0808F148
	push {lr}
	ldr r1, _0808F174  @ =gRam
	ldr r3, _0808F178  @ =0x00001770
	add r2, r1, r3
	strb r0, [r2]
	ldr r3, _0808F17C  @ =0x00001605
	add r2, r1, r3
	strb r0, [r2]
	mov r2, #201
	lsl r2, r2, #4
	add r1, r1, r2
	strh r0, [r1]
	ldr r1, _0808F180  @ =gUnknown_08153BF0
	sub r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808F174:
	.4byte gRam
_0808F178:
	.4byte 0x00001770
_0808F17C:
	.4byte 0x00001605
_0808F180:
	.4byte gUnknown_08153BF0
	THUMB_FUNC_END sub_0808F148

