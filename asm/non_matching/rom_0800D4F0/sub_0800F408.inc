	THUMB_FUNC_START sub_0800F408
sub_0800F408: @ 0x0800F408
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #68
	lsl r1, r1, #24
	lsr r1, r1, #24
	str r1, [sp, #64]
	ldr r2, _0800F430  @ =0x04000010
	mov r1, sp
	bl CpuSet
	mov r0, #0
	mov r10, r0
	mov r9, r0
	mov r8, r0
_0800F42A:
	mov r6, #0
	b _0800F460
	.byte 0x00
	.byte 0x00
_0800F430:
	.4byte 0x04000010
_0800F434:
	add r0, r5, #0
	bl sub_0800EE50
	add r4, r0, #0
	ldr r0, [r4]
	bl sub_0800F190
	ldr r7, _0800F484  @ =gUnknown_0202E158
	ldrb r0, [r7, #3]
	add r0, r6, r0
	lsl r0, r0, #16
	lsr r6, r0, #16
	ldr r1, _0800F488  @ =0x000002FF
	cmp r5, r1
	bls _0800F460
	ldr r0, [r4, #64]
	bl sub_0800F190
	ldrb r0, [r7, #3]
	add r0, r6, r0
	lsl r0, r0, #16
	lsr r6, r0, #16
_0800F460:
	mov r0, sp
	bl sub_0800F22C
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r5, #15
	bhi _0800F434
	cmp r6, r8
	bls _0800F474
	mov r8, r6
_0800F474:
	cmp r6, #0
	beq _0800F48C
	mov r0, r9
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	b _0800F496
_0800F484:
	.4byte gUnknown_0202E158
_0800F488:
	.4byte 0x000002FF
_0800F48C:
	mov r0, r10
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
_0800F496:
	ldr r2, [sp, #64]
	cmp r2, #0
	beq _0800F4B0
	cmp r5, #0
	bne _0800F42A
	mov r1, r10
	lsl r0, r1, #24
	mov r2, r9
	lsl r1, r2, #16
	orr r0, r0, r1
	mov r1, r8
	orr r0, r0, r1
	b _0800F4B2
_0800F4B0:
	mov r0, r8
_0800F4B2:
	add sp, sp, #68
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0800F408

	.byte 0x00
	.byte 0x00
