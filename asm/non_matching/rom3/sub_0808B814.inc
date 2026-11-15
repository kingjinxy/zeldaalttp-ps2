	THUMB_FUNC_START sub_0808B814
sub_0808B814: @ 0x0808B814
	push {r4-r7,lr}
	add r5, r0, #0
	ldr r4, _0808B888  @ =gRam
	add r1, r1, r2
	mov r0, #150
	lsl r0, r0, #4
	add r2, r4, r0
	mov r0, #0
	strh r1, [r2]
	ldr r1, _0808B88C  @ =0x00000964
	add r4, r4, r1
	strh r0, [r4]
	mov r7, #0
	ldrsh r0, [r2, r7]
	bl sub_08092568
	lsl r0, r0, #1
	ldr r2, _0808B890  @ =0x00001FFF
	add r1, r2, #0
	and r0, r0, r1
	strh r0, [r4]
	ldr r6, _0808B894  @ =gUnknown_02000400
	ldrh r4, [r6]
	lsl r2, r4, #1
	ldr r7, _0808B898  @ =gUnknown_02000402
	add r3, r2, r7
	ldr r7, _0808B89C  @ =0xFFFFA000
	add r1, r7, #0
	add r0, r0, r1
	strh r0, [r3]
	ldr r0, _0808B8A0  @ =gUnknown_02000404
	add r1, r2, r0
	mov r0, #2
	strh r0, [r1]
	ldr r7, _0808B8A4  @ =gUnknown_02000406
	add r1, r2, r7
	ldr r3, _0808B8A8  @ =gUnknown_08155B4E
	lsl r0, r5, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r0, _0808B8AC  @ =gUnknown_02000408
	add r1, r2, r0
	add r5, r5, #1
	lsl r5, r5, #1
	add r5, r5, r3
	ldrh r0, [r5]
	strh r0, [r1]
	ldr r1, _0808B8B0  @ =gUnknown_0200040A
	add r2, r2, r1
	ldr r7, _0808B8B4  @ =0x0000FFFF
	add r0, r7, #0
	strh r0, [r2]
	add r4, r4, #4
	strh r4, [r6]
	pop {r4-r7}
	pop {r0}
	bx r0
_0808B888:
	.4byte gRam
_0808B88C:
	.4byte 0x00000964
_0808B890:
	.4byte 0x00001FFF
_0808B894:
	.4byte gUnknown_02000400
_0808B898:
	.4byte gUnknown_02000402
_0808B89C:
	.4byte 0xFFFFA000
_0808B8A0:
	.4byte gUnknown_02000404
_0808B8A4:
	.4byte gUnknown_02000406
_0808B8A8:
	.4byte gUnknown_08155B4E
_0808B8AC:
	.4byte gUnknown_02000408
_0808B8B0:
	.4byte gUnknown_0200040A
_0808B8B4:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_0808B814

