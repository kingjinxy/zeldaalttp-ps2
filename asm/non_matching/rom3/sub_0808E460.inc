	THUMB_FUNC_START sub_0808E460
sub_0808E460: @ 0x0808E460
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r0, _0808E5A0  @ =gRam
	mov r8, r0
	ldr r0, _0808E5A4  @ =0x00000996
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0808E47C
	b _0808E592
_0808E47C:
	ldr r4, _0808E5A8  @ =0x00000A02
	add r4, r4, r8
	ldrb r1, [r4]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0808E492
	mov r0, #12
	mov r1, #0
	bl sub_0812A324
_0808E492:
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0808E592
	ldr r2, _0808E5AC  @ =0x00000514
	add r2, r2, r8
	ldrh r1, [r2]
	ldr r0, _0808E5B0  @ =0x0000FFFC
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _0808E5B4  @ =gUnknown_02000400
	ldrh r6, [r0]
	mov r0, #146
	lsl r0, r0, #4
	bl sub_08092568
	lsl r7, r0, #1
	ldr r0, _0808E5B8  @ =0x00001FFF
	and r7, r7, r0
	lsl r1, r6, #1
	ldr r2, _0808E5BC  @ =gUnknown_02000402
	mov r12, r2
	add r2, r1, r2
	ldr r4, _0808E5C0  @ =0xFFFFA000
	add r3, r4, #0
	add r0, r7, r3
	strh r0, [r2]
	ldr r5, _0808E5C4  @ =gUnknown_02000404
	add r0, r1, r5
	mov r2, #4
	mov r9, r2
	strh r2, [r0]
	ldr r4, _0808E5C8  @ =gUnknown_02000406
	add r0, r1, r4
	mov r5, #129
	lsl r5, r5, #6
	add r4, r5, #0
	strh r4, [r0]
	ldr r2, _0808E5CC  @ =gUnknown_02000408
	add r0, r1, r2
	add r5, r5, #1
	add r2, r5, #0
	strh r2, [r0]
	ldr r5, _0808E5D0  @ =gUnknown_0200040A
	add r0, r1, r5
	strh r4, [r0]
	ldr r4, _0808E5D4  @ =gUnknown_0200040C
	add r0, r1, r4
	strh r2, [r0]
	add r7, r7, #64
	add r5, r5, #4
	add r0, r1, r5
	add r3, r7, r3
	strh r3, [r0]
	ldr r2, _0808E5D8  @ =gUnknown_02000410
	add r0, r1, r2
	mov r4, r9
	strh r4, [r0]
	add r5, r5, #4
	add r0, r1, r5
	ldr r2, _0808E5DC  @ =0x00002050
	add r3, r2, #0
	strh r3, [r0]
	ldr r4, _0808E5E0  @ =gUnknown_02000414
	add r0, r1, r4
	ldr r5, _0808E5E4  @ =0x00002051
	add r2, r5, #0
	strh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	strh r3, [r0]
	ldr r5, _0808E5E8  @ =gUnknown_02000418
	add r1, r1, r5
	strh r2, [r1]
	add r6, r6, #12
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	ldr r0, _0808E5EC  @ =0x00000A1E
	strh r0, [r1]
	add r7, r1, #0
	mov r5, #7
	lsl r0, r6, #1
	mov r1, r12
	add r4, r0, r1
_0808E544:
	mov r2, #0
	ldrsh r0, [r7, r2]
	bl sub_08092568
	lsl r0, r0, #1
	ldr r1, _0808E5B8  @ =0x00001FFF
	and r0, r0, r1
	ldr r2, _0808E5C0  @ =0xFFFFA000
	add r1, r2, #0
	add r0, r0, r1
	strh r0, [r4]
	ldr r1, _0808E5F0  @ =0x0000C007
	add r0, r1, #0
	strh r0, [r4, #2]
	ldr r2, _0808E5F4  @ =0x000001E3
	add r0, r2, #0
	strh r0, [r4, #4]
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
	add r4, r4, #6
	add r6, r6, #3
	sub r5, r5, #1
	cmp r5, #0
	bge _0808E544
	lsl r0, r6, #1
	ldr r4, _0808E5BC  @ =gUnknown_02000402
	add r0, r0, r4
	ldr r5, _0808E5F8  @ =0x0000FFFF
	add r1, r5, #0
	strh r1, [r0]
	ldr r0, _0808E5B4  @ =gUnknown_02000400
	strh r6, [r0]
	ldr r1, _0808E5A0  @ =gRam
	ldr r0, _0808E5FC  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0808E592:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808E5A0:
	.4byte gRam
_0808E5A4:
	.4byte 0x00000996
_0808E5A8:
	.4byte 0x00000A02
_0808E5AC:
	.4byte 0x00000514
_0808E5B0:
	.4byte 0x0000FFFC
_0808E5B4:
	.4byte gUnknown_02000400
_0808E5B8:
	.4byte 0x00001FFF
_0808E5BC:
	.4byte gUnknown_02000402
_0808E5C0:
	.4byte 0xFFFFA000
_0808E5C4:
	.4byte gUnknown_02000404
_0808E5C8:
	.4byte gUnknown_02000406
_0808E5CC:
	.4byte gUnknown_02000408
_0808E5D0:
	.4byte gUnknown_0200040A
_0808E5D4:
	.4byte gUnknown_0200040C
_0808E5D8:
	.4byte gUnknown_02000410
_0808E5DC:
	.4byte 0x00002050
_0808E5E0:
	.4byte gUnknown_02000414
_0808E5E4:
	.4byte 0x00002051
_0808E5E8:
	.4byte gUnknown_02000418
_0808E5EC:
	.4byte 0x00000A1E
_0808E5F0:
	.4byte 0x0000C007
_0808E5F4:
	.4byte 0x000001E3
_0808E5F8:
	.4byte 0x0000FFFF
_0808E5FC:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0808E460

