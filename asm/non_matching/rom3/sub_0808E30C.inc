	THUMB_FUNC_START sub_0808E30C
sub_0808E30C: @ 0x0808E30C
	push {r4-r7,lr}
	bl sub_0808E22C
	mov r3, #0
	ldr r6, _0808E390  @ =0x000008AA
	ldr r0, _0808E394  @ =0x000001E3
	add r5, r0, #0
	ldr r7, _0808E398  @ =gUnknown_03002B90
_0808E31C:
	lsl r2, r3, #1
	ldr r1, _0808E39C  @ =gUnknown_02000402
	add r0, r2, r1
	ldr r4, _0808E3A0  @ =0xFFFFE000
	add r1, r4, #0
	ldrh r4, [r0]
	add r1, r1, r4
	strh r1, [r0]
	ldr r0, _0808E3A4  @ =gUnknown_02000406
	add r1, r2, r0
	ldrh r0, [r1]
	cmp r0, r6
	bne _0808E338
	strh r5, [r1]
_0808E338:
	ldr r4, _0808E3A8  @ =gUnknown_02000408
	add r1, r2, r4
	ldrh r0, [r1]
	cmp r0, r6
	bne _0808E344
	strh r5, [r1]
_0808E344:
	add r3, r3, #4
	mov r1, #0
	ldrsh r0, [r7, r1]
	ldr r4, _0808E3AC  @ =gRam
	cmp r3, r0
	bne _0808E31C
	ldr r0, _0808E3B0  @ =0x00000514
	add r2, r4, r0
	ldrh r1, [r2]
	ldr r0, _0808E3B4  @ =0x0000FFFC
	and r0, r0, r1
	mov r3, #0
	mov r1, #2
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _0808E3B8  @ =0x0000051E
	add r1, r4, r0
	sub r0, r0, #220
	strh r0, [r1]
	ldr r0, _0808E3BC  @ =0x00000998
	add r1, r4, r0
	mov r0, #8
	strb r0, [r1]
	ldr r0, _0808E3C0  @ =0x00000999
	add r1, r4, r0
	mov r0, #31
	strb r0, [r1]
	ldr r1, _0808E3C4  @ =0x00000A02
	add r0, r4, r1
	strb r3, [r0]
	ldr r0, _0808E3C8  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
_0808E390:
	.4byte 0x000008AA
_0808E394:
	.4byte 0x000001E3
_0808E398:
	.4byte gUnknown_03002B90
_0808E39C:
	.4byte gUnknown_02000402
_0808E3A0:
	.4byte 0xFFFFE000
_0808E3A4:
	.4byte gUnknown_02000406
_0808E3A8:
	.4byte gUnknown_02000408
_0808E3AC:
	.4byte gRam
_0808E3B0:
	.4byte 0x00000514
_0808E3B4:
	.4byte 0x0000FFFC
_0808E3B8:
	.4byte 0x0000051E
_0808E3BC:
	.4byte 0x00000998
_0808E3C0:
	.4byte 0x00000999
_0808E3C4:
	.4byte 0x00000A02
_0808E3C8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0808E30C

