	THUMB_FUNC_START sub_0808EDC0
sub_0808EDC0: @ 0x0808EDC0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r10, r0
	ldr r0, [r0]
	mov r8, r0
	bl sub_08092568
	ldr r6, _0808EEA4  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	mov r2, #0
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r1, r3]
	lsl r0, r0, #1
	ldr r7, _0808EEA8  @ =gUnknown_02020000
	add r0, r0, r7
	ldr r3, _0808EEAC  @ =0x000001E3
	add r4, r3, #0
	strh r4, [r0]
	mov r7, #0
	ldrsh r0, [r1, r7]
	lsl r0, r0, #1
	ldr r3, _0808EEB0  @ =gUnknown_02020002
	add r0, r0, r3
	strh r4, [r0]
	mov r7, #0
	ldrsh r0, [r1, r7]
	lsl r0, r0, #1
	add r3, r3, #62
	add r0, r0, r3
	strh r4, [r0]
	mov r7, #0
	ldrsh r0, [r1, r7]
	lsl r0, r0, #1
	add r3, r3, #2
	add r0, r0, r3
	strh r4, [r0]
	mov r7, r8
	strh r7, [r1]
	ldr r0, _0808EEB4  @ =0x00000964
	add r6, r6, r0
	strh r2, [r6]
	mov r2, #0
	ldrsh r0, [r1, r2]
	bl sub_08092568
	lsl r0, r0, #1
	ldr r3, _0808EEB8  @ =0x00001FFF
	add r1, r3, #0
	and r0, r0, r1
	strh r0, [r6]
	ldr r7, _0808EEBC  @ =gUnknown_02000400
	mov r9, r7
	mov r1, r9
	ldrh r5, [r1]
	lsl r2, r5, #1
	add r7, r7, #2
	add r3, r2, r7
	ldr r7, _0808EEC0  @ =0xFFFFA000
	add r1, r7, #0
	add r0, r0, r1
	strh r0, [r3]
	ldr r1, _0808EEC4  @ =gUnknown_02000404
	add r0, r2, r1
	mov r3, #2
	strh r3, [r0]
	ldr r7, _0808EEC8  @ =gUnknown_02000406
	add r0, r2, r7
	strh r4, [r0]
	add r1, r1, #4
	add r0, r2, r1
	strh r4, [r0]
	add r7, r7, #4
	add r1, r2, r7
	ldr r7, _0808EECC  @ =0xFFFFA040
	add r0, r7, #0
	ldrh r6, [r6]
	add r0, r0, r6
	strh r0, [r1]
	ldr r1, _0808EED0  @ =gUnknown_0200040C
	add r0, r2, r1
	strh r3, [r0]
	ldr r3, _0808EED4  @ =gUnknown_0200040E
	add r0, r2, r3
	strh r4, [r0]
	ldr r7, _0808EED8  @ =gUnknown_02000410
	add r0, r2, r7
	strh r4, [r0]
	ldr r0, _0808EEDC  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _0808EEE0  @ =0x0000FFFF
	add r0, r1, #0
	strh r0, [r2]
	add r5, r5, #8
	mov r2, r9
	strh r5, [r2]
	mov r3, #2
	add r8, r8, r3
	mov r7, r8
	mov r0, r10
	str r7, [r0]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808EEA4:
	.4byte gRam
_0808EEA8:
	.4byte gUnknown_02020000
_0808EEAC:
	.4byte 0x000001E3
_0808EEB0:
	.4byte gUnknown_02020002
_0808EEB4:
	.4byte 0x00000964
_0808EEB8:
	.4byte 0x00001FFF
_0808EEBC:
	.4byte gUnknown_02000400
_0808EEC0:
	.4byte 0xFFFFA000
_0808EEC4:
	.4byte gUnknown_02000404
_0808EEC8:
	.4byte gUnknown_02000406
_0808EECC:
	.4byte 0xFFFFA040
_0808EED0:
	.4byte gUnknown_0200040C
_0808EED4:
	.4byte gUnknown_0200040E
_0808EED8:
	.4byte gUnknown_02000410
_0808EEDC:
	.4byte gUnknown_02000412
_0808EEE0:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_0808EDC0

