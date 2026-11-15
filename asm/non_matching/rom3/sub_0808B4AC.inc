	THUMB_FUNC_START sub_0808B4AC
sub_0808B4AC: @ 0x0808B4AC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r4, _0808B580  @ =gRam
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r0, [r0]
	mov r3, #8
	neg r3, r3
	add r1, r3, #0
	and r1, r1, r0
	ldr r2, _0808B584  @ =0x00000C88
	add r0, r4, r2
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r5, _0808B588  @ =0x00000C8A
	add r0, r4, r5
	ldrh r6, [r0]
	and r1, r1, r6
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r4
	mov r10, r0
	mov r2, #248
	mov r9, r2
	add r2, r1, #0
	mov r5, r9
	and r2, r2, r5
	lsl r2, r2, #2
	ldr r0, _0808B58C  @ =0x0000096C
	add r0, r0, r4
	mov r12, r0
	mov r5, #128
	lsl r5, r5, #2
	mov r8, r5
	add r0, r1, #0
	and r0, r0, r5
	lsl r0, r0, #4
	orr r2, r2, r0
	mov r5, #128
	lsl r5, r5, #1
	and r1, r1, r5
	lsl r1, r1, #3
	orr r2, r2, r1
	ldr r1, _0808B590  @ =0x000016C4
	add r0, r4, r1
	ldrh r0, [r0]
	and r3, r3, r0
	ldr r1, _0808B594  @ =0x00000C8C
	add r0, r4, r1
	ldrh r0, [r0]
	sub r3, r3, r0
	and r3, r3, r6
	ldr r1, _0808B598  @ =0x00000964
	add r0, r4, r1
	strh r3, [r0]
	add r0, r3, #0
	mov r1, r9
	and r0, r0, r1
	lsr r0, r0, #3
	orr r2, r2, r0
	add r0, r3, #0
	mov r1, r8
	and r0, r0, r1
	lsl r0, r0, #3
	orr r2, r2, r0
	and r3, r3, r5
	lsl r3, r3, #2
	orr r2, r2, r3
	mov r5, r12
	strh r2, [r5]
	mov r0, r10
	strh r2, [r0]
	mov r1, #0
	mov r8, r1
	mov r12, r4
	mov r0, #171
	lsl r0, r0, #4
	add r0, r0, r12
	ldrh r0, [r0]
	str r0, [sp]
	ldr r2, _0808B59C  @ =0x00000A1C
	add r2, r2, r12
	mov r9, r2
	ldr r7, _0808B5A0  @ =gUnknown_081537B8
	mov r4, #0
	ldr r5, _0808B5A4  @ =0x0000FFFF
	mov r10, r5
_0808B564:
	ldr r0, [sp]
	ldrh r1, [r7]
	cmp r0, r1
	bne _0808B5F2
	ldr r2, _0808B5A8  @ =gUnknown_081536F8
	add r0, r4, r2
	ldrh r0, [r0]
	ldr r5, _0808B5AC  @ =0x0000FFF0
	cmp r0, r5
	bne _0808B5B4
	ldr r0, _0808B5B0  @ =gUnknown_081537D2
	add r0, r0, r8
	ldrb r0, [r0]
	b _0808B5D2
_0808B580:
	.4byte gRam
_0808B584:
	.4byte 0x00000C88
_0808B588:
	.4byte 0x00000C8A
_0808B58C:
	.4byte 0x0000096C
_0808B590:
	.4byte 0x000016C4
_0808B594:
	.4byte 0x00000C8C
_0808B598:
	.4byte 0x00000964
_0808B59C:
	.4byte 0x00000A1C
_0808B5A0:
	.4byte gUnknown_081537B8
_0808B5A4:
	.4byte 0x0000FFFF
_0808B5A8:
	.4byte gUnknown_081536F8
_0808B5AC:
	.4byte 0x0000FFF0
_0808B5B0:
	.4byte gUnknown_081537D2
_0808B5B4:
	cmp r0, r10
	beq _0808B5F2
	ldr r2, _0808B5D8  @ =gUnknown_03002B90
	mov r5, #0
	ldrsh r3, [r2, r5]
	ldr r5, _0808B5DC  @ =gUnknown_081537D2
	add r5, r5, r8
	ldr r6, _0808B5E0  @ =0x0000FFFF
	ldr r0, _0808B5E4  @ =gUnknown_081536F8
	add r2, r4, r0
	add r1, r2, #0
_0808B5CA:
	ldrh r0, [r1]
	cmp r0, r3
	bne _0808B5E8
	ldrb r0, [r5]
_0808B5D2:
	mov r1, r9
	strh r0, [r1]
	b _0808B614
_0808B5D8:
	.4byte gUnknown_03002B90
_0808B5DC:
	.4byte gUnknown_081537D2
_0808B5E0:
	.4byte 0x0000FFFF
_0808B5E4:
	.4byte gUnknown_081536F8
_0808B5E8:
	add r2, r2, #2
	add r1, r1, #2
	ldrh r0, [r2]
	cmp r0, r6
	bne _0808B5CA
_0808B5F2:
	add r7, r7, #2
	add r4, r4, #16
	mov r2, #1
	add r8, r8, r2
	ldrh r0, [r7]
	cmp r0, r10
	bne _0808B564
	ldr r0, _0808B610  @ =0x0000165C
	add r0, r0, r12
	mov r1, #0
	strh r1, [r0]
	mov r0, #130
	mov r5, r9
	strh r0, [r5]
	b _0808B564
_0808B610:
	.4byte 0x0000165C
_0808B614:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0808B4AC

