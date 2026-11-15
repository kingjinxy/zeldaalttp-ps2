	THUMB_FUNC_START sub_0802FD88
sub_0802FD88: @ 0x0802FD88
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r5, #0
	ldr r0, _0802FDC4  @ =gUnknown_03000FC0
	mov r9, r0
	ldr r1, _0802FDC8  @ =gHeldKeys
	mov r10, r1
	mov r8, r9
	ldr r0, _0802FDCC  @ =0x0000FFFF
	mov r12, r0
	ldr r7, _0802FDD0  @ =gUnknown_03005E10
	ldr r6, _0802FDD4  @ =gUnknown_03000940
_0802FDA6:
	lsl r0, r5, #2
	add r0, r0, r5
	lsl r0, r0, #2
	add r0, r0, r8
	ldrh r4, [r0, #58]
	cmp r4, r12
	beq _0802FDD8
	lsl r2, r5, #1
	add r3, r2, r7
	add r0, r2, r6
	ldrh r1, [r0]
	add r0, r4, #0
	bic r0, r0, r1
	strh r0, [r3]
	b _0802FDE0
_0802FDC4:
	.4byte gUnknown_03000FC0
_0802FDC8:
	.4byte gHeldKeys
_0802FDCC:
	.4byte 0x0000FFFF
_0802FDD0:
	.4byte gUnknown_03005E10
_0802FDD4:
	.4byte gUnknown_03000940
_0802FDD8:
	lsl r2, r5, #1
	add r1, r2, r7
	mov r0, #0
	strh r0, [r1]
_0802FDE0:
	add r0, r2, r6
	strh r4, [r0]
	add r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r5, #3
	bls _0802FDA6
	mov r1, r10
	ldrh r0, [r1]
	mov r1, r9
	strh r0, [r1, #18]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802FD88

