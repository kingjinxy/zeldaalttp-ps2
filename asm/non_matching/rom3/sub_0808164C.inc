	THUMB_FUNC_START sub_0808164C
sub_0808164C: @ 0x0808164C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r6, _080816FC  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r2, r6, r0
	ldr r1, _08081700  @ =gUnknown_081532C4
	ldr r3, _08081704  @ =0x000016D5
	add r0, r6, r3
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	mov r2, #150
	lsl r2, r2, #4
	add r4, r6, r2
	strh r1, [r4]
	ldr r3, _08081708  @ =0x00000A02
	add r2, r6, r3
	strb r1, [r2]
	ldr r1, _0808170C  @ =0x000016C4
	add r2, r6, r1
	ldr r1, _08081710  @ =gUnknown_081532CC
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	sub r3, r3, #158
	add r2, r6, r3
	strh r0, [r2]
	add r3, r3, #160
	add r1, r6, r3
	strb r0, [r1]
	mov r1, #0
	ldrsh r0, [r2, r1]
	mov r2, #0
	ldrsh r1, [r4, r2]
	add r3, r3, #12
	add r2, r6, r3
	ldrb r2, [r2]
	bl sub_080928A4
	add r5, r0, #0
	mov r0, #15
	mov r8, r0
	and r5, r5, r0
	lsl r7, r5, #1
	ldr r1, _08081714  @ =0x0000195C
	add r0, r6, r1
	add r2, r7, r0
	ldrh r3, [r2]
	ldr r1, _08081718  @ =0x0000F0F0
	and r1, r1, r3
	ldr r0, _0808171C  @ =0x00001010
	cmp r1, r0
	bne _08081730
	ldrh r4, [r2]
	ldr r2, _08081720  @ =0x00000AD2
	add r0, r6, r2
	strh r5, [r0]
	ldr r3, _08081724  @ =0x0000199C
	add r0, r6, r3
	add r0, r7, r0
	ldrh r0, [r0]
	bl sub_080928F0
	add r0, r5, #0
	bl sub_08083AE4
	ldr r1, _08081728  @ =gUnknown_081532EC
	mov r0, r8
	and r4, r4, r0
	lsl r0, r4, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldr r1, _0808172C  @ =0x0000096C
	add r4, r6, r1
	strh r0, [r4]
	bl sub_08080FAC
	mov r2, #0
	ldrsh r0, [r4, r2]
	b _0808175E
	.byte 0x00
	.byte 0x00
_080816FC:
	.4byte gRam
_08081700:
	.4byte gUnknown_081532C4
_08081704:
	.4byte 0x000016D5
_08081708:
	.4byte 0x00000A02
_0808170C:
	.4byte 0x000016C4
_08081710:
	.4byte gUnknown_081532CC
_08081714:
	.4byte 0x0000195C
_08081718:
	.4byte 0x0000F0F0
_0808171C:
	.4byte 0x00001010
_08081720:
	.4byte 0x00000AD2
_08081724:
	.4byte 0x0000199C
_08081728:
	.4byte gUnknown_081532EC
_0808172C:
	.4byte 0x0000096C
_08081730:
	ldr r0, _0808173C  @ =0x00002020
	cmp r1, r0
	beq _08081740
	mov r0, #0
	b _0808175E
	.byte 0x00
	.byte 0x00
_0808173C:
	.4byte 0x00002020
_08081740:
	mov r0, r8
	and r0, r0, r3
	strh r0, [r4]
	mov r3, #0
	ldrsh r0, [r4, r3]
	sub r4, r5, r0
	add r0, r4, #0
	bl sub_080815E4
	bl sub_08080FAC
	ldr r1, _08081768  @ =0x0000096C
	add r0, r6, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
_0808175E:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
_08081768:
	.4byte 0x0000096C
	THUMB_FUNC_END sub_0808164C

