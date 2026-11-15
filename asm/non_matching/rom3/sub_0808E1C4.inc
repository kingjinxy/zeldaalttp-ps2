	THUMB_FUNC_START sub_0808E1C4
sub_0808E1C4: @ 0x0808E1C4
	push {r4,lr}
	mov r2, #7
	ldr r4, _0808E210  @ =gRam
	mov r3, #0
	ldr r1, _0808E214  @ =gUnknown_020008DE
	ldr r0, _0808E218  @ =gUnknown_02000CBE
_0808E1D0:
	strh r3, [r0]
	strh r3, [r1]
	sub r1, r1, #2
	sub r0, r0, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _0808E1D0
	ldr r1, _0808E21C  @ =0x00000958
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _0808E220  @ =0x00000956
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _0808E224  @ =0x00000952
	add r0, r4, r1
	ldrh r1, [r0]
	sub r2, r2, #6
	add r0, r4, r2
	strh r1, [r0]
	ldr r0, _0808E228  @ =0x0000099B
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r2, r2, #152
	add r1, r4, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
_0808E210:
	.4byte gRam
_0808E214:
	.4byte gUnknown_020008DE
_0808E218:
	.4byte gUnknown_02000CBE
_0808E21C:
	.4byte 0x00000958
_0808E220:
	.4byte 0x00000956
_0808E224:
	.4byte 0x00000952
_0808E228:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_0808E1C4

