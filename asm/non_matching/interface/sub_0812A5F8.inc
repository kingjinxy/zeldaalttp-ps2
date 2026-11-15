	THUMB_FUNC_START sub_0812A5F8
sub_0812A5F8: @ 0x0812A5F8
	push {r4,r5,lr}
	lsl r0, r0, #16
	lsr r5, r0, #16
	ldr r1, _0812A634  @ =gUnknown_08198EA8
	lsl r0, r5, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldrh r2, [r0]
	add r3, r2, #0
	mov r0, #255
	lsl r0, r0, #16
	and r0, r0, r1
	lsr r4, r0, #16
	mov r0, #1
	neg r0, r0
	cmp r1, r0
	beq _0812A65E
	mov r0, #128
	lsl r0, r0, #17
	and r0, r0, r1
	cmp r0, #0
	beq _0812A638
	add r0, r4, #0
	add r1, r2, #0
	bl sub_0812C718
	add r0, r5, #0
	bl sub_0812A080
	b _0812A656
_0812A634:
	.4byte gUnknown_08198EA8
_0812A638:
	mov r0, #128
	lsl r0, r0, #18
	and r1, r1, r0
	cmp r1, #0
	beq _0812A64C
	add r0, r4, #0
	mov r1, #0
	bl sub_0812C73C
	b _0812A656
_0812A64C:
	add r0, r4, #0
	mov r1, #1
	add r2, r3, #0
	bl sub_0812C73C
_0812A656:
	ldr r1, _0812A664  @ =gUnknown_03000118
	lsl r0, r4, #1
	add r0, r0, r1
	strh r5, [r0]
_0812A65E:
	pop {r4,r5}
	pop {r0}
	bx r0
_0812A664:
	.4byte gUnknown_03000118
	THUMB_FUNC_END sub_0812A5F8

