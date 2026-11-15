	THUMB_FUNC_START sub_0812A668
sub_0812A668: @ 0x0812A668
	push {r4,r5,lr}
	lsl r0, r0, #16
	lsr r3, r0, #16
	ldr r1, _0812A6B0  @ =gUnknown_08198EA8
	lsl r0, r3, #2
	add r0, r0, r1
	ldr r4, [r0]
	mov r0, #255
	lsl r0, r0, #16
	and r0, r0, r4
	lsr r2, r0, #16
	mov r0, #1
	neg r0, r0
	cmp r4, r0
	beq _0812A6AA
	ldr r0, _0812A6B4  @ =gUnknown_03000118
	lsl r1, r2, #1
	add r1, r1, r0
	mov r5, #0
	ldrsh r0, [r1, r5]
	cmp r3, r0
	bne _0812A6AA
	add r0, r2, #0
	mov r1, #0
	bl sub_0812C764
	mov r0, #128
	lsl r0, r0, #17
	and r4, r4, r0
	cmp r4, #0
	beq _0812A6AA
	bl sub_0812A094
_0812A6AA:
	pop {r4,r5}
	pop {r0}
	bx r0
_0812A6B0:
	.4byte gUnknown_08198EA8
_0812A6B4:
	.4byte gUnknown_03000118
	THUMB_FUNC_END sub_0812A668

