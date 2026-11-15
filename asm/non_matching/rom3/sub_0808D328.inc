	THUMB_FUNC_START sub_0808D328
sub_0808D328: @ 0x0808D328
	push {r4,lr}
	ldr r2, _0808D340  @ =gRam
	ldr r3, _0808D344  @ =0x0000096C
	add r2, r2, r3
	strh r1, [r2]
	cmp r0, #0
	beq _0808D350
	ldr r0, _0808D348  @ =0x00003694
	bl sub_0808B8B8
	ldr r4, _0808D34C  @ =0x0000369C
	b _0808D358
_0808D340:
	.4byte gRam
_0808D344:
	.4byte 0x0000096C
_0808D348:
	.4byte 0x00003694
_0808D34C:
	.4byte 0x0000369C
_0808D350:
	ldr r0, _0808D3C8  @ =0x00003690
	bl sub_0808B8B8
	ldr r4, _0808D3CC  @ =0x00003698
_0808D358:
	ldr r2, _0808D3D0  @ =gRam
	ldr r0, _0808D3D4  @ =0x0000096C
	add r2, r2, r0
	mov r3, #0
	ldrsh r1, [r2, r3]
	lsl r1, r1, #1
	ldr r0, _0808D3D8  @ =gUnknown_02018004
	add r1, r1, r0
	ldr r3, _0808D3DC  @ =gUnknown_08155B4E
	lsl r0, r4, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r2, r0]
	lsl r1, r1, #1
	ldr r0, _0808D3E0  @ =gUnknown_02018006
	add r1, r1, r0
	add r0, r4, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r2, r0]
	lsl r1, r1, #1
	ldr r0, _0808D3E4  @ =gUnknown_02018044
	add r1, r1, r0
	add r0, r4, #2
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r2, r0]
	lsl r1, r1, #1
	ldr r0, _0808D3E8  @ =gUnknown_02018046
	add r1, r1, r0
	add r0, r4, #3
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r2, r1]
	bl sub_080925A4
	add r1, r0, #0
	add r0, r4, #0
	mov r2, #2
	bl sub_0808B624
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808D3C8:
	.4byte 0x00003690
_0808D3CC:
	.4byte 0x00003698
_0808D3D0:
	.4byte gRam
_0808D3D4:
	.4byte 0x0000096C
_0808D3D8:
	.4byte gUnknown_02018004
_0808D3DC:
	.4byte gUnknown_08155B4E
_0808D3E0:
	.4byte gUnknown_02018006
_0808D3E4:
	.4byte gUnknown_02018044
_0808D3E8:
	.4byte gUnknown_02018046
	THUMB_FUNC_END sub_0808D328

