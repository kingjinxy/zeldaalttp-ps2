	THUMB_FUNC_START sub_0808176C
sub_0808176C: @ 0x0808176C
	push {r4-r7,lr}
	add r6, r0, #0
	ldr r5, _080817E0  @ =gRam
	ldr r1, _080817E4  @ =0x000016D5
	add r0, r5, r1
	ldrb r2, [r0]
	ldr r3, _080817E8  @ =0x000016C4
	add r1, r5, r3
	ldr r0, _080817EC  @ =gUnknown_081532CC
	lsr r2, r2, #1
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	mov r1, #252
	lsl r1, r1, #1
	add r4, r1, #0
	and r0, r0, r4
	mov r1, #182
	lsl r1, r1, #5
	add r3, r5, r1
	ldr r1, _080817F0  @ =gUnknown_081532C4
	add r2, r2, r1
	ldrh r1, [r2]
	ldrh r3, [r3]
	add r1, r1, r3
	and r1, r1, r4
	mov r3, #161
	lsl r3, r3, #4
	add r2, r5, r3
	ldrb r2, [r2]
	bl sub_080928A4
	lsl r0, r0, #16
	lsr r4, r0, #16
	mov r0, #240
	and r0, r0, r4
	cmp r0, #112
	bne _08081818
	mov r7, #15
	add r2, r4, #0
	and r2, r2, r7
	lsl r0, r2, #1
	ldr r2, _080817F4  @ =0x0000195C
	add r1, r5, r2
	add r0, r0, r1
	ldrh r3, [r0]
	cmp r3, #0
	beq _08081818
	ldr r0, _080817F8  @ =0x0000F0F0
	and r0, r0, r3
	ldr r1, _080817FC  @ =0x00002020
	cmp r0, r1
	bne _08081800
	mov r0, #85
	b _0808180C
	.byte 0x00
	.byte 0x00
_080817E0:
	.4byte gRam
_080817E4:
	.4byte 0x000016D5
_080817E8:
	.4byte 0x000016C4
_080817EC:
	.4byte gUnknown_081532CC
_080817F0:
	.4byte gUnknown_081532C4
_080817F4:
	.4byte 0x0000195C
_080817F8:
	.4byte 0x0000F0F0
_080817FC:
	.4byte 0x00002020
_08081800:
	add r2, r7, #0
	and r2, r2, r3
	ldr r0, _08081814  @ =gUnknown_081532EC
	lsl r1, r2, #1
	add r1, r1, r0
	ldrh r0, [r1]
_0808180C:
	strh r0, [r6]
	mov r0, #1
	b _0808181C
	.byte 0x00
	.byte 0x00
_08081814:
	.4byte gUnknown_081532EC
_08081818:
	strh r4, [r6]
	mov r0, #0
_0808181C:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0808176C

	.byte 0x00
	.byte 0x00
