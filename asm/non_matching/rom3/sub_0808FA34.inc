	THUMB_FUNC_START sub_0808FA34
sub_0808FA34: @ 0x0808FA34
	push {r4,lr}
	mov r2, #240
	lsl r2, r2, #4
	ldr r0, _0808FA74  @ =gUnknown_02018000
	add r3, r2, r0
	ldr r1, _0808FA78  @ =gUnknown_08155B4E
	ldr r4, _0808FA7C  @ =0x00001090
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FA80  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FA84  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FA88  @ =gUnknown_02018042
	add r2, r2, r0
	add r4, r4, #2
	add r1, r1, r4
	ldrh r0, [r1]
	strh r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808FA74:
	.4byte gUnknown_02018000
_0808FA78:
	.4byte gUnknown_08155B4E
_0808FA7C:
	.4byte 0x00001090
_0808FA80:
	.4byte gUnknown_02018002
_0808FA84:
	.4byte gUnknown_02018040
_0808FA88:
	.4byte gUnknown_02018042
	THUMB_FUNC_END sub_0808FA34

