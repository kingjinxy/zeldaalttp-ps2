	THUMB_FUNC_START sub_08033818
sub_08033818: @ 0x08033818
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r0, _08033850  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080338B6
	add r1, r4, #0
	add r1, r1, #124
	ldrh r0, [r1]
	cmp r0, #0
	beq _08033836
	sub r0, r0, #1
	strh r0, [r1]
_08033836:
	ldrh r1, [r1]
	cmp r1, #170
	beq _0803387E
	cmp r1, #170
	bgt _0803385A
	cmp r1, #130
	beq _0803387E
	cmp r1, #130
	bgt _08033854
	cmp r1, #0
	beq _08033878
	b _080338B6
	.byte 0x00
	.byte 0x00
_08033850:
	.4byte gUnknown_0201F000
_08033854:
	cmp r1, #150
	beq _0803387E
	b _080338B6
_0803385A:
	mov r0, #130
	lsl r0, r0, #1
	cmp r1, r0
	beq _080338B6
	cmp r1, r0
	bgt _0803386C
	cmp r1, #210
	beq _0803387E
	b _080338B6
_0803386C:
	ldr r0, _08033874  @ =0x00000121
	cmp r1, r0
	beq _0803387E
	b _080338B6
_08033874:
	.4byte 0x00000121
_08033878:
	mov r0, #2
	strb r0, [r4, #20]
	b _080338B6
_0803387E:
	mov r0, #88
	mov r1, #6
	mov r2, #0
	bl sub_0804C8A8
	add r5, r0, #0
	cmp r5, #0
	beq _080338B6
	ldr r3, _080338BC  @ =gUnknown_0813D94C
	ldrb r1, [r4, #23]
	lsl r0, r1, #1
	add r0, r0, r3
	mov r6, #0
	ldrsh r2, [r0, r6]
	lsl r2, r2, #16
	add r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r3
	mov r0, #0
	ldrsh r3, [r1, r0]
	lsl r3, r3, #16
	add r0, r4, #0
	add r1, r5, #0
	bl sub_0803D4A4
	ldrb r0, [r4, #23]
	add r0, r0, #2
	strb r0, [r4, #23]
_080338B6:
	pop {r4-r6}
	pop {r0}
	bx r0
_080338BC:
	.4byte gUnknown_0813D94C
	THUMB_FUNC_END sub_08033818

