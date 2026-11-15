	THUMB_FUNC_START sub_080734BC
sub_080734BC: @ 0x080734BC
	push {r4,lr}
	bl sub_08096F30
	ldr r2, _080734E0  @ =gRam
	ldr r1, _080734E4  @ =0x00000C0E
	add r0, r2, r1
	ldrh r1, [r0]
	mov r3, #1
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080734E8
	mov r4, #150
	lsl r4, r4, #4
	add r0, r2, r4
	strh r3, [r0]
	b _080734F2
	.byte 0x00
	.byte 0x00
_080734E0:
	.4byte gRam
_080734E4:
	.4byte 0x00000C0E
_080734E8:
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	ldr r0, _0807351C  @ =0x0000FFFF
	strh r0, [r1]
_080734F2:
	ldr r2, _08073520  @ =gRam
	ldr r1, _08073524  @ =0x00000C0E
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	add r3, r2, #0
	cmp r0, #0
	beq _08073530
	ldr r2, _08073528  @ =0x000016C4
	add r1, r3, r2
	mov r4, #150
	lsl r4, r4, #4
	add r0, r3, r4
	ldrh r2, [r0]
	ldrh r4, [r1]
	add r0, r2, r4
	strh r0, [r1]
	ldr r1, _0807352C  @ =0x000016D7
	b _08073546
	.byte 0x00
	.byte 0x00
_0807351C:
	.4byte 0x0000FFFF
_08073520:
	.4byte gRam
_08073524:
	.4byte 0x00000C0E
_08073528:
	.4byte 0x000016C4
_0807352C:
	.4byte 0x000016D7
_08073530:
	mov r2, #182
	lsl r2, r2, #5
	add r1, r3, r2
	mov r4, #150
	lsl r4, r4, #4
	add r0, r3, r4
	ldrh r2, [r0]
	ldrh r4, [r1]
	add r0, r2, r4
	strh r0, [r1]
	ldr r1, _08073580  @ =0x000016D6
_08073546:
	add r0, r3, r1
	strb r2, [r0]
	ldr r2, _08073584  @ =0x00000C0C
	add r1, r3, r2
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #0
	bne _08073576
	ldr r4, _08073588  @ =0x000009AC
	add r1, r3, r4
	mov r0, #9
	strb r0, [r1]
	ldr r0, _0807358C  @ =0x000009AD
	add r1, r3, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _08073590  @ =0x000009E8
	add r0, r3, r1
	strh r2, [r0]
	bl sub_080BE9C8
_08073576:
	bl sub_080718D4
	pop {r4}
	pop {r0}
	bx r0
_08073580:
	.4byte 0x000016D6
_08073584:
	.4byte 0x00000C0C
_08073588:
	.4byte 0x000009AC
_0807358C:
	.4byte 0x000009AD
_08073590:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080734BC

