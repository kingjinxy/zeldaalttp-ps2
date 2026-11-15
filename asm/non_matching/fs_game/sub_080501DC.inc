	THUMB_FUNC_START sub_080501DC
sub_080501DC: @ 0x080501DC
	push {r4,r7,lr}
	sub sp, sp, #24
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldrh r1, [r0]
	ldr r2, _08050218  @ =0x0000FFFF
	orr r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #16
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	mov r3, #7
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #16
	ldrh r1, [r0]
	cmp r1, #3
	bls _0805021C
	b _0805032E
_08050218:
	.4byte 0x0000FFFF
_0805021C:
	add r0, r7, #0
	add r0, r0, #12
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	strh r1, [r0]
	add r0, r7, #0
	add r0, r0, #20
	ldr r1, _08050284  @ =gUnknown_08137B90
	add r2, r7, #0
	add r2, r2, #16
	ldrh r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrh r2, [r1]
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #16
	ldrh r1, [r0]
	add r0, r1, #0
	lsl r1, r0, #3
	ldr r0, _08050288  @ =gUnknown_0813FED8
	add r1, r0, r1
	str r1, [r7, #4]
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	add r3, r7, #0
	add r3, r3, #20
	mov r4, #0
	ldrsh r2, [r3, r4]
	add r4, r2, #0
	lsl r3, r4, #1
	add r3, r3, r2
	ldrh r1, [r1]
	add r2, r3, #0
	add r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #14
	mov r1, #0
	strh r1, [r0]
_08050278:
	add r0, r7, #0
	add r0, r0, #14
	ldrh r1, [r0]
	cmp r1, #7
	bls _0805028C
	b _0805032E
_08050284:
	.4byte gUnknown_08137B90
_08050288:
	.4byte gUnknown_0813FED8
_0805028C:
	add r1, r7, #0
	add r1, r1, #12
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	bl sub_0800932C
	add r1, r7, #0
	add r1, r1, #18
	strh r0, [r1]
	ldr r0, [r7, #4]
	add r1, r7, #0
	add r1, r1, #18
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	beq _080502E4
	ldr r1, [r7, #4]
	add r0, r1, #2
	add r1, r7, #0
	add r1, r1, #18
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	beq _080502E4
	ldr r1, [r7, #4]
	add r0, r1, #4
	add r1, r7, #0
	add r1, r1, #18
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	beq _080502E4
	ldr r1, [r7, #4]
	add r0, r1, #6
	add r1, r7, #0
	add r1, r1, #18
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	beq _080502E4
	b _08050302
_080502E4:
	ldr r0, [r7]
	add r1, r7, #0
	add r1, r1, #12
	add r2, r0, #0
	add r0, r0, #124
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	b _0805032E
_08050302:
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	add r2, r7, #0
	add r2, r2, #20
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r1, r7, #0
	add r1, r1, #14
	add r0, r7, #0
	add r0, r0, #14
	add r1, r7, #0
	add r1, r1, #14
	ldrh r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	b _08050278
_0805032E:
	add sp, sp, #24
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080501DC

	.byte 0x00
	.byte 0x00
