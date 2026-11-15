	THUMB_FUNC_START sub_0800C1EC
sub_0800C1EC: @ 0x0800C1EC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	mov r9, r0
	ldr r0, _0800C284  @ =gPaletteBuf2
	mov r12, r0
	ldr r7, _0800C288  @ =gPaletteBuf1
	ldr r1, _0800C28C  @ =gUnknown_03000520
	ldrb r0, [r1, #7]
	lsl r0, r0, #3
	mov r2, #0
	ldr r1, [r1, #12]
	str r1, [sp]
	ldr r1, _0800C290  @ =gUnknown_0201EDE0
	mov r10, r1
	mov r3, r9
	mul r3, r0, r3
	str r3, [sp, #4]
_0800C216:
	mov r1, #1
	lsl r1, r1, r2
	ldr r0, [sp]
	and r0, r0, r1
	cmp r0, #0
	beq _0800C294
	mov r3, r10
	ldr r0, [r3]
	orr r0, r0, r1
	str r0, [r3]
	mov r6, #16
	add r2, r2, #1
	mov r8, r2
	mov r5, #31
	mov r0, #128
	lsl r0, r0, #1
	mov r1, r9
	sub r4, r0, r1
	ldr r3, [sp, #4]
_0800C23C:
	mov r0, r12
	ldrh r1, [r0]
	add r0, r1, #0
	and r0, r0, r5
	lsl r2, r0, #3
	lsr r1, r1, #5
	add r0, r1, #0
	and r0, r0, r5
	lsl r0, r0, #3
	lsr r1, r1, #5
	and r1, r1, r5
	lsl r1, r1, #3
	mul r2, r4, r2
	add r2, r2, r3
	mul r0, r4, r0
	add r0, r0, r3
	mul r1, r4, r1
	add r1, r1, r3
	lsr r2, r2, #11
	lsr r0, r0, #11
	lsl r0, r0, #5
	lsr r1, r1, #11
	lsl r1, r1, #10
	orr r2, r2, r0
	orr r2, r2, r1
	strh r2, [r7]
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r1, #2
	add r12, r12, r1
	add r7, r7, #2
	cmp r6, #0
	bne _0800C23C
	b _0800C29E
	.byte 0x00
	.byte 0x00
_0800C284:
	.4byte gPaletteBuf2
_0800C288:
	.4byte gPaletteBuf1
_0800C28C:
	.4byte gUnknown_03000520
_0800C290:
	.4byte gUnknown_0201EDE0
_0800C294:
	mov r3, #32
	add r12, r12, r3
	add r7, r7, #32
	add r2, r2, #1
	mov r8, r2
_0800C29E:
	mov r1, r8
	lsl r0, r1, #24
	lsr r2, r0, #24
	cmp r2, #31
	bls _0800C216
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0800C1EC

