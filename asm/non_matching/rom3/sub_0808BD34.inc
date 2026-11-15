	THUMB_FUNC_START sub_0808BD34
sub_0808BD34: @ 0x0808BD34
	push {r4,r5,lr}
	ldr r0, _0808BDD4  @ =0x00003690
	bl sub_0808B8B8
	ldr r4, _0808BDD8  @ =gRam
	ldr r0, _0808BDDC  @ =0x0000096C
	add r3, r4, r0
	mov r1, #0
	ldrsh r0, [r3, r1]
	lsl r0, r0, #1
	ldr r2, _0808BDE0  @ =gUnknown_02018004
	add r0, r0, r2
	ldr r2, _0808BDE4  @ =gUnknown_08155B4E
	ldr r5, _0808BDE8  @ =0x00006D30
	add r1, r2, r5
	ldrh r1, [r1]
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r3, r1]
	lsl r0, r0, #1
	ldr r5, _0808BDEC  @ =gUnknown_02018006
	add r0, r0, r5
	ldr r5, _0808BDF0  @ =0x00006D32
	add r1, r2, r5
	ldrh r1, [r1]
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r3, r1]
	lsl r0, r0, #1
	ldr r5, _0808BDF4  @ =gUnknown_02018044
	add r0, r0, r5
	ldr r5, _0808BDF8  @ =0x00006D34
	add r1, r2, r5
	ldrh r1, [r1]
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r3, r1]
	lsl r0, r0, #1
	ldr r5, _0808BDFC  @ =gUnknown_02018046
	add r0, r0, r5
	ldr r1, _0808BE00  @ =0x00006D36
	add r2, r2, r1
	ldrh r1, [r2]
	strh r1, [r0]
	ldr r5, _0808BE04  @ =0x00003698
	mov r2, #0
	ldrsh r0, [r3, r2]
	bl sub_080925A4
	add r1, r0, #0
	add r0, r5, #0
	mov r2, #2
	bl sub_0808B624
	ldr r3, _0808BE08  @ =0x000016C4
	add r0, r4, r3
	ldr r5, _0808BE0C  @ =0x00000952
	add r1, r4, r5
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r2, _0808BE10  @ =0x00000504
	add r1, r4, r2
	strh r0, [r1]
	sub r3, r3, #4
	add r0, r4, r3
	add r5, r5, #6
	add r2, r4, r5
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r2, _0808BE14  @ =0x00000506
	add r4, r4, r2
	strh r0, [r4]
	mov r0, #55
	bl sub_0812A324
	pop {r4,r5}
	pop {r0}
	bx r0
_0808BDD4:
	.4byte 0x00003690
_0808BDD8:
	.4byte gRam
_0808BDDC:
	.4byte 0x0000096C
_0808BDE0:
	.4byte gUnknown_02018004
_0808BDE4:
	.4byte gUnknown_08155B4E
_0808BDE8:
	.4byte 0x00006D30
_0808BDEC:
	.4byte gUnknown_02018006
_0808BDF0:
	.4byte 0x00006D32
_0808BDF4:
	.4byte gUnknown_02018044
_0808BDF8:
	.4byte 0x00006D34
_0808BDFC:
	.4byte gUnknown_02018046
_0808BE00:
	.4byte 0x00006D36
_0808BE04:
	.4byte 0x00003698
_0808BE08:
	.4byte 0x000016C4
_0808BE0C:
	.4byte 0x00000952
_0808BE10:
	.4byte 0x00000504
_0808BE14:
	.4byte 0x00000506
	THUMB_FUNC_END sub_0808BD34

