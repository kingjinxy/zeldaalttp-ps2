	THUMB_FUNC_START sub_0801B68C
sub_0801B68C: @ 0x0801B68C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r12, r0
	mov r1, #50
	ldrsh r0, [r0, r1]
	cmp r0, #0
	bne _0801B6AC
	mov r2, r12
	mov r3, #54
	ldrsh r0, [r2, r3]
	cmp r0, #0
	bne _0801B6AC
	mov r0, #2
	strb r0, [r2, #11]
	b _0801B72E
_0801B6AC:
	mov r5, r12
	ldrh r0, [r5, #50]
	mov r2, #252
	lsl r2, r2, #4
	add r1, r2, #0
	and r1, r1, r0
	ldr r5, _0801B760  @ =gUnknown_03000450
	lsr r1, r1, #2
	ldrh r7, [r5, #24]
	add r1, r1, r7
	ldr r4, _0801B764  @ =gUnknown_0201EFF8
	mov r0, #82
	add r0, r0, r12
	mov r8, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r4
	ldrh r0, [r0]
	add r0, r0, r1
	mov r6, r12
	add r6, r6, #120
	strh r0, [r6]
	mov r1, r12
	ldrh r3, [r1, #50]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r3
	lsl r0, r0, #4
	add r0, r0, #16
	mov r3, r12
	add r3, r3, #124
	strh r0, [r3]
	mov r7, r12
	ldrh r0, [r7, #54]
	and r2, r2, r0
	lsr r2, r2, #2
	ldrh r5, [r5, #26]
	add r2, r2, r5
	mov r5, r8
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r4, r4, #2
	add r0, r0, r4
	ldrh r0, [r0]
	add r0, r0, r2
	mov r4, r12
	add r4, r4, #122
	strh r0, [r4]
	ldrh r0, [r7, #54]
	and r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, #16
	mov r2, r12
	add r2, r2, #126
	strh r1, [r2]
	ldrh r0, [r3]
	lsr r0, r0, #1
	ldrh r6, [r6]
	add r0, r0, r6
	strh r0, [r7, #50]
	ldrh r0, [r2]
	lsr r0, r0, #1
	ldrh r4, [r4]
	add r0, r0, r4
	strh r0, [r7, #54]
_0801B72E:
	ldr r0, _0801B768  @ =0x0000FFFE
	mov r7, r12
	strh r0, [r7, #58]
	ldrb r1, [r7, #11]
	lsl r0, r1, #4
	sub r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, #30
	mov r1, r12
	add r1, r1, #116
	strh r0, [r1]
	sub r1, r1, #70
	mov r0, #5
	strb r0, [r1]
	ldr r0, _0801B76C  @ =gUnknown_0813A184
	str r0, [r7, #72]
	mov r0, r12
	bl sub_0801BAD8
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801B760:
	.4byte gUnknown_03000450
_0801B764:
	.4byte gUnknown_0201EFF8
_0801B768:
	.4byte 0x0000FFFE
_0801B76C:
	.4byte gUnknown_0813A184
	THUMB_FUNC_END sub_0801B68C

