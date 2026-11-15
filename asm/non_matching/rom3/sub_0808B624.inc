	THUMB_FUNC_START sub_0808B624
sub_0808B624: @ 0x0808B624
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r4, r0, #0
	ldr r5, _0808B6E0  @ =gRam
	add r1, r1, r2
	mov r0, #150
	lsl r0, r0, #4
	add r2, r5, r0
	mov r0, #0
	strh r1, [r2]
	ldr r1, _0808B6E4  @ =0x00000964
	add r5, r5, r1
	strh r0, [r5]
	mov r7, #0
	ldrsh r0, [r2, r7]
	bl sub_08092568
	lsl r0, r0, #1
	ldr r2, _0808B6E8  @ =0x00001FFF
	add r1, r2, #0
	and r0, r0, r1
	strh r0, [r5]
	ldr r7, _0808B6EC  @ =gUnknown_02000400
	mov r9, r7
	mov r1, r9
	ldrh r6, [r1]
	lsl r2, r6, #1
	add r7, r7, #2
	add r3, r2, r7
	ldr r7, _0808B6F0  @ =0xFFFFC000
	add r1, r7, #0
	add r0, r0, r1
	strh r0, [r3]
	ldr r1, _0808B6F4  @ =gUnknown_02000404
	add r0, r2, r1
	mov r7, #2
	mov r8, r7
	mov r1, r8
	strh r1, [r0]
	ldr r7, _0808B6F8  @ =gUnknown_02000406
	add r1, r2, r7
	ldr r3, _0808B6FC  @ =gUnknown_08155B4E
	lsl r0, r4, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r0, _0808B700  @ =gUnknown_02000408
	add r1, r2, r0
	add r0, r4, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r7, r7, #4
	add r1, r2, r7
	ldr r7, _0808B704  @ =0xFFFFC040
	add r0, r7, #0
	ldrh r5, [r5]
	add r0, r0, r5
	strh r0, [r1]
	ldr r1, _0808B708  @ =gUnknown_0200040C
	add r0, r2, r1
	mov r7, r8
	strh r7, [r0]
	ldr r0, _0808B70C  @ =gUnknown_0200040E
	add r1, r2, r0
	add r0, r4, #2
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r7, _0808B710  @ =gUnknown_02000410
	add r1, r2, r7
	add r4, r4, #3
	lsl r4, r4, #1
	add r4, r4, r3
	ldrh r0, [r4]
	strh r0, [r1]
	ldr r0, _0808B714  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _0808B718  @ =0x0000FFFF
	add r0, r1, #0
	strh r0, [r2]
	add r6, r6, #8
	mov r2, r9
	strh r6, [r2]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_0808B6E0:
	.4byte gRam
_0808B6E4:
	.4byte 0x00000964
_0808B6E8:
	.4byte 0x00001FFF
_0808B6EC:
	.4byte gUnknown_02000400
_0808B6F0:
	.4byte 0xFFFFC000
_0808B6F4:
	.4byte gUnknown_02000404
_0808B6F8:
	.4byte gUnknown_02000406
_0808B6FC:
	.4byte gUnknown_08155B4E
_0808B700:
	.4byte gUnknown_02000408
_0808B704:
	.4byte 0xFFFFC040
_0808B708:
	.4byte gUnknown_0200040C
_0808B70C:
	.4byte gUnknown_0200040E
_0808B710:
	.4byte gUnknown_02000410
_0808B714:
	.4byte gUnknown_02000412
_0808B718:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_0808B624

