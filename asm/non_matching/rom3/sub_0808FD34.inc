	THUMB_FUNC_START sub_0808FD34
sub_0808FD34: @ 0x0808FD34
	push {r4,lr}
	ldr r4, _0808FDA0  @ =0x00003884
	ldr r1, _0808FDA4  @ =0x00000C3E
	add r0, r4, #0
	bl sub_0808F5C0
	ldr r0, _0808FDA8  @ =0x00003888
	mov r1, #196
	lsl r1, r1, #4
	bl sub_0808F5C0
	ldr r1, _0808FDAC  @ =0x00000C42
	add r0, r4, #0
	bl sub_0808F5C0
	ldr r0, _0808FDB0  @ =0x0000388C
	ldr r1, _0808FDB4  @ =0x00000CBE
	bl sub_0808F5C0
	mov r2, #210
	lsl r2, r2, #6
	ldr r0, _0808FDB8  @ =gUnknown_02018040
	add r3, r2, r0
	ldr r1, _0808FDBC  @ =gUnknown_08155B4E
	ldr r4, _0808FDC0  @ =0x00007124
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FDC4  @ =gUnknown_02018042
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FDC8  @ =gUnknown_02020000
	add r3, r2, r0
	sub r4, r4, #6
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0808FDCC  @ =gUnknown_02020002
	add r2, r2, r0
	add r4, r4, #2
	add r1, r1, r4
	ldrh r0, [r1]
	strh r0, [r2]
	ldr r0, _0808FDD0  @ =0x00003894
	ldr r1, _0808FDD4  @ =0x00000CC2
	bl sub_0808F5C0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808FDA0:
	.4byte 0x00003884
_0808FDA4:
	.4byte 0x00000C3E
_0808FDA8:
	.4byte 0x00003888
_0808FDAC:
	.4byte 0x00000C42
_0808FDB0:
	.4byte 0x0000388C
_0808FDB4:
	.4byte 0x00000CBE
_0808FDB8:
	.4byte gUnknown_02018040
_0808FDBC:
	.4byte gUnknown_08155B4E
_0808FDC0:
	.4byte 0x00007124
_0808FDC4:
	.4byte gUnknown_02018042
_0808FDC8:
	.4byte gUnknown_02020000
_0808FDCC:
	.4byte gUnknown_02020002
_0808FDD0:
	.4byte 0x00003894
_0808FDD4:
	.4byte 0x00000CC2
	THUMB_FUNC_END sub_0808FD34

