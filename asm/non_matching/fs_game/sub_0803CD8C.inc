	THUMB_FUNC_START sub_0803CD8C
sub_0803CD8C: @ 0x0803CD8C
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	ldr r1, [r7]
	ldr r2, [r7]
	ldr r3, [r2, #72]
	mov r4, #0
	ldrsb r4, [r3, r4]
	add r2, r4, #0
	ldrh r1, [r1, #50]
	add r2, r2, r1
	ldr r1, _0803CDF8  @ =gUnknown_03000450
	ldrh r1, [r1, #24]
	sub r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	add r0, r7, #6
	ldr r1, [r7]
	ldr r2, [r7]
	ldr r3, [r2, #72]
	mov r4, #1
	ldrsb r4, [r3, r4]
	add r2, r4, #0
	ldrh r1, [r1, #54]
	add r2, r2, r1
	ldr r1, _0803CDF8  @ =gUnknown_03000450
	ldrh r1, [r1, #26]
	sub r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	add r0, r7, #4
	ldrh r1, [r0]
	lsr r0, r1, #4
	add r1, r0, #0
	mov r2, #63
	add r0, r1, #0
	and r0, r0, r2
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r1, r2, #0
	mov r2, #252
	lsl r2, r2, #4
	and r1, r1, r2
	add r0, r0, r1
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	b _0803CDFC
	.byte 0x00
	.byte 0x00
_0803CDF8:
	.4byte gUnknown_03000450
_0803CDFC:
	add sp, sp, #8
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803CD8C

